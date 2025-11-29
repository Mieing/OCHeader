@class UILabel, UIButton, DYSyncToToutiaoItemModel;

@interface DYSyncToutiaoItemCell : UIView

@property (retain, nonatomic) UILabel *detailLabel;
@property (retain, nonatomic) UIButton *syncButton;
@property (nonatomic) BOOL canClicked;
@property (nonatomic) BOOL isSelected;
@property (retain, nonatomic) DYSyncToToutiaoItemModel *ItemModel;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;
- (void)switchState;

@end
