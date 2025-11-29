@class UILabel, UIButton, NSString;

@interface AWESearchAIGCCachalotWebErrorReloadView : UIView <AWESearchCachalotWebErrorReloadViewProtocol>

@property (retain, nonatomic) UILabel *titleView;
@property (retain, nonatomic) UILabel *descView;
@property (retain, nonatomic) UIButton *reloadButton;
@property (copy, nonatomic) id /* block */ reloadBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)configUI;
- (void)reloadButtonClick;
- (double)viewHeightWithContainerWidth:(double)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
