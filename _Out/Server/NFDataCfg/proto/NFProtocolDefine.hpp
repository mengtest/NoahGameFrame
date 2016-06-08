// -------------------------------------------------------------------------
//    @FileName         :    NFProtocolDefine.hpp
//    @Author           :    NFrame Studio
//    @Date             :    Wed Jun  8 17:17:16 2016
//    @Module           :    NFProtocolDefine
// -------------------------------------------------------------------------

#ifndef NF_PR_NAME_HPP
#define NF_PR_NAME_HPP

#include <string>
namespace NFrame
{
class IObject
{
public:
	//Class name
	static const std::string& ThisName(){ static std::string xIObject = "IObject"; return xIObject; }
	// IObject
	// Property
	static const std::string& ID(){ static std::string xID = "ID"; return xID; } // string
	static const std::string& ClassName(){ static std::string xClassName = "ClassName"; return xClassName; } // string
	static const std::string& SceneID(){ static std::string xSceneID = "SceneID"; return xSceneID; } // int
	static const std::string& GroupID(){ static std::string xGroupID = "GroupID"; return xGroupID; } // int
	static const std::string& ConfigID(){ static std::string xConfigID = "ConfigID"; return xConfigID; } // string
	// Record

};

class BB_Build
{
public:
	//Class name
	static const std::string& ThisName(){ static std::string xBB_Build = "BB_Build"; return xBB_Build; }
	// IObject
	static const std::string& ID(){ static std::string xID = "ID"; return xID; } // string
	static const std::string& ClassName(){ static std::string xClassName = "ClassName"; return xClassName; } // string
	static const std::string& SceneID(){ static std::string xSceneID = "SceneID"; return xSceneID; } // int
	static const std::string& GroupID(){ static std::string xGroupID = "GroupID"; return xGroupID; } // int
	static const std::string& ConfigID(){ static std::string xConfigID = "ConfigID"; return xConfigID; } // string
	// Property
	static const std::string& Type(){ static std::string xType = "Type"; return xType; } // int
	static const std::string& SubType(){ static std::string xSubType = "SubType"; return xSubType; } // int
	static const std::string& Prefab(){ static std::string xPrefab = "Prefab"; return xPrefab; } // string
	static const std::string& NormalStateFunc(){ static std::string xNormalStateFunc = "NormalStateFunc"; return xNormalStateFunc; } // string
	static const std::string& UpStateFunc(){ static std::string xUpStateFunc = "UpStateFunc"; return xUpStateFunc; } // string
	static const std::string& Icon(){ static std::string xIcon = "Icon"; return xIcon; } // string
	static const std::string& ShowName(){ static std::string xShowName = "ShowName"; return xShowName; } // string
	static const std::string& Desc(){ static std::string xDesc = "Desc"; return xDesc; } // string
	// Record

};

class Block
{
public:
	//Class name
	static const std::string& ThisName(){ static std::string xBlock = "Block"; return xBlock; }
	// IObject
	static const std::string& ID(){ static std::string xID = "ID"; return xID; } // string
	static const std::string& ClassName(){ static std::string xClassName = "ClassName"; return xClassName; } // string
	static const std::string& SceneID(){ static std::string xSceneID = "SceneID"; return xSceneID; } // int
	static const std::string& GroupID(){ static std::string xGroupID = "GroupID"; return xGroupID; } // int
	static const std::string& ConfigID(){ static std::string xConfigID = "ConfigID"; return xConfigID; } // string
	// Property
	static const std::string& Tag(){ static std::string xTag = "Tag"; return xTag; } // int
	static const std::string& SpriteList(){ static std::string xSpriteList = "SpriteList"; return xSpriteList; } // string
	static const std::string& SpritePath(){ static std::string xSpritePath = "SpritePath"; return xSpritePath; } // string
	static const std::string& LeftSide(){ static std::string xLeftSide = "LeftSide"; return xLeftSide; } // string
	static const std::string& RightSide(){ static std::string xRightSide = "RightSide"; return xRightSide; } // string
	static const std::string& TopSide(){ static std::string xTopSide = "TopSide"; return xTopSide; } // string
	static const std::string& DownSide(){ static std::string xDownSide = "DownSide"; return xDownSide; } // string
	static const std::string& LeftTopSide(){ static std::string xLeftTopSide = "LeftTopSide"; return xLeftTopSide; } // string
	static const std::string& LeftDownSide(){ static std::string xLeftDownSide = "LeftDownSide"; return xLeftDownSide; } // string
	static const std::string& RightTopSide(){ static std::string xRightTopSide = "RightTopSide"; return xRightTopSide; } // string
	static const std::string& RightDownSide(){ static std::string xRightDownSide = "RightDownSide"; return xRightDownSide; } // string
	static const std::string& LeftTopOutSide(){ static std::string xLeftTopOutSide = "LeftTopOutSide"; return xLeftTopOutSide; } // string
	static const std::string& LeftDownOutSide(){ static std::string xLeftDownOutSide = "LeftDownOutSide"; return xLeftDownOutSide; } // string
	static const std::string& RightTopOutSide(){ static std::string xRightTopOutSide = "RightTopOutSide"; return xRightTopOutSide; } // string
	static const std::string& RightDownOutSide(){ static std::string xRightDownOutSide = "RightDownOutSide"; return xRightDownOutSide; } // string
	static const std::string& GrassList(){ static std::string xGrassList = "GrassList"; return xGrassList; } // string
	static const std::string& JoinList(){ static std::string xJoinList = "JoinList"; return xJoinList; } // string
	static const std::string& CrackList(){ static std::string xCrackList = "CrackList"; return xCrackList; } // string
	static const std::string& TreasureList(){ static std::string xTreasureList = "TreasureList"; return xTreasureList; } // string
	static const std::string& TreeRootList(){ static std::string xTreeRootList = "TreeRootList"; return xTreeRootList; } // string
	// Record

};

class Buff
{
public:
	//Class name
	static const std::string& ThisName(){ static std::string xBuff = "Buff"; return xBuff; }
	// IObject
	static const std::string& ID(){ static std::string xID = "ID"; return xID; } // string
	static const std::string& ClassName(){ static std::string xClassName = "ClassName"; return xClassName; } // string
	static const std::string& SceneID(){ static std::string xSceneID = "SceneID"; return xSceneID; } // int
	static const std::string& GroupID(){ static std::string xGroupID = "GroupID"; return xGroupID; } // int
	static const std::string& ConfigID(){ static std::string xConfigID = "ConfigID"; return xConfigID; } // string
	// Property
	static const std::string& EffectType(){ static std::string xEffectType = "EffectType"; return xEffectType; } // int
	static const std::string& EffectValueType(){ static std::string xEffectValueType = "EffectValueType"; return xEffectValueType; } // int
	static const std::string& EffectValueReferType(){ static std::string xEffectValueReferType = "EffectValueReferType"; return xEffectValueReferType; } // int
	static const std::string& EffectTimeValue(){ static std::string xEffectTimeValue = "EffectTimeValue"; return xEffectTimeValue; } // int
	static const std::string& EffectTimeInterval(){ static std::string xEffectTimeInterval = "EffectTimeInterval"; return xEffectTimeInterval; } // float
	static const std::string& WashGroupID(){ static std::string xWashGroupID = "WashGroupID"; return xWashGroupID; } // int
	static const std::string& ReverseReferType(){ static std::string xReverseReferType = "ReverseReferType"; return xReverseReferType; } // int
	static const std::string& EffectClearOnDead(){ static std::string xEffectClearOnDead = "EffectClearOnDead"; return xEffectClearOnDead; } // int
	static const std::string& DownSaveType(){ static std::string xDownSaveType = "DownSaveType"; return xDownSaveType; } // int
	// Record

};

class ChatGroup
{
public:
	//Class name
	static const std::string& ThisName(){ static std::string xChatGroup = "ChatGroup"; return xChatGroup; }
	// IObject
	static const std::string& ID(){ static std::string xID = "ID"; return xID; } // string
	static const std::string& ClassName(){ static std::string xClassName = "ClassName"; return xClassName; } // string
	static const std::string& SceneID(){ static std::string xSceneID = "SceneID"; return xSceneID; } // int
	static const std::string& GroupID(){ static std::string xGroupID = "GroupID"; return xGroupID; } // int
	static const std::string& ConfigID(){ static std::string xConfigID = "ConfigID"; return xConfigID; } // string
	// Property
	static const std::string& Name(){ static std::string xName = "Name"; return xName; } // string
	static const std::string& CreateObject(){ static std::string xCreateObject = "CreateObject"; return xCreateObject; } // object
	// Record
	static const std::string& R_GroupMemberList(){ static std::string xGroupMemberList = "GroupMemberList"; return xGroupMemberList;}
	static const std::string& R_ChatList(){ static std::string xChatList = "ChatList"; return xChatList;}

	enum GroupMemberList
	{
		GroupMemberList_GUID		= 0, // GUID -- object
		GroupMemberList_Online		= 1, // Online -- int
		GroupMemberList_GameID		= 2, // GameID -- int

	};

