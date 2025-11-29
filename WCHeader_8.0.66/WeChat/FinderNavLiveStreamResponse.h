@class FinderLiveStreamGetAsyncLoadInfoConfig, NSData, FinderLiveStreamJumpNavPrefetchControl, FinderLiveSquareStyleInfo, FinderLiveDiscoverPreloadConfig, BaseResponse, FinderNavLiveStreamPreloadControlConfig, FinderQuitLiveGuidePagePreloadConfig, NSMutableArray, FinderLivePreloadInfo;

@interface FinderNavLiveStreamResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSMutableArray *containerList;
@property (retain, nonatomic) FinderLivePreloadInfo *livePreloadInfo;
@property (nonatomic) unsigned int prefechMinInterval;
@property (retain, nonatomic) NSData *debugMessage;
@property (nonatomic) unsigned int refreshInterval;
@property (retain, nonatomic) NSData *lastBuffer;
@property (nonatomic) BOOL skipGetAllLiveTabs;
@property (nonatomic) BOOL skipAsyncLoadLiveInfo;
@property (retain, nonatomic) NSMutableArray *object;
@property (nonatomic) unsigned int continueFlag;
@property (nonatomic) BOOL skipFeedsReport;
@property (nonatomic) unsigned int flags;
@property (retain, nonatomic) FinderLiveSquareStyleInfo *styleInfo;
@property (retain, nonatomic) FinderLiveStreamGetAsyncLoadInfoConfig *asyncLoadInfoConfig;
@property (retain, nonatomic) FinderLiveDiscoverPreloadConfig *liveDiscoverPreloadConfig;
@property (nonatomic) unsigned int liveCardAutoPlayFlag;
@property (retain, nonatomic) FinderNavLiveStreamPreloadControlConfig *preloadControlConfig;
@property (retain, nonatomic) FinderQuitLiveGuidePagePreloadConfig *quitLiveGuidePagePreloadConfig;
@property (retain, nonatomic) FinderLiveDiscoverPreloadConfig *noReddotPreloadConfig;
@property (retain, nonatomic) FinderLiveStreamJumpNavPrefetchControl *jumpNavPrefetchControl;
@property (retain, nonatomic) NSData *moreLiveObjectsBuffer;

+ (void)initialize;

@end
