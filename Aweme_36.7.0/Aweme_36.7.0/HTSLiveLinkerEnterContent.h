@class NSString, IESLiveLinkIconConfig, HTSLiveMatchEffect, IESLiveMsgBoardItemInfo, HTSLiveCityEffect, GPBInt64ObjectDictionary, NSMutableArray, IESLiveLinkmicUIConfig, IESLiveClientUIInfo;

@interface HTSLiveLinkerEnterContent : IESLivePBBaseMessage

@property (retain, nonatomic) NSMutableArray *linkedUsersArray;
@property (readonly, nonatomic) unsigned long long linkedUsersArray_Count;
@property (copy, nonatomic) NSString *userId;
@property (nonatomic) int applyType;
@property (retain, nonatomic) NSMutableArray *preLinkUsersArray;
@property (readonly, nonatomic) unsigned long long preLinkUsersArray_Count;
@property (retain, nonatomic) HTSLiveMatchEffect *matchEffect;
@property (nonatomic) BOOL hasMatchEffect;
@property (retain, nonatomic) HTSLiveCityEffect *cityEffect;
@property (nonatomic) BOOL hasCityEffect;
@property (nonatomic) unsigned long long version;
@property (retain, nonatomic) GPBInt64ObjectDictionary *linkerContentMap;
@property (readonly, nonatomic) unsigned long long linkerContentMap_Count;
@property (retain, nonatomic) IESLiveMsgBoardItemInfo *msgBoardItem;
@property (nonatomic) BOOL hasMsgBoardItem;
@property (retain, nonatomic) IESLiveLinkIconConfig *linkIconConfig;
@property (nonatomic) BOOL hasLinkIconConfig;
@property (copy, nonatomic) NSString *lynxData;
@property (retain, nonatomic) IESLiveLinkmicUIConfig *uiConfig;
@property (nonatomic) BOOL hasUiConfig;
@property (nonatomic) BOOL battleDisplayEntrance;
@property (nonatomic) int bizType;
@property (retain, nonatomic) IESLiveClientUIInfo *clientUiInfo;
@property (nonatomic) BOOL hasClientUiInfo;

+ (id)descriptor;

@end