	enum ChatList
	{
		ChatList_GUID		= 0, // GUID -- object
		ChatList_msg		= 1, // msg -- string
		ChatList_time		= 2, // time -- int

	};

};

class ConsumeData
{
public:
	//Class name
	static const std::string& ThisName(){ static std::string xConsumeData = "ConsumeData"; return xConsumeData; }
	// IObject
	static const std::string& ID(){ static std::string xID = "ID"; return xID; } // string
	static const std::string& ClassName(){ static std::string xClassName = "ClassName"; return xClassName; } // string
	static const std::string& SceneID(){ static std::string xSceneID = "SceneID"; return xSceneID; } // int
	static const std::string& GroupID(){ static std::string xGroupID = "GroupID"; return xGroupID; } // int
	static const std::string& ConfigID(){ static std::string xConfigID = "ConfigID"; return xConfigID; } // string
	// Property
	static const std::string& VIPEXP(){ static std::string xVIPEXP = "VIPEXP"; return xVIPEXP; } // int
	static const std::string& EXP(){ static std::string xEXP = "EXP"; return xEXP; } // int
	static const std::string& HP(){ static std::string xHP = "HP"; return xHP; } // int
	static const std::string& SP(){ static std::string xSP = "SP"; return xSP; } // int
	static const std::string& MP(){ static std::string xMP = "MP"; return xMP; } // int
	static const std::string& Gold(){ static std::string xGold = "Gold"; return xGold; } // int
	static const std::string& Money(){ static std::string xMoney = "Money"; return xMoney; } // int
	// Record

};

class Cost
{
public:
	//Class name
	static const std::string& ThisName(){ static std::string xCost = "Cost"; return xCost; }
	// IObject
	static const std::string& ID(){ static std::string xID = "ID"; return xID; } // string
	static const std::string& ClassName(){ static std::string xClassName = "ClassName"; return xClassName; } // string
	static const std::string& SceneID(){ static std::string xSceneID = "SceneID"; return xSceneID; } // int
	static const std::string& GroupID(){ static std::string xGroupID = "GroupID"; return xGroupID; } // int
	static const std::string& ConfigID(){ static std::string xConfigID = "ConfigID"; return xConfigID; } // string
	// Property
	static const std::string& CostMoney(){ static std::string xCostMoney = "CostMoney"; return xCostMoney; } // int
	static const std::string& CostDiamond(){ static std::string xCostDiamond = "CostDiamond"; return xCostDiamond; } // int
	static const std::string& CostVP(){ static std::string xCostVP = "CostVP"; return xCostVP; } // int
	static const std::string& CostHonour(){ static std::string xCostHonour = "CostHonour"; return xCostHonour; } // int
	// Record

};

class DescData
{
public:
	//Class name
	static const std::string& ThisName(){ static std::string xDescData = "DescData"; return xDescData; }
	// IObject
	static const std::string& ID(){ static std::string xID = "ID"; return xID; } // string
	static const std::string& ClassName(){ static std::string xClassName = "ClassName"; return xClassName; } // string
	static const std::string& SceneID(){ static std::string xSceneID = "SceneID"; return xSceneID; } // int
	static const std::string& GroupID(){ static std::string xGroupID = "GroupID"; return xGroupID; } // int
	static const std::string& ConfigID(){ static std::string xConfigID = "ConfigID"; return xConfigID; } // string
	// Property
	static const std::string& ShowName(){ static std::string xShowName = "ShowName"; return xShowName; } // string
	static const std::string& Icon(){ static std::string xIcon = "Icon"; return xIcon; } // string
	static const std::string& Atlas(){ static std::string xAtlas = "Atlas"; return xAtlas; } // string
	static const std::string& PrefabPath(){ static std::string xPrefabPath = "PrefabPath"; return xPrefabPath; } // string
	static const std::string& PerformanceEffect(){ static std::string xPerformanceEffect = "PerformanceEffect"; return xPerformanceEffect; } // string
	static const std::string& PerformanceSound(){ static std::string xPerformanceSound = "PerformanceSound"; return xPerformanceSound; } // string
	static const std::string& DescText(){ static std::string xDescText = "DescText"; return xDescText; } // string
	// Record

};

class EffectData
{
public:
	//Class name
	static const std::string& ThisName(){ static std::string xEffectData = "EffectData"; return xEffectData; }
	// IObject
	static const std::string& ID(){ static std::string xID = "ID"; return xID; } // string
	static const std::string& ClassName(){ static std::string xClassName = "ClassName"; return xClassName; } // string
	static const std::string& SceneID(){ static std::string xSceneID = "SceneID"; return xSceneID; } // int
	static const std::string& GroupID(){ static std::string xGroupID = "GroupID"; return xGroupID; } // int
	static const std::string& ConfigID(){ static std::string xConfigID = "ConfigID"; return xConfigID; } // string
	// Property
	static const std::string& MAXHP(){ static std::string xMAXHP = "MAXHP"; return xMAXHP; } // int
	static const std::string& MAXMP(){ static std::string xMAXMP = "MAXMP"; return xMAXMP; } // int
	static const std::string& MAXSP(){ static std::string xMAXSP = "MAXSP"; return xMAXSP; } // int
	static const std::string& HPREGEN(){ static std::string xHPREGEN = "HPREGEN"; return xHPREGEN; } // int
	static const std::string& SPREGEN(){ static std::string xSPREGEN = "SPREGEN"; return xSPREGEN; } // int
	static const std::string& MPREGEN(){ static std::string xMPREGEN = "MPREGEN"; return xMPREGEN; } // int
	static const std::string& ATK_VALUE(){ static std::string xATK_VALUE = "ATK_VALUE"; return xATK_VALUE; } // int
	static const std::string& DEF_VALUE(){ static std::string xDEF_VALUE = "DEF_VALUE"; return xDEF_VALUE; } // int
	static const std::string& MOVE_SPEED(){ static std::string xMOVE_SPEED = "MOVE_SPEED"; return xMOVE_SPEED; } // int
	static const std::string& ATK_SPEED(){ static std::string xATK_SPEED = "ATK_SPEED"; return xATK_SPEED; } // int
	static const std::string& ATK_FIRE(){ static std::string xATK_FIRE = "ATK_FIRE"; return xATK_FIRE; } // int
	static const std::string& ATK_LIGHT(){ static std::string xATK_LIGHT = "ATK_LIGHT"; return xATK_LIGHT; } // int
	static const std::string& ATK_ICE(){ static std::string xATK_ICE = "ATK_ICE"; return xATK_ICE; } // int
	static const std::string& ATK_POISON(){ static std::string xATK_POISON = "ATK_POISON"; return xATK_POISON; } // int
	static const std::string& DEF_FIRE(){ static std::string xDEF_FIRE = "DEF_FIRE"; return xDEF_FIRE; } // int
	static const std::string& DEF_LIGHT(){ static std::string xDEF_LIGHT = "DEF_LIGHT"; return xDEF_LIGHT; } // int
	static const std::string& DEF_ICE(){ static std::string xDEF_ICE = "DEF_ICE"; return xDEF_ICE; } // int
	static const std::string& DEF_POISON(){ static std::string xDEF_POISON = "DEF_POISON"; return xDEF_POISON; } // int
	static const std::string& DIZZY_GATE(){ static std::string xDIZZY_GATE = "DIZZY_GATE"; return xDIZZY_GATE; } // int
	static const std::string& MOVE_GATE(){ static std::string xMOVE_GATE = "MOVE_GATE"; return xMOVE_GATE; } // int
	static const std::string& SKILL_GATE(){ static std::string xSKILL_GATE = "SKILL_GATE"; return xSKILL_GATE; } // int
	static const std::string& PHYSICAL_GATE(){ static std::string xPHYSICAL_GATE = "PHYSICAL_GATE"; return xPHYSICAL_GATE; } // int
	static const std::string& MAGIC_GATE(){ static std::string xMAGIC_GATE = "MAGIC_GATE"; return xMAGIC_GATE; } // int
	static const std::string& BUFF_GATE(){ static std::string xBUFF_GATE = "BUFF_GATE"; return xBUFF_GATE; } // int
	// Record

};

class Equip
{
public:
	//Class name
	static const std::string& ThisName(){ static std::string xEquip = "Equip"; return xEquip; }
	// IObject
	static const std::string& ID(){ static std::string xID = "ID"; return xID; } // string
	static const std::string& ClassName(){ static std::string xClassName = "ClassName"; return xClassName; } // string
	static const std::string& SceneID(){ static std::string xSceneID = "SceneID"; return xSceneID; } // int
	static const std::string& GroupID(){ static std::string xGroupID = "GroupID"; return xGroupID; } // int
	static const std::string& ConfigID(){ static std::string xConfigID = "ConfigID"; return xConfigID; } // string
	// Property
	static const std::string& Sex(){ static std::string xSex = "Sex"; return xSex; } // int
	static const std::string& IntensiveBuffList(){ static std::string xIntensiveBuffList = "IntensiveBuffList"; return xIntensiveBuffList; } // string
	static const std::string& EnchantmentBuffList(){ static std::string xEnchantmentBuffList = "EnchantmentBuffList"; return xEnchantmentBuffList; } // string
	static const std::string& SuitID(){ static std::string xSuitID = "SuitID"; return xSuitID; } // int
	static const std::string& SuitBuffID(){ static std::string xSuitBuffID = "SuitBuffID"; return xSuitBuffID; } // string
	static const std::string& ItemType(){ static std::string xItemType = "ItemType"; return xItemType; } // int
	static const std::string& ItemSubType(){ static std::string xItemSubType = "ItemSubType"; return xItemSubType; } // int
	static const std::string& Level(){ static std::string xLevel = "Level"; return xLevel; } // int
	static const std::string& Job(){ static std::string xJob = "Job"; return xJob; } // string
	static const std::string& Quality(){ static std::string xQuality = "Quality"; return xQuality; } // int
	static const std::string& ShowName(){ static std::string xShowName = "ShowName"; return xShowName; } // string
	static const std::string& Desc(){ static std::string xDesc = "Desc"; return xDesc; } // string
	static const std::string& EffectData(){ static std::string xEffectData = "EffectData"; return xEffectData; } // string
	static const std::string& PrefabPath(){ static std::string xPrefabPath = "PrefabPath"; return xPrefabPath; } // string
	static const std::string& DropPrePath(){ static std::string xDropPrePath = "DropPrePath"; return xDropPrePath; } // string
	static const std::string& BuyPrice(){ static std::string xBuyPrice = "BuyPrice"; return xBuyPrice; } // int
	static const std::string& SalePrice(){ static std::string xSalePrice = "SalePrice"; return xSalePrice; } // int
	static const std::string& Icon(){ static std::string xIcon = "Icon"; return xIcon; } // string
	// Record

};

class EquipRef
{
public:
	//Class name
	static const std::string& ThisName(){ static std::string xEquipRef = "EquipRef"; return xEquipRef; }
	// IObject
	static const std::string& ID(){ static std::string xID = "ID"; return xID; } // string
	static const std::string& ClassName(){ static std::string xClassName = "ClassName"; return xClassName; } // string
	static const std::string& SceneID(){ static std::string xSceneID = "SceneID"; return xSceneID; } // int
	static const std::string& GroupID(){ static std::string xGroupID = "GroupID"; return xGroupID; } // int
	static const std::string& ConfigID(){ static std::string xConfigID = "ConfigID"; return xConfigID; } // string
	// Property
	static const std::string& EQUIP1(){ static std::string xEQUIP1 = "EQUIP1"; return xEQUIP1; } // string
	static const std::string& EQUIP2(){ static std::string xEQUIP2 = "EQUIP2"; return xEQUIP2; } // string
	static const std::string& EQUIP3(){ static std::string xEQUIP3 = "EQUIP3"; return xEQUIP3; } // string
	static const std::string& EQUIP4(){ static std::string xEQUIP4 = "EQUIP4"; return xEQUIP4; } // string
	static const std::string& EQUIP5(){ static std::string xEQUIP5 = "EQUIP5"; return xEQUIP5; } // string
	static const std::string& EQUIP6(){ static std::string xEQUIP6 = "EQUIP6"; return xEQUIP6; } // string
	// Record

};

class Guild
{
public:
	//Class name
	static const std::string& ThisName(){ static std::string xGuild = "Guild"; return xGuild; }
	// IObject
	static const std::string& ID(){ static std::string xID = "ID"; return xID; } // string
	static const std::string& ClassName(){ static std::string xClassName = "ClassName"; return xClassName; } // string
	static const std::string& SceneID(){ static std::string xSceneID = "SceneID"; return xSceneID; } // int
	static const std::string& GroupID(){ static std::string xGroupID = "GroupID"; return xGroupID; } // int
	static const std::string& ConfigID(){ static std::string xConfigID = "ConfigID"; return xConfigID; } // string
	// Property
	static const std::string& Name(){ static std::string xName = "Name"; return xName; } // string
	static const std::string& PresidentID(){ static std::string xPresidentID = "PresidentID"; return xPresidentID; } // object
	static const std::string& PresidentName(){ static std::string xPresidentName = "PresidentName"; return xPresidentName; } // string
	static const std::string& Rank(){ static std::string xRank = "Rank"; return xRank; } // int
	static const std::string& GuildAD(){ static std::string xGuildAD = "GuildAD"; return xGuildAD; } // string
	static const std::string& GuildDesc(){ static std::string xGuildDesc = "GuildDesc"; return xGuildDesc; } // string
	static const std::string& GuildMoney(){ static std::string xGuildMoney = "GuildMoney"; return xGuildMoney; } // int
	static const std::string& GuildLevel(){ static std::string xGuildLevel = "GuildLevel"; return xGuildLevel; } // int
	static const std::string& GuildContinueDay(){ static std::string xGuildContinueDay = "GuildContinueDay"; return xGuildContinueDay; } // int
	static const std::string& GuilID(){ static std::string xGuilID = "GuilID"; return xGuilID; } // object
	static const std::string& GuilIDIcon(){ static std::string xGuilIDIcon = "GuilIDIcon"; return xGuilIDIcon; } // int
	static const std::string& GuildMemeberCount(){ static std::string xGuildMemeberCount = "GuildMemeberCount"; return xGuildMemeberCount; } // int
	static const std::string& GuildMemeberMaxCount(){ static std::string xGuildMemeberMaxCount = "GuildMemeberMaxCount"; return xGuildMemeberMaxCount; } // int
	static const std::string& GuildHonor(){ static std::string xGuildHonor = "GuildHonor"; return xGuildHonor; } // int
	static const std::string& GuildCreateTime(){ static std::string xGuildCreateTime = "GuildCreateTime"; return xGuildCreateTime; } // int
	static const std::string& GuildCreateter(){ static std::string xGuildCreateter = "GuildCreateter"; return xGuildCreateter; } // int
	static const std::string& GuildExp(){ static std::string xGuildExp = "GuildExp"; return xGuildExp; } // int
	static const std::string& GuildStatus(){ static std::string xGuildStatus = "GuildStatus"; return xGuildStatus; } // int
	static const std::string& DismissTime(){ static std::string xDismissTime = "DismissTime"; return xDismissTime; } // int
	static const std::string& RecruitAD(){ static std::string xRecruitAD = "RecruitAD"; return xRecruitAD; } // string
	static const std::string& RecruitLevel(){ static std::string xRecruitLevel = "RecruitLevel"; return xRecruitLevel; } // int
	static const std::string& KingWarResource(){ static std::string xKingWarResource = "KingWarResource"; return xKingWarResource; } // int
	static const std::string& AutoRecruit(){ static std::string xAutoRecruit = "AutoRecruit"; return xAutoRecruit; } // string
	static const std::string& EctypServer(){ static std::string xEctypServer = "EctypServer"; return xEctypServer; } // int
	static const std::string& EctypID(){ static std::string xEctypID = "EctypID"; return xEctypID; } // int
	static const std::string& EctypIDGroup(){ static std::string xEctypIDGroup = "EctypIDGroup"; return xEctypIDGroup; } // int
	// Record
	static const std::string& R_GuildBoss(){ static std::string xGuildBoss = "GuildBoss"; return xGuildBoss;}
	static const std::string& R_GuildMemberList(){ static std::string xGuildMemberList = "GuildMemberList"; return xGuildMemberList;}
	static const std::string& R_GuildAppyList(){ static std::string xGuildAppyList = "GuildAppyList"; return xGuildAppyList;}
	static const std::string& R_GuildEvent(){ static std::string xGuildEvent = "GuildEvent"; return xGuildEvent;}
	static const std::string& R_GuildHouse(){ static std::string xGuildHouse = "GuildHouse"; return xGuildHouse;}
	static const std::string& R_GuildSkill(){ static std::string xGuildSkill = "GuildSkill"; return xGuildSkill;}

