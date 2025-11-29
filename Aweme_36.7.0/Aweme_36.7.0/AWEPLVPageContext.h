@class NSString, NSMutableDictionary, IGListAdapter, NSDate, UIViewController;

@interface AWEPLVPageContext : AWEPageContext <AWEVideoHallFeedContextProtocol>

@property (retain, nonatomic) NSDate *firstImageRequestDate;
@property (retain, nonatomic) NSMutableDictionary *loadedImageInfo;
@property (retain, nonatomic) NSString *userAge;
@property (weak, nonatomic) IGListAdapter *listAdapter;
@property (retain, nonatomic) NSString *pageKey;
@property (copy, nonatomic) NSString *enterFrom;
@property (nonatomic) BOOL enableGrid;
@property (nonatomic) BOOL enableLight;
@property (nonatomic) BOOL disableAutoCarousel;
@property (nonatomic) BOOL needConfigForNewResponse;
@property (nonatomic) BOOL isMute;
@property (nonatomic) BOOL isAppear;
@property (weak, nonatomic) UIViewController *container;
@property (nonatomic) long long themeStyle;
@property (nonatomic) BOOL isOnFeedSharePanel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setPlaybackTime:(double)a0 key:(id)a1;
- (double)playbackTimeForKey:(id)a0;
- (void)trackFirstImageRequestDate;
- (void)trackFirstFrameLoadedImageIfNeededWithImage:(id)a0 url:(id)a1 error:(id)a2;
- (void).cxx_destruct;

@end
