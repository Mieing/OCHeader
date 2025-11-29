@class AWECoverChooseActionButton, AWECoverChooseBottomTabItem;
@protocol AWECoverChooseBottomTabTitleViewDelegate;

@interface AWECoverChooseBottomTabTitleView : UIView

@property (readonly, nonatomic) AWECoverChooseBottomTabItem *titleItem;
@property (readonly, nonatomic) AWECoverChooseBottomTabItem *styleItem;
@property (readonly, nonatomic) AWECoverChooseActionButton *resetButton;
@property (weak, nonatomic) id<AWECoverChooseBottomTabTitleViewDelegate> delegate;
@property (readonly, nonatomic) long long selectedType;

- (void)resetAction;
- (void)selectType:(long long)a0;
- (void)titleAction;
- (void)styleAction;
- (id)createButtonWithImage:(id)a0 title:(id)a1;
- (void)setResetButtonHidden:(BOOL)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)p_init;

@end
