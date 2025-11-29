@class CAGradientLayer, UIImageView, MMUIButton, MMUILabel;
@protocol MMFinderLiveMusicTableViewBottomEditingDelegate;

@interface MMFinderLiveMusicTableViewBottomEditingBar : UIView

@property (retain, nonatomic) UIImageView *selectedImageView;
@property (retain, nonatomic) MMUILabel *allSelectedTipLabel;
@property (retain, nonatomic) MMUIButton *deleteButton;
@property (retain, nonatomic) CAGradientLayer *gradientLayer;
@property (nonatomic) BOOL isAllSelected;
@property (weak, nonatomic) id<MMFinderLiveMusicTableViewBottomEditingDelegate> editingDelegate;

+ (double)preferHeight;
+ (double)gradientMaskHeight;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)layoutSelectedImageView;
- (void)layoutAllSelectedTipLabel;
- (void)layoutDeleteButton;
- (void)layoutGradientLayer;
- (void)onSelectedImgTapGesture:(id)a0;
- (void)deleteButtonAction;
- (void)toggleSelectState;
- (void)toggleSelectAllState:(BOOL)a0;
- (void)clearAllSelectedState;
- (void)updateDeleteButtonEnabled:(BOOL)a0;
- (void).cxx_destruct;

@end
