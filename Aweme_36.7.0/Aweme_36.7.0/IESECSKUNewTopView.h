@class UIStackView, NSString, UIView, IESECSKUTopViewModel, IESECSKUTopPriceContainer, IESECSKUDetailContext, UILabel, IESECUIImageView;
@protocol IESECSKUTopViewDelegate;

@interface IESECSKUNewTopView : UIView <IESECImagePreviewTransitionContextProvider, IESECMediaPreviewDelegate, UIGestureRecognizerDelegate, IESECSKUTopViewProtocol> {
    BOOL hasBackground;
    BOOL hasDetailEntrance;
    double imageWidth;
    double maxPriceWidth;
}

@property (retain, nonatomic) IESECUIImageView *imageView;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) IESECUIImageView *detailButton;
@property (retain, nonatomic) UIStackView *mainInfoStackView;
@property (retain, nonatomic) IESECSKUTopPriceContainer *priceContainer;
@property (retain, nonatomic) UIView *couponList;
@property (retain, nonatomic) UILabel *selectHintLabel;
@property (retain, nonatomic) NSString *curSkuID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) IESECSKUTopViewModel *viewModel;
@property (weak, nonatomic) id<IESECSKUTopViewDelegate> delegate;
@property (weak, nonatomic) IESECSKUDetailContext *detailContext;
@property (nonatomic) double contentWidth;

- (void)mediaPreviewController:(id)a0 didDismissWithIndex:(long long)a1 isCurrentVideoTab:(BOOL)a2;
- (void)mediaPreviewController:(id)a0 didSwipeToIndex:(long long)a1 previousIndex:(long long)a2;
- (void)detailClick;
- (id)targetViewForImagePreviewController:(id)a0 atIndex:(long long)a1;
- (void)openCouponPanel;
- (void)tapGoodsCoverImageView;
- (void)setupConstraints;
- (void).cxx_destruct;
- (void)updateConstraints;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)gestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;
- (void)refreshUI;
- (double)viewHeight;
- (void)reloadView;

@end