	enum GuildBoss
	{
		GuildBoss_GUID		= 0, // GUID -- object
		GuildBoss_Name		= 1, // Name -- string
		GuildBoss_Level		= 2, // Level -- int
		GuildBoss_Job		= 3, // Job -- int
		GuildBoss_Donation		= 4, // Donation -- int
		GuildBoss_VIP		= 5, // VIP -- int
		GuildBoss_Offline		= 6, // Offline -- int
		GuildBoss_Power		= 7, // Power -- int

	};

	enum GuildMemberList
	{
		GuildMemberList_GUID		= 0, // GUID -- object
		GuildMemberList_Name		= 1, // Name -- string
		GuildMemberList_Level		= 2, // Level -- int
		GuildMemberList_Job		= 3, // Job -- int
		GuildMemberList_Donation		= 4, // Donation -- int
		GuildMemberList_Receive		= 5, // Receive -- int
		GuildMemberList_VIP		= 6, // VIP -- int
		GuildMemberList_Online		= 7, // Online -- int
		GuildMemberList_Power		= 8, // Power -- int
		GuildMemberList_Title		= 9, // Title -- int
		GuildMemberList_GameID		= 10, // GameID -- int
		GuildMemberList_JoinTime		= 11, // JoinTime -- int
		GuildMemberList_Contribution		= 12, // Contribution -- int
		GuildMemberList_AllContribution		= 13, // AllContribution -- int

	};

	enum GuildAppyList
	{
		GuildAppyList_GUID		= 0, // GUID -- object
		GuildAppyList_Name		= 1, // Name -- string
		GuildAppyList_Level		= 2, // Level -- int
		GuildAppyList_Job		= 3, // Job -- int
		GuildAppyList_Donation		= 4, // Donation -- int
		GuildAppyList_VIP		= 5, // VIP -- int
		GuildAppyList_Power		= 6, // Power -- int

	};

	enum GuildEvent
	{
		GuildEvent_GUID		= 0, // GUID -- object
		GuildEvent_Name		= 1, // Name -- string
		GuildEvent_Level		= 2, // Level -- int
		GuildEvent_Job		= 3, // Job -- int
		GuildEvent_Donation		= 4, // Donation -- int
		GuildEvent_VIP		= 5, // VIP -- int
		GuildEvent_Offline		= 6, // Offline -- int
		GuildEvent_Power		= 7, // Power -- int
		GuildEvent_EventID		= 8, // EventID -- int
		GuildEvent_EventTime		= 9, // EventTime -- int
		GuildEvent_Context		= 10, // Context -- string

	};

	enum GuildHouse
	{
		GuildHouse_GUID		= 0, // GUID -- object
		GuildHouse_Name		= 1, // Name -- string
		GuildHouse_Level		= 2, // Level -- int
		GuildHouse_Job		= 3, // Job -- int
		GuildHouse_Donation		= 4, // Donation -- int
		GuildHouse_VIP		= 5, // VIP -- int
		GuildHouse_Offline		= 6, // Offline -- int
		GuildHouse_Power		= 7, // Power -- int

	};

