@class NSString, UIImageView, UILabel, UIView, UIButton;

@interface IESLiveWebViewNetworkErrorView : UIView <AnnieCustomNetworkErrorView>

@property (retain, nonatomic) UIImageView *errorImageView;
@property (retain, nonatomic) UILabel *errorTitleLabel;
@property (retain, nonatomic) UILabel *errorSubTitleLabel;
@property (retain, nonatomic) UIButton *retryButton;
@property (retain, nonatomic) NSString *theme;
@property (retain, nonatomic) UIView *container;
@property (nonatomic) BOOL flicker;
@property (nonatomic) BOOL isVC;
@property (nonatomic) BOOL isPopup;
@property (nonatomic) BOOL isBottom;
@property (retain, nonatomic) UIView *errorContainer;
@property (retain, nonatomic) UIView *btnContainer;
@property (retain, nonatomic) UIButton *closeButton;
@property (copy, nonatomic) id /* block */ retryBlock;
@property (copy, nonatomic) id /* block */ closeBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)previousLayoutUI;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 theme:(id)a1 flicker:(BOOL)a2;
- (void)sjbLayoutUI;
- (void)layoutUIWithCloseBtn;
- (void)beforeRetry;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 theme:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 theme:(id)a1 popup:(BOOL)a2 bottom:(BOOL)a3;
- (void)close;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)retry;
- (BOOL)isLandscape;
- (void)refreshLayout;
- (void)layoutUI;

@end
