@class PagingGetGamePlayTogetherDynamicItem, BaseRequest, NSString, FinderLiveGetUserGameConfigRequest_GameCategoryInfo, FinderBaseRequest, ExtDeviceInfo, FinderLiveDynamicCardVersion;

@interface FinderLiveGetUserGameConfigRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) FinderBaseRequest *finderBasereq;
@property (retain, nonatomic) NSString *finderUsername;
@property (retain, nonatomic) NSString *appId;
@property (nonatomic) unsigned int scene;
@property (retain, nonatomic) ExtDeviceInfo *extDeviceInfo;
@property (retain, nonatomic) NSString *extraAntiInfo;
@property (nonatomic) unsigned int opensdkVersion;
@property (nonatomic) unsigned int platformId;
@property (retain, nonatomic) NSString *gameUserId;
@property (nonatomic) BOOL onlyNeedPlayTogetherInfo;
@property (retain, nonatomic) FinderLiveDynamicCardVersion *dynamicCardVersion;
@property (retain, nonatomic) PagingGetGamePlayTogetherDynamicItem *pagingGetDynamicItem;
@property (retain, nonatomic) FinderLiveGetUserGameConfigRequest_GameCategoryInfo *gameCategoryInfo;

+ (void)initialize;

@end
