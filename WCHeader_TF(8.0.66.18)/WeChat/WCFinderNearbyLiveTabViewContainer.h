@class MMUIButton, CAGradientLayer, NSString, UIScrollView, NSMutableArray, UIView;
@protocol WCFinderNearbyLiveTabViewContainerDelegate, WCFinderTabPageViewBasicViewDelegate;

@interface WCFinderNearbyLiveTabViewContainer : UIView <WCFinderTabViewDelegate, WCFinderTabPageViewBasicProtocol> {
    id<WCFinderTabPageViewBasicViewDelegate> delegate;
}

@property (retain, nonatomic) UIScrollView *tabContainer;
@property (retain, nonatomic) NSMutableArray *tabViewArray;
@property (nonatomic) unsigned long long selectIndex;
@property (retain, nonatomic) UIView *gradientView;
@property (retain, nonatomic) MMUIButton *searchImageButtonView;
@property (retain, nonatomic) CAGradientLayer *gradientLayer;
@property (weak, nonatomic) id<WCFinderNearbyLiveTabViewContainerDelegate> containerDelegate;
@property (nonatomic) BOOL showSearchEntry;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithTabViewArray:(id)a0;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;
- (void)layoutSearchView;
- (void)checkResetSearchLayer;
- (unsigned long long)getSelectIndex;
- (void)adjustTabViewFrame;
- (void)onClickSearchEntry:(id)a0;
- (void)handleTapGesture:(id)a0;
- (void)adjustContentOffsetWithTabView:(id)a0;
- (void)finderTabPageTabView:(id)a0 changeToWidth:(double)a1;
- (id)delegate;
- (void)setDelegate:(id)a0;
- (void).cxx_destruct;

@end
