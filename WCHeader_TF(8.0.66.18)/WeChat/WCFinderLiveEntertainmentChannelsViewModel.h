@class NSData, WCFinderCustomCGI, MMTimer, WCFinderLiveEntertainmentChannelsViewController, NSMutableDictionary, WCFinderLiveEntertainmentChannelsContext, WCFinderBaseCgi, FinderThemeLiveStreamAppearance, FinderThemeLiveStreamResponse, NSMutableArray, WCFinderLiveStreamContainerModel;
@protocol WCFinderLiveEntertainmentChannelsViewModelDelegate;

@interface WCFinderLiveEntertainmentChannelsViewModel : NSObject

@property (retain, nonatomic) NSMutableDictionary *pageVMDict;
@property (retain, nonatomic) WCFinderLiveStreamContainerModel *tagContainer;
@property (retain, nonatomic) WCFinderLiveStreamContainerModel *initialStreamContainer;
@property (retain, nonatomic) WCFinderLiveEntertainmentChannelsContext *ctx;
@property (retain, nonatomic) FinderThemeLiveStreamAppearance *appearance;
@property (retain, nonatomic) FinderThemeLiveStreamResponse *firstScreenResp;
@property (retain, nonatomic) WCFinderBaseCgi *loadCgi;
@property (nonatomic) BOOL getRandomLiveEnablePreload;
@property (nonatomic) BOOL isGoingRandomLive;
@property (nonatomic) unsigned long long getRandomLivePreloadInterval;
@property (retain, nonatomic) NSData *randomLiveLastBuffer;
@property (retain, nonatomic) WCFinderCustomCGI *prefetchRandomLiveCGI;
@property (retain, nonatomic) MMTimer *delayGetRandomLiveTimer;
@property (retain, nonatomic) NSMutableArray *randomLiveIds;
@property (weak, nonatomic) id<WCFinderLiveEntertainmentChannelsViewModelDelegate> delegate;
@property (weak, nonatomic) WCFinderLiveEntertainmentChannelsViewController *currentVC;

- (id)initWithThemeId:(id)a0 appearance:(id)a1 scene:(int)a2;
- (void)loadData;
- (BOOL)hasData;
- (void)cancelSectionCgi;
- (id)currentPageVM;
- (id)pageVM:(id)a0;
- (void)removePageVM:(id)a0;
- (id)createPageVM:(id)a0 initialContainer:(id)a1;
- (id)containerContext:(unsigned long long)a0 tag:(id)a1;
- (void)prefetchRandomLiveIfNeeded;
- (void)checkDelayPrefetchRandomLive;
- (void)cancelDelayPrefetchRandomLive;
- (void)gotoRandomLive;
- (void)reportRandomJoinLive:(id)a0;
- (void)reportRandomJoinButtonExpose;
- (void)reportCreateLiveButton:(unsigned long long)a0;
- (void).cxx_destruct;

@end
