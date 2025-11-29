@class NSString, DVEBaseBarTopView, UIView;
@protocol ACCAEPanelTitleViewDelegate;

@interface ACCAEPanelTitleView : UIView <DVEBaseBarTopViewDelegate>

@property (retain, nonatomic) DVEBaseBarTopView *topView;
@property (retain, nonatomic) UIView *divider;
@property (weak, nonatomic) id<ACCAEPanelTitleViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setupTitleString:(id)a0;
- (void)topView:(id)a0 didClickCancelButton:(id)a1 resetHeadCompletion:(id /* block */)a2;
- (void)topView:(id)a0 didClickApplyButton:(id)a1;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