	enum GuildSkill
	{
		GuildSkill_GUID		= 0, // GUID -- object
		GuildSkill_Name		= 1, // Name -- string
		GuildSkill_Level		= 2, // Level -- int
		GuildSkill_Job		= 3, // Job -- int
		GuildSkill_Donation		= 4, // Donation -- int
		GuildSkill_VIP		= 5, // VIP -- int
		GuildSkill_Offline		= 6, // Offline -- int
		GuildSkill_Power		= 7, // Power -- int

	};

};

class GuildConfig
{
public:
	//Class name
	static const std::string& ThisName(){ static std::string xGuildConfig = "GuildConfig"; return xGuildConfig; }
	// IObject
	static const std::string& ID(){ static std::string xID = "ID"; return xID; } // string
	static const std::string& ClassName(){ static std::string xClassName = "ClassName"; return xClassName; } // string
	static const std::string& SceneID(){ static std::string xSceneID = "SceneID"; return xSceneID; } // int
	static const std::string& GroupID(){ static std::string xGroupID = "GroupID"; return xGroupID; } // int
	static const std::string& ConfigID(){ static std::string xConfigID = "ConfigID"; return xConfigID; } // string
	// Property
	static const std::string& ConditionPlayerLevel(){ static std::string xConditionPlayerLevel = "ConditionPlayerLevel"; return xConditionPlayerLevel; } // int
	static const std::string& ConditionPlayerVIP(){ static std::string xConditionPlayerVIP = "ConditionPlayerVIP"; return xConditionPlayerVIP; } // int
	static const std::string& CostMoney(){ static std::string xCostMoney = "CostMoney"; return xCostMoney; } // int
	static const std::string& DismissTime(){ static std::string xDismissTime = "DismissTime"; return xDismissTime; } // int
	static const std::string& GuildLevel(){ static std::string xGuildLevel = "GuildLevel"; return xGuildLevel; } // int
	static const std::string& MaxMember(){ static std::string xMaxMember = "MaxMember"; return xMaxMember; } // int
	// Record

};

class GuildJob
{
public:
	//Class name
	static const std::string& ThisName(){ static std::string xGuildJob = "GuildJob"; return xGuildJob; }
	// IObject
	static const std::string& ID(){ static std::string xID = "ID"; return xID; } // string
	static const std::string& ClassName(){ static std::string xClassName = "ClassName"; return xClassName; } // string
	static const std::string& SceneID(){ static std::string xSceneID = "SceneID"; return xSceneID; } // int
	static const std::string& GroupID(){ static std::string xGroupID = "GroupID"; return xGroupID; } // int
	static const std::string& ConfigID(){ static std::string xConfigID = "ConfigID"; return xConfigID; } // string
	// Property
	static const std::string& Job(){ static std::string xJob = "Job"; return xJob; } // int
	static const std::string& JobCount(){ static std::string xJobCount = "JobCount"; return xJobCount; } // object
	static const std::string& Appoint(){ static std::string xAppoint = "Appoint"; return xAppoint; } // object
	static const std::string& Fire(){ static std::string xFire = "Fire"; return xFire; } // object
	static const std::string& Demise(){ static std::string xDemise = "Demise"; return xDemise; } // object
	static const std::string& ApplyDismiss(){ static std::string xApplyDismiss = "ApplyDismiss"; return xApplyDismiss; } // object
	static const std::string& StopDismiss(){ static std::string xStopDismiss = "StopDismiss"; return xStopDismiss; } // object
	static const std::string& AcceptApply(){ static std::string xAcceptApply = "AcceptApply"; return xAcceptApply; } // object
	static const std::string& DenyApply(){ static std::string xDenyApply = "DenyApply"; return xDenyApply; } // object
	static const std::string& Kickout(){ static std::string xKickout = "Kickout"; return xKickout; } // object
	static const std::string& SetRecruit(){ static std::string xSetRecruit = "SetRecruit"; return xSetRecruit; } // object
	static const std::string& PublishRecruit(){ static std::string xPublishRecruit = "PublishRecruit"; return xPublishRecruit; } // object
	static const std::string& EditAD(){ static std::string xEditAD = "EditAD"; return xEditAD; } // object
	static const std::string& Leave(){ static std::string xLeave = "Leave"; return xLeave; } // object
	static const std::string& LevelUp(){ static std::string xLevelUp = "LevelUp"; return xLevelUp; } // object
	// Record

};

class GuildName
{
public:
	//Class name
	static const std::string& ThisName(){ static std::string xGuildName = "GuildName"; return xGuildName; }
	// IObject
	static const std::string& ID(){ static std::string xID = "ID"; return xID; } // string
	static const std::string& ClassName(){ static std::string xClassName = "ClassName"; return xClassName; } // string
	static const std::string& SceneID(){ static std::string xSceneID = "SceneID"; return xSceneID; } // int
	static const std::string& GroupID(){ static std::string xGroupID = "GroupID"; return xGroupID; } // int
	static const std::string& ConfigID(){ static std::string xConfigID = "ConfigID"; return xConfigID; } // string
	// Property
	static const std::string& GuildID(){ static std::string xGuildID = "GuildID"; return xGuildID; } // object
	// Record

};

class Hero
{
public:
	//Class name
	static const std::string& ThisName(){ static std::string xHero = "Hero"; return xHero; }
	// IObject
	static const std::string& ID(){ static std::string xID = "ID"; return xID; } // string
	static const std::string& ClassName(){ static std::string xClassName = "ClassName"; return xClassName; } // string
	static const std::string& SceneID(){ static std::string xSceneID = "SceneID"; return xSceneID; } // int
	static const std::string& GroupID(){ static std::string xGroupID = "GroupID"; return xGroupID; } // int
	static const std::string& ConfigID(){ static std::string xConfigID = "ConfigID"; return xConfigID; } // string
	// Property
	static const std::string& SkillRef(){ static std::string xSkillRef = "SkillRef"; return xSkillRef; } // string
	static const std::string& TalentRef(){ static std::string xTalentRef = "TalentRef"; return xTalentRef; } // string
	// Record

};

class InitProperty
{
public:
	//Class name
	static const std::string& ThisName(){ static std::string xInitProperty = "InitProperty"; return xInitProperty; }
	// IObject
	static const std::string& ID(){ static std::string xID = "ID"; return xID; } // string
	static const std::string& ClassName(){ static std::string xClassName = "ClassName"; return xClassName; } // string
	static const std::string& SceneID(){ static std::string xSceneID = "SceneID"; return xSceneID; } // int
	static const std::string& GroupID(){ static std::string xGroupID = "GroupID"; return xGroupID; } // int
	static const std::string& ConfigID(){ static std::string xConfigID = "ConfigID"; return xConfigID; } // string
	// Property
	static const std::string& Job(){ static std::string xJob = "Job"; return xJob; } // int
	static const std::string& Level(){ static std::string xLevel = "Level"; return xLevel; } // int
	static const std::string& EffectData(){ static std::string xEffectData = "EffectData"; return xEffectData; } // string
	static const std::string& SkillIDRef(){ static std::string xSkillIDRef = "SkillIDRef"; return xSkillIDRef; } // string
	static const std::string& ModelPtah(){ static std::string xModelPtah = "ModelPtah"; return xModelPtah; } // string
	// Record

};

class Item
{
public:
	//Class name
	static const std::string& ThisName(){ static std::string xItem = "Item"; return xItem; }
	// IObject
	static const std::string& ID(){ static std::string xID = "ID"; return xID; } // string
	static const std::string& ClassName(){ static std::string xClassName = "ClassName"; return xClassName; } // string
	static const std::string& SceneID(){ static std::string xSceneID = "SceneID"; return xSceneID; } // int
	static const std::string& GroupID(){ static std::string xGroupID = "GroupID"; return xGroupID; } // int
	static const std::string& ConfigID(){ static std::string xConfigID = "ConfigID"; return xConfigID; } // string
	// Property
	static const std::string& ItemType(){ static std::string xItemType = "ItemType"; return xItemType; } // int
	static const std::string& ItemSubType(){ static std::string xItemSubType = "ItemSubType"; return xItemSubType; } // int
	static const std::string& Level(){ static std::string xLevel = "Level"; return xLevel; } // int
	static const std::string& Job(){ static std::string xJob = "Job"; return xJob; } // string
	static const std::string& Quality(){ static std::string xQuality = "Quality"; return xQuality; } // int
	static const std::string& DescID(){ static std::string xDescID = "DescID"; return xDescID; } // string
	static const std::string& EffectData(){ static std::string xEffectData = "EffectData"; return xEffectData; } // string
	static const std::string& ConsumeData(){ static std::string xConsumeData = "ConsumeData"; return xConsumeData; } // string
	static const std::string& AwardData(){ static std::string xAwardData = "AwardData"; return xAwardData; } // string
	static const std::string& AwardProperty(){ static std::string xAwardProperty = "AwardProperty"; return xAwardProperty; } // string
	static const std::string& CoolDownTime(){ static std::string xCoolDownTime = "CoolDownTime"; return xCoolDownTime; } // float
	static const std::string& OverlayCount(){ static std::string xOverlayCount = "OverlayCount"; return xOverlayCount; } // int
	static const std::string& ExpiredType(){ static std::string xExpiredType = "ExpiredType"; return xExpiredType; } // int
	static const std::string& BuyPrice(){ static std::string xBuyPrice = "BuyPrice"; return xBuyPrice; } // int
	static const std::string& SalePrice(){ static std::string xSalePrice = "SalePrice"; return xSalePrice; } // int
	static const std::string& Script(){ static std::string xScript = "Script"; return xScript; } // string
	static const std::string& Extend(){ static std::string xExtend = "Extend"; return xExtend; } // string
	static const std::string& Icon(){ static std::string xIcon = "Icon"; return xIcon; } // string
	static const std::string& ShowName(){ static std::string xShowName = "ShowName"; return xShowName; } // string
	// Record

};

class Language
{
public:
	//Class name
	static const std::string& ThisName(){ static std::string xLanguage = "Language"; return xLanguage; }
	// IObject
	static const std::string& ID(){ static std::string xID = "ID"; return xID; } // string
	static const std::string& ClassName(){ static std::string xClassName = "ClassName"; return xClassName; } // string
	static const std::string& SceneID(){ static std::string xSceneID = "SceneID"; return xSceneID; } // int
	static const std::string& GroupID(){ static std::string xGroupID = "GroupID"; return xGroupID; } // int
	static const std::string& ConfigID(){ static std::string xConfigID = "ConfigID"; return xConfigID; } // string
	// Property
	static const std::string& English(){ static std::string xEnglish = "English"; return xEnglish; } // string
	static const std::string& Chinese(){ static std::string xChinese = "Chinese"; return xChinese; } // string
	// Record

};

class Map
{
public:
	//Class name
	static const std::string& ThisName(){ static std::string xMap = "Map"; return xMap; }
	// IObject
	static const std::string& ID(){ static std::string xID = "ID"; return xID; } // string
	static const std::string& ClassName(){ static std::string xClassName = "ClassName"; return xClassName; } // string
	static const std::string& SceneID(){ static std::string xSceneID = "SceneID"; return xSceneID; } // int
	static const std::string& GroupID(){ static std::string xGroupID = "GroupID"; return xGroupID; } // int
	static const std::string& ConfigID(){ static std::string xConfigID = "ConfigID"; return xConfigID; } // string
	// Property
	static const std::string& MaxCount(){ static std::string xMaxCount = "MaxCount"; return xMaxCount; } // int
	static const std::string& InComeGold(){ static std::string xInComeGold = "InComeGold"; return xInComeGold; } // int
	static const std::string& InComeDiamond(){ static std::string xInComeDiamond = "InComeDiamond"; return xInComeDiamond; } // int
	static const std::string& InComeOil(){ static std::string xInComeOil = "InComeOil"; return xInComeOil; } // int
	static const std::string& X(){ static std::string xX = "X"; return xX; } // int
	static const std::string& Z(){ static std::string xZ = "Z"; return xZ; } // int
	static const std::string& MapLevel(){ static std::string xMapLevel = "MapLevel"; return xMapLevel; } // int
	// Record
	static const std::string& R_Station(){ static std::string xStation = "Station"; return xStation;}

