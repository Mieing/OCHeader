@class UIButton, MMUILabel, UIView;
@protocol StorageSplitCardViewDelegate;

@interface StorageSplitCardView : UIView

@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) MMUILabel *titleLabel;
@property (retain, nonatomic) MMUILabel *subTitleLabel;
@property (retain, nonatomic) UIButton *actionButton;
@property (nonatomic) unsigned long long viewType;
@property (weak, nonatomic) id<StorageSplitCardViewDelegate> delegate;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 viewType:(unsigned long long)a1;
- (void)setupSubview;
- (void)layoutSubviews;
- (void)layout;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)onManageResourceClick;
- (void)onManageChatLogClick;
- (void).cxx_destruct;

@end
