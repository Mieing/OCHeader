@class FinderLiveStreamGetAsyncLoadInfoConfig, NSData, FinderThemeLiveStreamShareInfo, FinderLiveSquareStyleInfo, BaseResponse, NSMutableArray, FinderThemeLiveStreamAppearance, FinderLivePreloadInfo;

@interface FinderThemeLiveStreamResponse : WXPBGeneratedMessage

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
@property (retain, nonatomic) FinderThemeLiveStreamAppearance *themeAppearance;
@property (retain, nonatomic) FinderThemeLiveStreamShareInfo *themeShareInfo;
@property (nonatomic) unsigned int aggrcardPrefetchInterval;
@property (nonatomic) BOOL getRandomLiveEnablePreload;

+ (void)initialize;

@end