	enum Station
	{
		Station_GUID		= 0, // GUID -- object
		Station_GuildID		= 1, // GuildID -- object
		Station_GuildName		= 2, // GuildName -- string
		Station_Level		= 3, // Level -- int
		Station_Title		= 4, // Title -- string
		Station_Slogan		= 5, // Slogan -- string
		Station_State		= 6, // State -- int
		Station_CurMemberCount		= 7, // CurMemberCount -- int

	};

};

class NPC
{
public:
	//Class name
	static const std::string& ThisName(){ static std::string xNPC = "NPC"; return xNPC; }
	// IObject
	static const std::string& ID(){ static std::string xID = "ID"; return xID; } // string
	static const std::string& ClassName(){ static std::string xClassName = "ClassName"; return xClassName; } // string
	static const std::string& SceneID(){ static std::string xSceneID = "SceneID"; return xSceneID; } // int
	static const std::string& GroupID(){ static std::string xGroupID = "GroupID"; return xGroupID; } // int
	static const std::string& ConfigID(){ static std::string xConfigID = "ConfigID"; return xConfigID; } // string
	// Property
	static const std::string& SeedID(){ static std::string xSeedID = "SeedID"; return xSeedID; } // string
	static const std::string& VIPEXP(){ static std::string xVIPEXP = "VIPEXP"; return xVIPEXP; } // int
	static const std::string& EXP(){ static std::string xEXP = "EXP"; return xEXP; } // int
	static const std::string& HP(){ static std::string xHP = "HP"; return xHP; } // int
	static const std::string& SP(){ static std::string xSP = "SP"; return xSP; } // int
	static const std::string& MP(){ static std::string xMP = "MP"; return xMP; } // int
	static const std::string& Gold(){ static std::string xGold = "Gold"; return xGold; } // int
	static const std::string& Money(){ static std::string xMoney = "Money"; return xMoney; } // int
	static const std::string& X(){ static std::string xX = "X"; return xX; } // float
	static const std::string& Y(){ static std::string xY = "Y"; return xY; } // float
	static const std::string& Z(){ static std::string xZ = "Z"; return xZ; } // float
	static const std::string& TargetX(){ static std::string xTargetX = "TargetX"; return xTargetX; } // float
	static const std::string& TargetY(){ static std::string xTargetY = "TargetY"; return xTargetY; } // float
	static const std::string& TargetZ(){ static std::string xTargetZ = "TargetZ"; return xTargetZ; } // float
	static const std::string& MAXHP(){ static std::string xMAXHP = "MAXHP"; return xMAXHP; } // int
	static const std::string& MAXMP(){ static std::string xMAXMP = "MAXMP"; return xMAXMP; } // int
	static const std::string& MAXSP(){ static std::string xMAXSP = "MAXSP"; return xMAXSP; } // int
	static const std::string& HPREGEN(){ static std::string xHPREGEN = "HPREGEN"; return xHPREGEN; } // int
	static const std::string& SPREGEN(){ static std::string xSPREGEN = "SPREGEN"; return xSPREGEN; } // int
	static const std::string& MPREGEN(){ static std::string xMPREGEN = "MPREGEN"; return xMPREGEN; } // int
	static const std::string& ATK_VALUE(){ static std::string xATK_VALUE = "ATK_VALUE"; return xATK_VALUE; } // int
	static const std::string& DEF_VALUE(){ static std::string xDEF_VALUE = "DEF_VALUE"; return xDEF_VALUE; } // int
	static const std::string& MOVE_SPEED(){ static std::string xMOVE_SPEED = "MOVE_SPEED"; return xMOVE_SPEED; } // int
	static const std::string& ATK_SPEED(){ static std::string xATK_SPEED = "ATK_SPEED"; return xATK_SPEED; } // int
	static const std::string& ATK_FIRE(){ static std::string xATK_FIRE = "ATK_FIRE"; return xATK_FIRE; } // int
	static const std::string& ATK_LIGHT(){ static std::string xATK_LIGHT = "ATK_LIGHT"; return xATK_LIGHT; } // int
	static const std::string& ATK_ICE(){ static std::string xATK_ICE = "ATK_ICE"; return xATK_ICE; } // int
	static const std::string& ATK_POISON(){ static std::string xATK_POISON = "ATK_POISON"; return xATK_POISON; } // int
	static const std::string& DEF_FIRE(){ static std::string xDEF_FIRE = "DEF_FIRE"; return xDEF_FIRE; } // int
	static const std::string& DEF_LIGHT(){ static std::string xDEF_LIGHT = "DEF_LIGHT"; return xDEF_LIGHT; } // int
	static const std::string& DEF_ICE(){ static std::string xDEF_ICE = "DEF_ICE"; return xDEF_ICE; } // int
	static const std::string& DEF_POISON(){ static std::string xDEF_POISON = "DEF_POISON"; return xDEF_POISON; } // int
	static const std::string& DIZZY_GATE(){ static std::string xDIZZY_GATE = "DIZZY_GATE"; return xDIZZY_GATE; } // int
	static const std::string& MOVE_GATE(){ static std::string xMOVE_GATE = "MOVE_GATE"; return xMOVE_GATE; } // int
	static const std::string& SKILL_GATE(){ static std::string xSKILL_GATE = "SKILL_GATE"; return xSKILL_GATE; } // int
	static const std::string& PHYSICAL_GATE(){ static std::string xPHYSICAL_GATE = "PHYSICAL_GATE"; return xPHYSICAL_GATE; } // int
	static const std::string& MAGIC_GATE(){ static std::string xMAGIC_GATE = "MAGIC_GATE"; return xMAGIC_GATE; } // int
	static const std::string& BUFF_GATE(){ static std::string xBUFF_GATE = "BUFF_GATE"; return xBUFF_GATE; } // int
	static const std::string& Prefab(){ static std::string xPrefab = "Prefab"; return xPrefab; } // string
	static const std::string& MoveType(){ static std::string xMoveType = "MoveType"; return xMoveType; } // int
	static const std::string& AtkDis(){ static std::string xAtkDis = "AtkDis"; return xAtkDis; } // float
	static const std::string& DropPackList(){ static std::string xDropPackList = "DropPackList"; return xDropPackList; } // string
	static const std::string& SkillIDRef(){ static std::string xSkillIDRef = "SkillIDRef"; return xSkillIDRef; } // string
	static const std::string& Height(){ static std::string xHeight = "Height"; return xHeight; } // float
	static const std::string& EffectData(){ static std::string xEffectData = "EffectData"; return xEffectData; } // string
	static const std::string& ConsumeData(){ static std::string xConsumeData = "ConsumeData"; return xConsumeData; } // string
	static const std::string& LastAttacker(){ static std::string xLastAttacker = "LastAttacker"; return xLastAttacker; } // object
	static const std::string& ShowName(){ static std::string xShowName = "ShowName"; return xShowName; } // string
	static const std::string& EquipIDRef(){ static std::string xEquipIDRef = "EquipIDRef"; return xEquipIDRef; } // string
	static const std::string& Icon(){ static std::string xIcon = "Icon"; return xIcon; } // string
	static const std::string& ShowCard(){ static std::string xShowCard = "ShowCard"; return xShowCard; } // string
	// Record

};

class Player
{
public:
	//Class name
	static const std::string& ThisName(){ static std::string xPlayer = "Player"; return xPlayer; }
	// IObject
	static const std::string& ID(){ static std::string xID = "ID"; return xID; } // string
	static const std::string& ClassName(){ static std::string xClassName = "ClassName"; return xClassName; } // string
	static const std::string& SceneID(){ static std::string xSceneID = "SceneID"; return xSceneID; } // int
	static const std::string& GroupID(){ static std::string xGroupID = "GroupID"; return xGroupID; } // int
	static const std::string& ConfigID(){ static std::string xConfigID = "ConfigID"; return xConfigID; } // string
	// Property
	static const std::string& Name(){ static std::string xName = "Name"; return xName; } // string
	static const std::string& Sex(){ static std::string xSex = "Sex"; return xSex; } // int
	static const std::string& Race(){ static std::string xRace = "Race"; return xRace; } // int
	static const std::string& Camp(){ static std::string xCamp = "Camp"; return xCamp; } // int
	static const std::string& LastContainerID(){ static std::string xLastContainerID = "LastContainerID"; return xLastContainerID; } // int
	static const std::string& Level(){ static std::string xLevel = "Level"; return xLevel; } // int
	static const std::string& ShowName(){ static std::string xShowName = "ShowName"; return xShowName; } // string
	static const std::string& PrefabPath(){ static std::string xPrefabPath = "PrefabPath"; return xPrefabPath; } // string
	static const std::string& FirstTarget(){ static std::string xFirstTarget = "FirstTarget"; return xFirstTarget; } // object
	static const std::string& CharType(){ static std::string xCharType = "CharType"; return xCharType; } // int
	static const std::string& Job(){ static std::string xJob = "Job"; return xJob; } // int
	static const std::string& VIPLevel(){ static std::string xVIPLevel = "VIPLevel"; return xVIPLevel; } // int
	static const std::string& VIPEXP(){ static std::string xVIPEXP = "VIPEXP"; return xVIPEXP; } // int
	static const std::string& EXP(){ static std::string xEXP = "EXP"; return xEXP; } // int
	static const std::string& HP(){ static std::string xHP = "HP"; return xHP; } // int
	static const std::string& SP(){ static std::string xSP = "SP"; return xSP; } // int
	static const std::string& MP(){ static std::string xMP = "MP"; return xMP; } // int
	static const std::string& Gold(){ static std::string xGold = "Gold"; return xGold; } // int
	static const std::string& Money(){ static std::string xMoney = "Money"; return xMoney; } // int
	static const std::string& Account(){ static std::string xAccount = "Account"; return xAccount; } // string
	static const std::string& ConnectKey(){ static std::string xConnectKey = "ConnectKey"; return xConnectKey; } // string
	static const std::string& MAXEXP(){ static std::string xMAXEXP = "MAXEXP"; return xMAXEXP; } // int
	static const std::string& RELIVE_SOUL(){ static std::string xRELIVE_SOUL = "RELIVE_SOUL"; return xRELIVE_SOUL; } // int
	static const std::string& ATK_PVP(){ static std::string xATK_PVP = "ATK_PVP"; return xATK_PVP; } // int
	static const std::string& DEF_PVP(){ static std::string xDEF_PVP = "DEF_PVP"; return xDEF_PVP; } // int
	static const std::string& OnlineCount(){ static std::string xOnlineCount = "OnlineCount"; return xOnlineCount; } // int
	static const std::string& TotalTime(){ static std::string xTotalTime = "TotalTime"; return xTotalTime; } // int
	static const std::string& LastOfflineTime(){ static std::string xLastOfflineTime = "LastOfflineTime"; return xLastOfflineTime; } // object
	static const std::string& OnlineTime(){ static std::string xOnlineTime = "OnlineTime"; return xOnlineTime; } // object
	static const std::string& TotalLineTime(){ static std::string xTotalLineTime = "TotalLineTime"; return xTotalLineTime; } // object
	static const std::string& GMLevel(){ static std::string xGMLevel = "GMLevel"; return xGMLevel; } // int
	static const std::string& MAXHP(){ static std::string xMAXHP = "MAXHP"; return xMAXHP; } // int
	static const std::string& MAXMP(){ static std::string xMAXMP = "MAXMP"; return xMAXMP; } // int
	static const std::string& MAXSP(){ static std::string xMAXSP = "MAXSP"; return xMAXSP; } // int
	static const std::string& HPREGEN(){ static std::string xHPREGEN = "HPREGEN"; return xHPREGEN; } // int
	static const std::string& SPREGEN(){ static std::string xSPREGEN = "SPREGEN"; return xSPREGEN; } // int
	static const std::string& MPREGEN(){ static std::string xMPREGEN = "MPREGEN"; return xMPREGEN; } // int
	static const std::string& ATK_VALUE(){ static std::string xATK_VALUE = "ATK_VALUE"; return xATK_VALUE; } // int
	static const std::string& DEF_VALUE(){ static std::string xDEF_VALUE = "DEF_VALUE"; return xDEF_VALUE; } // int
	static const std::string& MOVE_SPEED(){ static std::string xMOVE_SPEED = "MOVE_SPEED"; return xMOVE_SPEED; } // int
	static const std::string& ATK_SPEED(){ static std::string xATK_SPEED = "ATK_SPEED"; return xATK_SPEED; } // int
	static const std::string& ATK_FIRE(){ static std::string xATK_FIRE = "ATK_FIRE"; return xATK_FIRE; } // int
	static const std::string& ATK_LIGHT(){ static std::string xATK_LIGHT = "ATK_LIGHT"; return xATK_LIGHT; } // int
	static const std::string& ATK_ICE(){ static std::string xATK_ICE = "ATK_ICE"; return xATK_ICE; } // int
	static const std::string& ATK_POISON(){ static std::string xATK_POISON = "ATK_POISON"; return xATK_POISON; } // int
	static const std::string& DEF_FIRE(){ static std::string xDEF_FIRE = "DEF_FIRE"; return xDEF_FIRE; } // int
	static const std::string& DEF_LIGHT(){ static std::string xDEF_LIGHT = "DEF_LIGHT"; return xDEF_LIGHT; } // int
	static const std::string& DEF_ICE(){ static std::string xDEF_ICE = "DEF_ICE"; return xDEF_ICE; } // int
	static const std::string& DEF_POISON(){ static std::string xDEF_POISON = "DEF_POISON"; return xDEF_POISON; } // int
	static const std::string& DIZZY_GATE(){ static std::string xDIZZY_GATE = "DIZZY_GATE"; return xDIZZY_GATE; } // int
	static const std::string& MOVE_GATE(){ static std::string xMOVE_GATE = "MOVE_GATE"; return xMOVE_GATE; } // int
	static const std::string& SKILL_GATE(){ static std::string xSKILL_GATE = "SKILL_GATE"; return xSKILL_GATE; } // int
	static const std::string& PHYSICAL_GATE(){ static std::string xPHYSICAL_GATE = "PHYSICAL_GATE"; return xPHYSICAL_GATE; } // int
	static const std::string& MAGIC_GATE(){ static std::string xMAGIC_GATE = "MAGIC_GATE"; return xMAGIC_GATE; } // int
	static const std::string& BUFF_GATE(){ static std::string xBUFF_GATE = "BUFF_GATE"; return xBUFF_GATE; } // int
	static const std::string& LoadPropertyFinish(){ static std::string xLoadPropertyFinish = "LoadPropertyFinish"; return xLoadPropertyFinish; } // int
	static const std::string& GameID(){ static std::string xGameID = "GameID"; return xGameID; } // int
	static const std::string& GateID(){ static std::string xGateID = "GateID"; return xGateID; } // int
	static const std::string& GuildID(){ static std::string xGuildID = "GuildID"; return xGuildID; } // object
	// Record
	static const std::string& R_PlayerHero(){ static std::string xPlayerHero = "PlayerHero"; return xPlayerHero;}
	static const std::string& R_PlayerFightHero(){ static std::string xPlayerFightHero = "PlayerFightHero"; return xPlayerFightHero;}
	static const std::string& R_BagEquipList(){ static std::string xBagEquipList = "BagEquipList"; return xBagEquipList;}
	static const std::string& R_BagItemList(){ static std::string xBagItemList = "BagItemList"; return xBagItemList;}
	static const std::string& R_HeroPropertyValue(){ static std::string xHeroPropertyValue = "HeroPropertyValue"; return xHeroPropertyValue;}
	static const std::string& R_CommPropertyValue(){ static std::string xCommPropertyValue = "CommPropertyValue"; return xCommPropertyValue;}
	static const std::string& R_TaskMonsterList(){ static std::string xTaskMonsterList = "TaskMonsterList"; return xTaskMonsterList;}
	static const std::string& R_TaskList(){ static std::string xTaskList = "TaskList"; return xTaskList;}
	static const std::string& R_BuildingList(){ static std::string xBuildingList = "BuildingList"; return xBuildingList;}
	static const std::string& R_BuildingListProduce(){ static std::string xBuildingListProduce = "BuildingListProduce"; return xBuildingListProduce;}

