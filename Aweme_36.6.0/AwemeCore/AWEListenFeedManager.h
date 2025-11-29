@class NSString, NSMapTable;

@interface AWEListenFeedManager : NSObject <AWEListenFeedManagerProtocol>

@property (copy, nonatomic) NSString *currentItemID;
@property (nonatomic) double currentSpeed;
@property (nonatomic) BOOL isQuitFromListenFeed;
@property (nonatomic) long long playTimes;
@property (nonatomic) BOOL isListenFeedShowing;
@property (nonatomic) BOOL isPlayingCollectQueue;
@property (nonatomic) BOOL currentCollectTypeIsAll;
@property (retain, nonatomic) NSMapTable *weakContextMap;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)getAWEJXListenFeedFilterListViewController;
+ (Class)aAWEFeedModuleServiceDOUYINJXAdapterClass;
+ (BOOL)shouldAdaptLargeFontV2;
+ (id)sharedInstance;

- (id)aAWEFeedModuleServiceDOUYINJXAdapter;
- (BOOL)listenLaterUseDiskCache;
- (unsigned long long)listenFeedFontCurrentFontMode;
- (BOOL)enableReversePlayStyleWithReferString:(id)a0;
- (double)listenFeedBackgroundFilterViewHeight;
- (BOOL)vipVideoAllowedListen;
- (BOOL)enableListenModeSwitch;
- (BOOL)enablePlaylistManage;
- (BOOL)enableFixRecordPlaybackBug;
- (BOOL)hiddenFilterView;
- (BOOL)enableEnhanceCollection;
- (void).cxx_destruct;

@end
