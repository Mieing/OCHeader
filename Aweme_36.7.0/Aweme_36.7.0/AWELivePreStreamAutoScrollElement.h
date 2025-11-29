@class IESLiveGCDTimer;

@interface AWELivePreStreamAutoScrollElement : AWELiveBusinessBaseElement

@property (nonatomic) BOOL hasRoomEntered;
@property (nonatomic) BOOL hasScrollUpInnerFeed;
@property (retain, nonatomic) IESLiveGCDTimer *startTimer;

+ (BOOL)shouldActivateElement;

- (void)initializeElement;
- (void)onUserEnterLiveRoom:(id)a0;
- (void)viewController_viewWillDisAppear;
- (void)viewController_willEndDragging:(id)a0 velocity:(struct CGPoint { double x0; double x1; })a1;
- (void)onUserQuitLiveRoom_afterLiveCheck;
- (void)p_scrollToNextContent;
- (void).cxx_destruct;
- (void)invalidateTimer;
- (void)reset;

@end