	enum PlayerHero
	{
		PlayerHero_GUID		= 0, // GUID -- object
		PlayerHero_ConfigID		= 1, // ConfigID -- string
		PlayerHero_Level		= 2, // Level -- int
		PlayerHero_Exp		= 3, // Exp -- int
		PlayerHero_Star		= 4, // Star -- int
		PlayerHero_Equip1		= 5, // Equip1 -- object
		PlayerHero_Equip2		= 6, // Equip2 -- object
		PlayerHero_Equip3		= 7, // Equip3 -- object
		PlayerHero_Equip4		= 8, // Equip4 -- object
		PlayerHero_Equip5		= 9, // Equip5 -- object
		PlayerHero_Equip6		= 10, // Equip6 -- object
		PlayerHero_Equip7		= 11, // Equip7 -- object
		PlayerHero_Equip8		= 12, // Equip8 -- object
		PlayerHero_Talent1		= 13, // Talent1 -- string
		PlayerHero_Talent2		= 14, // Talent2 -- string
		PlayerHero_Talent3		= 15, // Talent3 -- string
		PlayerHero_Talent4		= 16, // Talent4 -- string
		PlayerHero_Talent5		= 17, // Talent5 -- string
		PlayerHero_Talent6		= 18, // Talent6 -- string
		PlayerHero_Talent7		= 19, // Talent7 -- string
		PlayerHero_Talent8		= 20, // Talent8 -- string
		PlayerHero_TalentLevel1		= 21, // TalentLevel1 -- int
		PlayerHero_TalentLevel2		= 22, // TalentLevel2 -- int
		PlayerHero_TalentLevel3		= 23, // TalentLevel3 -- int
		PlayerHero_TalentLevel4		= 24, // TalentLevel4 -- int
		PlayerHero_TalentLevel5		= 25, // TalentLevel5 -- int
		PlayerHero_TalentLevel6		= 26, // TalentLevel6 -- int
		PlayerHero_TalentLevel7		= 27, // TalentLevel7 -- int
		PlayerHero_TalentLevel8		= 28, // TalentLevel8 -- int
		PlayerHero_Skill1		= 29, // Skill1 -- string
		PlayerHero_Skill2		= 30, // Skill2 -- string
		PlayerHero_Skill3		= 31, // Skill3 -- string
		PlayerHero_Skill4		= 32, // Skill4 -- string
		PlayerHero_Skill5		= 33, // Skill5 -- string
		PlayerHero_SkillLevel1		= 34, // SkillLevel1 -- int
		PlayerHero_SkillLevel2		= 35, // SkillLevel2 -- int
		PlayerHero_SkillLevel3		= 36, // SkillLevel3 -- int
		PlayerHero_SkillLevel4		= 37, // SkillLevel4 -- int
		PlayerHero_SkillLevel5		= 38, // SkillLevel5 -- int
		PlayerHero_FightState		= 39, // FightState -- int
		PlayerHero_FightSkill		= 40, // FightSkill -- string

	};

	enum PlayerFightHero
	{
		PlayerFightHero_GUID		= 0, // GUID -- object
		PlayerFightHero_FightPos		= 1, // FightPos -- int

	};

	enum BagEquipList
	{
		BagEquipList_GUID		= 0, // GUID -- object
		BagEquipList_WearGUID		= 1, // WearGUID -- object
		BagEquipList_ConfigID		= 2, // ConfigID -- string
		BagEquipList_Bound		= 3, // Bound -- int
		BagEquipList_ExpiredType		= 4, // ExpiredType -- int
		BagEquipList_RandPropertyID		= 5, // RandPropertyID -- string
		BagEquipList_Date		= 6, // Date -- object
		BagEquipList_SlotCount		= 7, // SlotCount -- int
		BagEquipList_InlayStone1		= 8, // InlayStone1 -- string
		BagEquipList_InlayStone2		= 9, // InlayStone2 -- string
		BagEquipList_InlayStone3		= 10, // InlayStone3 -- string
		BagEquipList_InlayStone4		= 11, // InlayStone4 -- string
		BagEquipList_InlayStone5		= 12, // InlayStone5 -- string
		BagEquipList_InlayStone6		= 13, // InlayStone6 -- string
		BagEquipList_InlayStone7		= 14, // InlayStone7 -- string
		BagEquipList_InlayStone8		= 15, // InlayStone8 -- string
		BagEquipList_InlayStone9		= 16, // InlayStone9 -- string
		BagEquipList_InlayStone10		= 17, // InlayStone10 -- string
		BagEquipList_IntensifyLevel		= 18, // IntensifyLevel -- string
		BagEquipList_ElementLevel1		= 19, // ElementLevel1 -- int
		BagEquipList_ElementLevel2		= 20, // ElementLevel2 -- int
		BagEquipList_ElementLevel3		= 21, // ElementLevel3 -- int
		BagEquipList_ElementLevel4		= 22, // ElementLevel4 -- int
		BagEquipList_ElementLevel5		= 23, // ElementLevel5 -- int
		BagEquipList_ElementLevel6		= 24, // ElementLevel6 -- int
		BagEquipList_ElementLevel7		= 25, // ElementLevel7 -- int
		BagEquipList_ElementLevel8		= 26, // ElementLevel8 -- int
		BagEquipList_ElementLevel9		= 27, // ElementLevel9 -- int
		BagEquipList_ElementLevel10		= 28, // ElementLevel10 -- int

	};

	enum BagItemList
	{
		BagItemList_ConfigID		= 0, // ConfigID -- string
		BagItemList_ItemCount		= 1, // ItemCount -- int
		BagItemList_Bound		= 2, // Bound -- int
		BagItemList_ExpiredType		= 3, // ExpiredType -- int
		BagItemList_Date		= 4, // Date -- object

	};

	enum HeroPropertyValue
	{
		HeroPropertyValue_HeroGUID		= 0, // HeroGUID -- object
		HeroPropertyValue_Group		= 1, // Group -- int
		HeroPropertyValue_MAXHP		= 2, // MAXHP -- int
		HeroPropertyValue_MAXMP		= 3, // MAXMP -- int
		HeroPropertyValue_MAXSP		= 4, // MAXSP -- int
		HeroPropertyValue_HPREGEN		= 5, // HPREGEN -- int
		HeroPropertyValue_SPREGEN		= 6, // SPREGEN -- int
		HeroPropertyValue_MPREGEN		= 7, // MPREGEN -- int
		HeroPropertyValue_ATK_VALUE		= 8, // ATK_VALUE -- int
		HeroPropertyValue_DEF_VALUE		= 9, // DEF_VALUE -- int
		HeroPropertyValue_MOVE_SPEED		= 10, // MOVE_SPEED -- int
		HeroPropertyValue_ATK_SPEED		= 11, // ATK_SPEED -- int
		HeroPropertyValue_ATK_FIRE		= 12, // ATK_FIRE -- int
		HeroPropertyValue_ATK_LIGHT		= 13, // ATK_LIGHT -- int
		HeroPropertyValue_ATK_ICE		= 14, // ATK_ICE -- int
		HeroPropertyValue_ATK_POISON		= 15, // ATK_POISON -- int
		HeroPropertyValue_DEF_FIRE		= 16, // DEF_FIRE -- int
		HeroPropertyValue_DEF_LIGHT		= 17, // DEF_LIGHT -- int
		HeroPropertyValue_DEF_ICE		= 18, // DEF_ICE -- int
		HeroPropertyValue_DEF_POISON		= 19, // DEF_POISON -- int
		HeroPropertyValue_DIZZY_GATE		= 20, // DIZZY_GATE -- int
		HeroPropertyValue_MOVE_GATE		= 21, // MOVE_GATE -- int
		HeroPropertyValue_SKILL_GATE		= 22, // SKILL_GATE -- int
		HeroPropertyValue_PHYSICAL_GATE		= 23, // PHYSICAL_GATE -- int
		HeroPropertyValue_MAGIC_GATE		= 24, // MAGIC_GATE -- int

	};

	enum CommPropertyValue
	{
		CommPropertyValue_MAXHP		= 0, // MAXHP -- int
		CommPropertyValue_MAXMP		= 1, // MAXMP -- int
		CommPropertyValue_MAXSP		= 2, // MAXSP -- int
		CommPropertyValue_HPREGEN		= 3, // HPREGEN -- int
		CommPropertyValue_SPREGEN		= 4, // SPREGEN -- int
		CommPropertyValue_MPREGEN		= 5, // MPREGEN -- int
		CommPropertyValue_ATK_VALUE		= 6, // ATK_VALUE -- int
		CommPropertyValue_DEF_VALUE		= 7, // DEF_VALUE -- int
		CommPropertyValue_MOVE_SPEED		= 8, // MOVE_SPEED -- int
		CommPropertyValue_ATK_SPEED		= 9, // ATK_SPEED -- int
		CommPropertyValue_ATK_FIRE		= 10, // ATK_FIRE -- int
		CommPropertyValue_ATK_LIGHT		= 11, // ATK_LIGHT -- int
		CommPropertyValue_ATK_ICE		= 12, // ATK_ICE -- int
		CommPropertyValue_ATK_POISON		= 13, // ATK_POISON -- int
		CommPropertyValue_DEF_FIRE		= 14, // DEF_FIRE -- int
		CommPropertyValue_DEF_LIGHT		= 15, // DEF_LIGHT -- int
		CommPropertyValue_DEF_ICE		= 16, // DEF_ICE -- int
		CommPropertyValue_DEF_POISON		= 17, // DEF_POISON -- int
		CommPropertyValue_DIZZY_GATE		= 18, // DIZZY_GATE -- int
		CommPropertyValue_MOVE_GATE		= 19, // MOVE_GATE -- int
		CommPropertyValue_SKILL_GATE		= 20, // SKILL_GATE -- int
		CommPropertyValue_PHYSICAL_GATE		= 21, // PHYSICAL_GATE -- int
		CommPropertyValue_MAGIC_GATE		= 22, // MAGIC_GATE -- int
		CommPropertyValue_BUFF_GATE		= 23, // BUFF_GATE -- int

	};

	enum TaskMonsterList
	{
		TaskMonsterList_MonsterID		= 0, // MonsterID -- string
		TaskMonsterList_CurrentKillCount		= 1, // CurrentKillCount -- int
		TaskMonsterList_RequireKillCount		= 2, // RequireKillCount -- int
		TaskMonsterList_TaskID		= 3, // TaskID -- string

	};

	enum TaskList
	{
		TaskList_TaskID		= 0, // TaskID -- string
		TaskList_TaskStatus		= 1, // TaskStatus -- int
		TaskList_Process		= 2, // Process -- int

	};

	enum BuildingList
	{
		BuildingList_BuildingID		= 0, // BuildingID -- string
		BuildingList_BuildingGUID		= 1, // BuildingGUID -- object
		BuildingList_State		= 2, // State -- int
		BuildingList_PosX		= 3, // PosX -- int
		BuildingList_PosY		= 4, // PosY -- int
		BuildingList_PosZ		= 5, // PosZ -- int
		BuildingList_StateStartTime		= 6, // StateStartTime -- int
		BuildingList_StateEndTime		= 7, // StateEndTime -- int

	};

