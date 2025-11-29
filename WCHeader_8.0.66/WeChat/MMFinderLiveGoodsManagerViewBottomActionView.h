@class UIView, MMUILabel, MMUIButton;
@protocol MMFinderLiveGoodsManagerViewBottomActionViewDelegate;

@interface MMFinderLiveGoodsManagerViewBottomActionView : UIView

@property (retain, nonatomic) MMUIButton *setTopButton;
@property (retain, nonatomic) MMUIButton *deleteButton;
@property (retain, nonatomic) MMUILabel *sizeLabel;
@property (retain, nonatomic) UIView *seperatorView;
@property (nonatomic) unsigned int selectedCellsSize;
@property (weak, nonatomic) id<MMFinderLiveGoodsManagerViewBottomActionViewDelegate> editingDelegate;

+ (double)contentHeight;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 delegate:(id)a1;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)layoutDeleteButton;
- (void)layoutSetTopButton;
- (void)layoutSizeLabel;
- (void)layoutSeperatorLine;
- (void)deleteButtonAction;
- (void)setTopButtonAction;
- (void)updateWithSelectedCellSize:(unsigned long long)a0;
- (void)updateButtonStatus;
- (void).cxx_destruct;

@end
