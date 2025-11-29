@class NSString, IESLiveCityEffect, IESLiveMsgBoardItemInfo, IESLiveLinkGameInfo, GPBInt64ObjectDictionary, IESLiveLinkmicJoinChannelData_DelegateSetting, IESLiveMatchEffect, NSMutableArray, IESLiveClientUIInfo;

@interface IESLiveLinkmicJoinChannelData : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *prompt;
@property (retain, nonatomic) IESLiveLinkmicJoinChannelData_DelegateSetting *delegateSetting;
@property (nonatomic) BOOL hasDelegateSetting;
@property (copy, nonatomic) NSString *token;
@property (copy, nonatomic) NSString *liveCoreSettings;
@property (nonatomic) long long payCount;
@property (retain, nonatomic) NSMutableArray *linkedUsersArray;
@property (readonly, nonatomic) unsigned long long linkedUsersArray_Count;
@property (nonatomic) unsigned long long version;
@property (nonatomic) int applyType;
@property (retain, nonatomic) IESLiveMatchEffect *matchEffect;
@property (nonatomic) BOOL hasMatchEffect;
@property (retain, nonatomic) IESLiveCityEffect *cityEffect;
@property (nonatomic) BOOL hasCityEffect;
@property (retain, nonatomic) IESLiveMsgBoardItemInfo *msgBoardItem;
@property (nonatomic) BOOL hasMsgBoardItem;
@property (nonatomic) BOOL isPaidLinkmic;
@property (copy, nonatomic) NSString *promptWithEarphone;
@property (retain, nonatomic) IESLiveLinkGameInfo *linkGameInfo;
@property (nonatomic) BOOL hasLinkGameInfo;
@property (retain, nonatomic) GPBInt64ObjectDictionary *linkerContentMap;
@property (readonly, nonatomic) unsigned long long linkerContentMap_Count;
@property (retain, nonatomic) IESLiveClientUIInfo *clientUiInfo;
@property (nonatomic) BOOL hasClientUiInfo;

+ (id)descriptor;

@end