	enum BuildingListProduce
	{
		BuildingListProduce_BuildingID		= 0, // BuildingID -- string
		BuildingListProduce_BuildingGUID		= 1, // BuildingGUID -- object
		BuildingListProduce_State		= 2, // State -- int
		BuildingListProduce_PosX		= 3, // PosX -- int
		BuildingListProduce_PosY		= 4, // PosY -- int
		BuildingListProduce_PosZ		= 5, // PosZ -- int
		BuildingListProduce_StateStartTime		= 6, // StateStartTime -- int
		BuildingListProduce_StateEndTime		= 7, // StateEndTime -- int

	};

};

class Scene
{
public:
	//Class name
	static const std::string& ThisName(){ static std::string xScene = "Scene"; return xScene; }
	// IObject
	static const std::string& ID(){ static std::string xID = "ID"; return xID; } // string
	static const std::string& ClassName(){ static std::string xClassName = "ClassName"; return xClassName; } // string
	static const std::string& SceneID(){ static std::string xSceneID = "SceneID"; return xSceneID; } // int
	static const std::string& GroupID(){ static std::string xGroupID = "GroupID"; return xGroupID; } // int
	static const std::string& ConfigID(){ static std::string xConfigID = "ConfigID"; return xConfigID; } // string
	// Property
	static const std::string& SceneName(){ static std::string xSceneName = "SceneName"; return xSceneName; } // string
	static const std::string& SceneShowName(){ static std::string xSceneShowName = "SceneShowName"; return xSceneShowName; } // string
	static const std::string& MaxGroup(){ static std::string xMaxGroup = "MaxGroup"; return xMaxGroup; } // int
	static const std::string& MaxGroupPlayers(){ static std::string xMaxGroupPlayers = "MaxGroupPlayers"; return xMaxGroupPlayers; } // int
	static const std::string& FilePath(){ static std::string xFilePath = "FilePath"; return xFilePath; } // string
	static const std::string& RelivePos(){ static std::string xRelivePos = "RelivePos"; return xRelivePos; } // string
	static const std::string& Width(){ static std::string xWidth = "Width"; return xWidth; } // int
	static const std::string& SoundList(){ static std::string xSoundList = "SoundList"; return xSoundList; } // string
	static const std::string& Share(){ static std::string xShare = "Share"; return xShare; } // int
	static const std::string& CanClone(){ static std::string xCanClone = "CanClone"; return xCanClone; } // int
	static const std::string& ActorID(){ static std::string xActorID = "ActorID"; return xActorID; } // int
	static const std::string& LoadingUI(){ static std::string xLoadingUI = "LoadingUI"; return xLoadingUI; } // string
	static const std::string& CamOffestPos(){ static std::string xCamOffestPos = "CamOffestPos"; return xCamOffestPos; } // string
	static const std::string& CamOffestRot(){ static std::string xCamOffestRot = "CamOffestRot"; return xCamOffestRot; } // string
	static const std::string& SyncObject(){ static std::string xSyncObject = "SyncObject"; return xSyncObject; } // int
	// Record

};

class Server
{
public:
	//Class name
	static const std::string& ThisName(){ static std::string xServer = "Server"; return xServer; }
	// IObject
	static const std::string& ID(){ static std::string xID = "ID"; return xID; } // string
	static const std::string& ClassName(){ static std::string xClassName = "ClassName"; return xClassName; } // string
	static const std::string& SceneID(){ static std::string xSceneID = "SceneID"; return xSceneID; } // int
	static const std::string& GroupID(){ static std::string xGroupID = "GroupID"; return xGroupID; } // int
	static const std::string& ConfigID(){ static std::string xConfigID = "ConfigID"; return xConfigID; } // string
	// Property
	static const std::string& ServerID(){ static std::string xServerID = "ServerID"; return xServerID; } // int
	static const std::string& Name(){ static std::string xName = "Name"; return xName; } // string
	static const std::string& MaxOnline(){ static std::string xMaxOnline = "MaxOnline"; return xMaxOnline; } // int
	static const std::string& CpuCount(){ static std::string xCpuCount = "CpuCount"; return xCpuCount; } // int
	static const std::string& IP(){ static std::string xIP = "IP"; return xIP; } // string
	static const std::string& Port(){ static std::string xPort = "Port"; return xPort; } // int
	static const std::string& Type(){ static std::string xType = "Type"; return xType; } // int
	// Record

};

class Shop
{
public:
	//Class name
	static const std::string& ThisName(){ static std::string xShop = "Shop"; return xShop; }
	// IObject
	static const std::string& ID(){ static std::string xID = "ID"; return xID; } // string
	static const std::string& ClassName(){ static std::string xClassName = "ClassName"; return xClassName; } // string
	static const std::string& SceneID(){ static std::string xSceneID = "SceneID"; return xSceneID; } // int
	static const std::string& GroupID(){ static std::string xGroupID = "GroupID"; return xGroupID; } // int
	static const std::string& ConfigID(){ static std::string xConfigID = "ConfigID"; return xConfigID; } // string
	// Property
	static const std::string& Type(){ static std::string xType = "Type"; return xType; } // int
	static const std::string& ItemID(){ static std::string xItemID = "ItemID"; return xItemID; } // string
	static const std::string& Gold(){ static std::string xGold = "Gold"; return xGold; } // int
	static const std::string& Steel(){ static std::string xSteel = "Steel"; return xSteel; } // int
	static const std::string& Stone(){ static std::string xStone = "Stone"; return xStone; } // int
	static const std::string& Diamond(){ static std::string xDiamond = "Diamond"; return xDiamond; } // int
	static const std::string& Level(){ static std::string xLevel = "Level"; return xLevel; } // int
	// Record

};

class Skill
{
public:
	//Class name
	static const std::string& ThisName(){ static std::string xSkill = "Skill"; return xSkill; }
	// IObject
	static const std::string& ID(){ static std::string xID = "ID"; return xID; } // string
	static const std::string& ClassName(){ static std::string xClassName = "ClassName"; return xClassName; } // string
	static const std::string& SceneID(){ static std::string xSceneID = "SceneID"; return xSceneID; } // int
	static const std::string& GroupID(){ static std::string xGroupID = "GroupID"; return xGroupID; } // int
	static const std::string& ConfigID(){ static std::string xConfigID = "ConfigID"; return xConfigID; } // string
	// Property
	static const std::string& SkillType(){ static std::string xSkillType = "SkillType"; return xSkillType; } // int
	static const std::string& AnimaState(){ static std::string xAnimaState = "AnimaState"; return xAnimaState; } // int
	static const std::string& ShowName(){ static std::string xShowName = "ShowName"; return xShowName; } // string
	static const std::string& Desc(){ static std::string xDesc = "Desc"; return xDesc; } // string
	static const std::string& ConsumeProperty(){ static std::string xConsumeProperty = "ConsumeProperty"; return xConsumeProperty; } // string
	static const std::string& ConsumeValue(){ static std::string xConsumeValue = "ConsumeValue"; return xConsumeValue; } // string
	static const std::string& ConsumeType(){ static std::string xConsumeType = "ConsumeType"; return xConsumeType; } // int
	static const std::string& DamageProperty(){ static std::string xDamageProperty = "DamageProperty"; return xDamageProperty; } // string
	static const std::string& DamageValue(){ static std::string xDamageValue = "DamageValue"; return xDamageValue; } // string
	static const std::string& DamageType(){ static std::string xDamageType = "DamageType"; return xDamageType; } // int
	static const std::string& GetBuffList(){ static std::string xGetBuffList = "GetBuffList"; return xGetBuffList; } // string
	static const std::string& SendBuffList(){ static std::string xSendBuffList = "SendBuffList"; return xSendBuffList; } // string
	static const std::string& CoolDownTime(){ static std::string xCoolDownTime = "CoolDownTime"; return xCoolDownTime; } // float
	static const std::string& RequireDistance(){ static std::string xRequireDistance = "RequireDistance"; return xRequireDistance; } // float
	static const std::string& DamageDistance(){ static std::string xDamageDistance = "DamageDistance"; return xDamageDistance; } // float
	static const std::string& TargetType(){ static std::string xTargetType = "TargetType"; return xTargetType; } // int
	static const std::string& NewObject(){ static std::string xNewObject = "NewObject"; return xNewObject; } // string
	static const std::string& Icon(){ static std::string xIcon = "Icon"; return xIcon; } // string
	static const std::string& Atlas(){ static std::string xAtlas = "Atlas"; return xAtlas; } // string
	static const std::string& UpLevel(){ static std::string xUpLevel = "UpLevel"; return xUpLevel; } // int
	static const std::string& AfterUpSkillID(){ static std::string xAfterUpSkillID = "AfterUpSkillID"; return xAfterUpSkillID; } // string
	static const std::string& PlayerSkill(){ static std::string xPlayerSkill = "PlayerSkill"; return xPlayerSkill; } // int
	static const std::string& AtkDis(){ static std::string xAtkDis = "AtkDis"; return xAtkDis; } // float
	static const std::string& NeedTar(){ static std::string xNeedTar = "NeedTar"; return xNeedTar; } // int
	static const std::string& DefaultHitTime(){ static std::string xDefaultHitTime = "DefaultHitTime"; return xDefaultHitTime; } // float
	// Record

};

class SkillRef
{
public:
	//Class name
	static const std::string& ThisName(){ static std::string xSkillRef = "SkillRef"; return xSkillRef; }
	// IObject
	static const std::string& ID(){ static std::string xID = "ID"; return xID; } // string
	static const std::string& ClassName(){ static std::string xClassName = "ClassName"; return xClassName; } // string
	static const std::string& SceneID(){ static std::string xSceneID = "SceneID"; return xSceneID; } // int
	static const std::string& GroupID(){ static std::string xGroupID = "GroupID"; return xGroupID; } // int
	static const std::string& ConfigID(){ static std::string xConfigID = "ConfigID"; return xConfigID; } // string
	// Property
	static const std::string& NORMALATTACK1(){ static std::string xNORMALATTACK1 = "NORMALATTACK1"; return xNORMALATTACK1; } // string
	static const std::string& NORMALATTACK2(){ static std::string xNORMALATTACK2 = "NORMALATTACK2"; return xNORMALATTACK2; } // string
	static const std::string& NORMALATTACK3(){ static std::string xNORMALATTACK3 = "NORMALATTACK3"; return xNORMALATTACK3; } // string
	static const std::string& NORMALTHUMP(){ static std::string xNORMALTHUMP = "NORMALTHUMP"; return xNORMALTHUMP; } // string
	static const std::string& SKILL1(){ static std::string xSKILL1 = "SKILL1"; return xSKILL1; } // string
	static const std::string& SKILL2(){ static std::string xSKILL2 = "SKILL2"; return xSKILL2; } // string
	static const std::string& SKILL3(){ static std::string xSKILL3 = "SKILL3"; return xSKILL3; } // string
	static const std::string& SKILL4(){ static std::string xSKILL4 = "SKILL4"; return xSKILL4; } // string
	static const std::string& SKILL5(){ static std::string xSKILL5 = "SKILL5"; return xSKILL5; } // string
	static const std::string& SKILL6(){ static std::string xSKILL6 = "SKILL6"; return xSKILL6; } // string
	static const std::string& SKILL7(){ static std::string xSKILL7 = "SKILL7"; return xSKILL7; } // string
	static const std::string& SKILL8(){ static std::string xSKILL8 = "SKILL8"; return xSKILL8; } // string
	static const std::string& SKILL9(){ static std::string xSKILL9 = "SKILL9"; return xSKILL9; } // string
	static const std::string& SKILL10(){ static std::string xSKILL10 = "SKILL10"; return xSKILL10; } // string
	// Record

};

class SqlServer
{
public:
	//Class name
	static const std::string& ThisName(){ static std::string xSqlServer = "SqlServer"; return xSqlServer; }
	// IObject
	static const std::string& ID(){ static std::string xID = "ID"; return xID; } // string
	static const std::string& ClassName(){ static std::string xClassName = "ClassName"; return xClassName; } // string
	static const std::string& SceneID(){ static std::string xSceneID = "SceneID"; return xSceneID; } // int
	static const std::string& GroupID(){ static std::string xGroupID = "GroupID"; return xGroupID; } // int
	static const std::string& ConfigID(){ static std::string xConfigID = "ConfigID"; return xConfigID; } // string
	// Property
	static const std::string& ServerID(){ static std::string xServerID = "ServerID"; return xServerID; } // int
	static const std::string& IP(){ static std::string xIP = "IP"; return xIP; } // string
	static const std::string& Port(){ static std::string xPort = "Port"; return xPort; } // int
	static const std::string& SqlIP(){ static std::string xSqlIP = "SqlIP"; return xSqlIP; } // string
	static const std::string& SqlPort(){ static std::string xSqlPort = "SqlPort"; return xSqlPort; } // int
	static const std::string& SqlUser(){ static std::string xSqlUser = "SqlUser"; return xSqlUser; } // string
	static const std::string& SqlPwd(){ static std::string xSqlPwd = "SqlPwd"; return xSqlPwd; } // string
	static const std::string& SqlName(){ static std::string xSqlName = "SqlName"; return xSqlName; } // string
	// Record

};

class StateFuncResources
{
public:
	//Class name
	static const std::string& ThisName(){ static std::string xStateFuncResources = "StateFuncResources"; return xStateFuncResources; }
	// IObject
	static const std::string& ID(){ static std::string xID = "ID"; return xID; } // string
	static const std::string& ClassName(){ static std::string xClassName = "ClassName"; return xClassName; } // string
	static const std::string& SceneID(){ static std::string xSceneID = "SceneID"; return xSceneID; } // int
	static const std::string& GroupID(){ static std::string xGroupID = "GroupID"; return xGroupID; } // int
	static const std::string& ConfigID(){ static std::string xConfigID = "ConfigID"; return xConfigID; } // string
	// Property
	static const std::string& Atlas_ResID(){ static std::string xAtlas_ResID = "Atlas_ResID"; return xAtlas_ResID; } // string
	// Record

};

class StateFunction
{
public:
	//Class name
	static const std::string& ThisName(){ static std::string xStateFunction = "StateFunction"; return xStateFunction; }
	// IObject
	static const std::string& ID(){ static std::string xID = "ID"; return xID; } // string
	static const std::string& ClassName(){ static std::string xClassName = "ClassName"; return xClassName; } // string
	static const std::string& SceneID(){ static std::string xSceneID = "SceneID"; return xSceneID; } // int
	static const std::string& GroupID(){ static std::string xGroupID = "GroupID"; return xGroupID; } // int
	static const std::string& ConfigID(){ static std::string xConfigID = "ConfigID"; return xConfigID; } // string
	// Property
	static const std::string& EFT_INFO(){ static std::string xEFT_INFO = "EFT_INFO"; return xEFT_INFO; } // int
	static const std::string& EFT_BOOOST(){ static std::string xEFT_BOOOST = "EFT_BOOOST"; return xEFT_BOOOST; } // int
	static const std::string& EFT_LVLUP(){ static std::string xEFT_LVLUP = "EFT_LVLUP"; return xEFT_LVLUP; } // int
	static const std::string& EFT_CREATE_SOLDER(){ static std::string xEFT_CREATE_SOLDER = "EFT_CREATE_SOLDER"; return xEFT_CREATE_SOLDER; } // int
	static const std::string& EFT_CREATE_SPEEL(){ static std::string xEFT_CREATE_SPEEL = "EFT_CREATE_SPEEL"; return xEFT_CREATE_SPEEL; } // int
	static const std::string& EFT_RESEARCH(){ static std::string xEFT_RESEARCH = "EFT_RESEARCH"; return xEFT_RESEARCH; } // int
	static const std::string& EFT_COLLECT_GOLD(){ static std::string xEFT_COLLECT_GOLD = "EFT_COLLECT_GOLD"; return xEFT_COLLECT_GOLD; } // int
	static const std::string& EFT_COLLECT_STONE(){ static std::string xEFT_COLLECT_STONE = "EFT_COLLECT_STONE"; return xEFT_COLLECT_STONE; } // int
	static const std::string& EFT_COLLECT_STEEL(){ static std::string xEFT_COLLECT_STEEL = "EFT_COLLECT_STEEL"; return xEFT_COLLECT_STEEL; } // int
	static const std::string& EFT_COLLECT_DIAMOND(){ static std::string xEFT_COLLECT_DIAMOND = "EFT_COLLECT_DIAMOND"; return xEFT_COLLECT_DIAMOND; } // int
	static const std::string& EFT_SELL(){ static std::string xEFT_SELL = "EFT_SELL"; return xEFT_SELL; } // int
	static const std::string& EFT_REPAIR(){ static std::string xEFT_REPAIR = "EFT_REPAIR"; return xEFT_REPAIR; } // int
	static const std::string& EFT_CANCEL(){ static std::string xEFT_CANCEL = "EFT_CANCEL"; return xEFT_CANCEL; } // int
	static const std::string& EFT_FINISH(){ static std::string xEFT_FINISH = "EFT_FINISH"; return xEFT_FINISH; } // int
	// Record

};

class Talent
{
public:
	//Class name
	static const std::string& ThisName(){ static std::string xTalent = "Talent"; return xTalent; }
	// IObject
	static const std::string& ID(){ static std::string xID = "ID"; return xID; } // string
	static const std::string& ClassName(){ static std::string xClassName = "ClassName"; return xClassName; } // string
	static const std::string& SceneID(){ static std::string xSceneID = "SceneID"; return xSceneID; } // int
	static const std::string& GroupID(){ static std::string xGroupID = "GroupID"; return xGroupID; } // int
	static const std::string& ConfigID(){ static std::string xConfigID = "ConfigID"; return xConfigID; } // string
	// Property
	static const std::string& TalentType(){ static std::string xTalentType = "TalentType"; return xTalentType; } // int
	static const std::string& ShowName(){ static std::string xShowName = "ShowName"; return xShowName; } // string
	static const std::string& Desc(){ static std::string xDesc = "Desc"; return xDesc; } // string
	// Record

};

class TalentRef
{
public:
	//Class name
	static const std::string& ThisName(){ static std::string xTalentRef = "TalentRef"; return xTalentRef; }
	// IObject
	static const std::string& ID(){ static std::string xID = "ID"; return xID; } // string
	static const std::string& ClassName(){ static std::string xClassName = "ClassName"; return xClassName; } // string
	static const std::string& SceneID(){ static std::string xSceneID = "SceneID"; return xSceneID; } // int
	static const std::string& GroupID(){ static std::string xGroupID = "GroupID"; return xGroupID; } // int
	static const std::string& ConfigID(){ static std::string xConfigID = "ConfigID"; return xConfigID; } // string
	// Property
	static const std::string& TALENT1(){ static std::string xTALENT1 = "TALENT1"; return xTALENT1; } // string
	static const std::string& TALENT2(){ static std::string xTALENT2 = "TALENT2"; return xTALENT2; } // string
	static const std::string& TALENT3(){ static std::string xTALENT3 = "TALENT3"; return xTALENT3; } // string
	static const std::string& TALENT4(){ static std::string xTALENT4 = "TALENT4"; return xTALENT4; } // string
	static const std::string& TALENT5(){ static std::string xTALENT5 = "TALENT5"; return xTALENT5; } // string
	static const std::string& TALENT6(){ static std::string xTALENT6 = "TALENT6"; return xTALENT6; } // string
	static const std::string& TALENT7(){ static std::string xTALENT7 = "TALENT7"; return xTALENT7; } // string
	static const std::string& TALENT8(){ static std::string xTALENT8 = "TALENT8"; return xTALENT8; } // string
	// Record

};

class Task
{
public:
	//Class name
	static const std::string& ThisName(){ static std::string xTask = "Task"; return xTask; }
	// IObject
	static const std::string& ID(){ static std::string xID = "ID"; return xID; } // string
	static const std::string& ClassName(){ static std::string xClassName = "ClassName"; return xClassName; } // string
	static const std::string& SceneID(){ static std::string xSceneID = "SceneID"; return xSceneID; } // int
	static const std::string& GroupID(){ static std::string xGroupID = "GroupID"; return xGroupID; } // int
	static const std::string& ConfigID(){ static std::string xConfigID = "ConfigID"; return xConfigID; } // string
	// Property
	static const std::string& Type(){ static std::string xType = "Type"; return xType; } // int
	static const std::string& NextTaskID(){ static std::string xNextTaskID = "NextTaskID"; return xNextTaskID; } // string
	static const std::string& KillMonsterName(){ static std::string xKillMonsterName = "KillMonsterName"; return xKillMonsterName; } // string
	static const std::string& KillCount(){ static std::string xKillCount = "KillCount"; return xKillCount; } // string
	static const std::string& LevelReq(){ static std::string xLevelReq = "LevelReq"; return xLevelReq; } // string
	static const std::string& AwardExp(){ static std::string xAwardExp = "AwardExp"; return xAwardExp; } // int
	static const std::string& AwardGold(){ static std::string xAwardGold = "AwardGold"; return xAwardGold; } // int
	static const std::string& AwardPack(){ static std::string xAwardPack = "AwardPack"; return xAwardPack; } // string
	static const std::string& Desc(){ static std::string xDesc = "Desc"; return xDesc; } // string
	// Record

};

class Team
{
public:
	//Class name
	static const std::string& ThisName(){ static std::string xTeam = "Team"; return xTeam; }
	// IObject
	static const std::string& ID(){ static std::string xID = "ID"; return xID; } // string
	static const std::string& ClassName(){ static std::string xClassName = "ClassName"; return xClassName; } // string
	static const std::string& SceneID(){ static std::string xSceneID = "SceneID"; return xSceneID; } // int
	static const std::string& GroupID(){ static std::string xGroupID = "GroupID"; return xGroupID; } // int
	static const std::string& ConfigID(){ static std::string xConfigID = "ConfigID"; return xConfigID; } // string
	// Property
	static const std::string& Captain(){ static std::string xCaptain = "Captain"; return xCaptain; } // object
	static const std::string& PresidentName(){ static std::string xPresidentName = "PresidentName"; return xPresidentName; } // string
	// Record
	static const std::string& R_MemberList(){ static std::string xMemberList = "MemberList"; return xMemberList;}
	static const std::string& R_ApplyList(){ static std::string xApplyList = "ApplyList"; return xApplyList;}

	enum MemberList
	{
		MemberList_GUID		= 0, // GUID -- object
		MemberList_Name		= 1, // Name -- string
		MemberList_Level		= 2, // Level -- int
		MemberList_Job		= 3, // Job -- int
		MemberList_Donation		= 4, // Donation -- int
		MemberList_Receive		= 5, // Receive -- int
		MemberList_VIP		= 6, // VIP -- int
		MemberList_Online		= 7, // Online -- int
		MemberList_Title		= 8, // Title -- int
		MemberList_GameID		= 9, // GameID -- int

	};

	enum ApplyList
	{
		ApplyList_GUID		= 0, // GUID -- object
		ApplyList_Name		= 1, // Name -- string
		ApplyList_Level		= 2, // Level -- int
		ApplyList_Job		= 3, // Job -- int
		ApplyList_Donation		= 4, // Donation -- int
		ApplyList_VIP		= 5, // VIP -- int
		ApplyList_Power		= 6, // Power -- int

	};

};

} // !@NFrame

#endif // !NF_PR_NAME_HPP 