@class MMLiteAppViewController, NSString;
@protocol MMLiteAppHalfScreenStatusChangeListener;

@interface MMLiteAppPageSheetWrapViewController : UIViewController <UIGestureRecognizerDelegate> {
    BOOL _isFullScreen;
    float _whiteSpaceHeight;
}

@property (retain, nonatomic) MMLiteAppViewController *liteAppViewController;
@property (retain, nonatomic) id<MMLiteAppHalfScreenStatusChangeListener> statusChangeListener;
@property (nonatomic) double deviceHeight;
@property (nonatomic) double deviceWidth;
@property (nonatomic) BOOL useOpenInfoDeviceHW;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)setupChildVC;
- (void)setupTapGesture;
- (void)handleTap:(id)a0;
- (void)setupSwipeGesture;
- (void)handlePan:(id)a0;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void)scrollToTop;
- (void)scrollToResume;
- (void)animateChildViewToY:(double)a0;
- (void)updateBgViewMask;
- (void).cxx_destruct;

@end
