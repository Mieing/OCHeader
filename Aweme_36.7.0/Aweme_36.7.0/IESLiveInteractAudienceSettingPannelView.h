@class UIScrollView, NSArray, UIView;

@interface IESLiveInteractAudienceSettingPannelView : UIView

@property (retain, nonatomic) UIScrollView *scrollView;
@property (retain, nonatomic) UIView *contentView;
@property (nonatomic) BOOL disableBackbBtn;
@property (nonatomic) long long itemType;
@property (copy, nonatomic) NSArray *items;

- (void)didClickBackBtn;
- (id)buildSettingViewForItem:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 disableBackBtn:(BOOL)a1;
- (void)renderItems:(id)a0;
- (void).cxx_destruct;

@end
