@class AWESearchExpandLabelView, UIButton, UIImageView, UIView, UILabel, BDImageView;
@protocol AWESearchSynthesisNovelCatalogTopViewDelegate;

@interface AWESearchSynthesisNovelCatalogTopView : UIView

@property (retain, nonatomic) BDImageView *coverImageView;
@property (retain, nonatomic) UIView *orderContainer;
@property (retain, nonatomic) UIView *statusLineView;
@property (retain, nonatomic) UILabel *chapterCountLabel;
@property (retain, nonatomic) AWESearchExpandLabelView *labelView;
@property (weak, nonatomic) id<AWESearchSynthesisNovelCatalogTopViewDelegate> delegate;
@property (retain, nonatomic) UIImageView *bookImageView;
@property (retain, nonatomic) UILabel *bookNameLabel;
@property (retain, nonatomic) UILabel *authorNameLabel;
@property (retain, nonatomic) UILabel *statusLabel;
@property (retain, nonatomic) UIButton *orderIconButton;
@property (nonatomic) double labelViewHeight;

- (void)onOrderClick;
- (void)onLabelViewHeightChange:(double)a0;
- (void)onCatalogBookDescClick;
- (void)hideOrderButton:(BOOL)a0;
- (void)updateCatalogData:(id)a0;
- (double)minContentHeight;
- (void).cxx_destruct;
- (void)updateWithConfig:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)setReverse:(BOOL)a0;

@end
