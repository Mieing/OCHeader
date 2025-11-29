@class FinderObjectMonotonicData_LiveIndependentData;

@interface SyncFriendRealnameLikeInfoResp : WXPBGeneratedMessage

@property (retain, nonatomic) FinderObjectMonotonicData_LiveIndependentData *liveIndependentData;
@property (nonatomic) BOOL threeTabCanUseRealnameLikeFeature;
@property (nonatomic) BOOL grayoutRealnameLikeButton;
@property (nonatomic) unsigned int realnameLikeIconType;

+ (void)initialize;

@end
