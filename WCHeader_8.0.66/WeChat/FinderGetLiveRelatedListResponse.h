@class FinderLivePreloadInfo, NSData, NSMutableArray, BaseResponse;

@interface FinderGetLiveRelatedListResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSMutableArray *object;
@property (retain, nonatomic) NSData *lastBuffer;
@property (nonatomic) unsigned int continueFlag;
@property (retain, nonatomic) FinderLivePreloadInfo *livePreloadInfo;
@property (nonatomic) unsigned int refreshInterval;
@property (nonatomic) BOOL swipeUpGuide;
@property (nonatomic) unsigned int loadNextPageThreshold;

+ (void)initialize;

@end
