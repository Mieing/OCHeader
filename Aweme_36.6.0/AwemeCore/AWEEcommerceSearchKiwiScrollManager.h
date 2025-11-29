@class AWEEcommerceSearchAladdinInfoModel, UIView, AWESearchResultKiwiTimerTipsView, NSString, AWEEcommerceSearchKiwiLynxView, AWEEcommerceSearchKiwiInfoModel, UIPanGestureRecognizer, UIScrollView;

@interface AWEEcommerceSearchKiwiScrollManager : NSObject <UIGestureRecognizerDelegate, UIScrollViewDelegate> {
    double _kiwiInnerOffset;
}

@property (retain, nonatomic) UIView *rootView;
@property (retain, nonatomic) UIView *topContainerView;
@property (retain, nonatomic) UIView *topTapView;
@property (retain, nonatomic) UIView *topLine;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) AWEEcommerceSearchKiwiLynxView *bottomContainerView;
@property (retain, nonatomic) AWESearchResultKiwiTimerTipsView *tipsView;
@property (retain, nonatomic) UIPanGestureRecognizer *topTapViewPanGesture;
@property (retain, nonatomic) UIPanGestureRecognizer *contentViewPanGesture;
@property (retain, nonatomic) UIPanGestureRecognizer *bottomViewPanGesture;
@property (nonatomic) double containerTopOffset;
@property (nonatomic) double contentViewOffset;
@property (nonatomic) double topTapViewHeight;
@property (nonatomic) BOOL kiwiScrollAtbottom;
@property (nonatomic) BOOL scrollEnabled;
@property (retain, nonatomic) UIScrollView *contentScrollView;
@property (nonatomic) unsigned long long currentPosition;
@property (retain, nonatomic) UIScrollView *aladdinScrollView;
@property (retain, nonatomic) AWEEcommerceSearchKiwiInfoModel *kiwiInfo;
@property (retain, nonatomic) AWEEcommerceSearchAladdinInfoModel *aladdinInfo;
@property (copy, nonatomic) id /* block */ containerTopMarginDidUpdated;
@property (nonatomic) BOOL canAutoPopUp;
@property (copy, nonatomic) id /* block */ handlePanReleaseFinished;
@property (nonatomic) BOOL isFromECommerce;
@property (nonatomic) double collectionViewMarginTop;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)setupWithRootView:(id)a0 contentView:(id)a1 contentScrollView:(id)a2 collectionViewMarginTop:(double)a3;

- (BOOL)isAladdin;
- (void)updateLogData;
- (void)updateShowStyle;
- (double)halfMargin;
- (double)maxMargin;
- (void)updateContainerTopMargin:(double)a0 changeEnded:(BOOL)a1 topInsetY:(double)a2;
- (double)bottomContainerH;
- (void)changeScrollAtPosition:(unsigned long long)a0;
- (void)trackKiwiFoldExpend:(BOOL)a0 direction:(id)a1;
- (void)showTips;
- (void)handleTopViewPan:(id)a0;
- (void)handleContentViewPan:(id)a0;
- (void)handleBottomViewPan:(id)a0;
- (void)handlePanReleaseWithOffset:(double)a0 topInsetY:(double)a1;
- (BOOL)isContainerAtTop;
- (void)trackForShow;
- (void)changeAladdinScrollViewBackgroundWithColor:(id)a0;
- (void)addGradientBgColor:(id)a0;
- (void).cxx_destruct;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void)updateScrollEnabled;
- (BOOL)gestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;
- (void)scrollViewDidScroll:(id)a0;
- (void)setupViews;

@end
