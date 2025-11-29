@class IESLiveGameOpenPlatformActivityComponentView, NSString, IESLiveGCDTimer;

@interface IESLiveGameActivityComponentLoader : NSObject

@property (retain, nonatomic) IESLiveGameOpenPlatformActivityComponentView *activityView;
@property (nonatomic) BOOL isClear;
@property (nonatomic) BOOL isShowed;
@property (retain, nonatomic) IESLiveGCDTimer *timer;
@property (retain, nonatomic) NSString *lynxSchema;

- (id)initWithDIContext:(id)a0;
- (void)addObserve;
- (void)handleClearNotification:(id)a0;
- (void)autoUnloadWithPayloadModel:(id)a0;
- (double)getActivityHeight;
- (void)loadCardViewWithPayloadModel:(id)a0;
- (void)unloadCardView;
- (void).cxx_destruct;
- (void)dealloc;

@end
