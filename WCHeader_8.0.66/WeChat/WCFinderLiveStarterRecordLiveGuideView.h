@class MMUIButton, MMUILabel, UIView;

@interface WCFinderLiveStarterRecordLiveGuideView : MMPageSheetBaseView

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) MMUILabel *titleLabel;
@property (retain, nonatomic) MMUIButton *editButton;
@property (retain, nonatomic) MMUIButton *actionButton;
@property (copy, nonatomic) id /* block */ recordGuideBlock;

- (void)updateWithTitle:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)createUI;
- (void)layoutUI;
- (void)setupPageSheetConfig;
- (double)contentViewHeight;
- (void)actionButtonClick;
- (void)editButtonClick;
- (void).cxx_destruct;

@end
