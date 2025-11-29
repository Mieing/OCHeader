@class DUXBadge, AWEProfileExtensionAreaCardModel, NSString, UILabel, UIView, BDImageView;

@interface AWEProfileExtensionAreaBaseCardView : UIView <AWEProfileExtensionAreaCardViewProtocol, AWEProfileExtensionAreaCardViewInternalProtocol>

@property (retain, nonatomic) UIView *accessView;
@property (nonatomic) unsigned long long cardStyle;
@property (retain, nonatomic) BDImageView *imageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subtitleLabel;
@property (retain, nonatomic) DUXBadge *dotView;
@property (retain, nonatomic) UIView *customDetailView;
@property (retain, nonatomic) AWEProfileExtensionAreaCardModel *cardModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) id /* block */ reloadTitleBlock;
@property (copy, nonatomic) id /* block */ reloadSubTitleBlock;
@property (copy, nonatomic) id /* block */ reloadCustomDetailViewBlock;

- (void)updateSubTitleLabelWithText:(id)a0;
- (unsigned long long)extensionAreaCardType;
- (BOOL)shouldAdaptBigFontMode;
- (void)updateTitleLabelWithText:(id)a0;
- (void)updateImageViewWithLightUrlArray:(id)a0 darkUrlArray:(id)a1;
- (void)updateImageViewWithLightUrlArray:(id)a0 darkUrlArray:(id)a1 completion:(id /* block */)a2;
- (void)updateDotViewState:(BOOL)a0;
- (void)enableAnimateImage:(BOOL)a0 infinityLoop:(BOOL)a1;
- (void)updateAnimateImageWithLastFrame;
- (void)updateSubTitleLabelWithText:(id)a0 subTitleColor:(id)a1;
- (void)updateCustomDetailViewWithView:(id)a0 width:(double)a1;
- (id)getImageView;
- (void)configWithCardModel:(id)a0;
- (id)redDotView;
- (void)configCardStyle:(unsigned long long)a0;
- (BOOL)isRedDotShow;
- (void)setupAccessView;
- (void)handleLiveAppointment;
- (void)refreshAccessLabel;
- (double)rightEdgeOfRedDot;
- (void).cxx_destruct;
- (id)titleFont;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)subtitleFont;

@end
