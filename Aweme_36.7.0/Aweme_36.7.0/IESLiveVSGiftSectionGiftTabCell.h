@class IESLiveVSGiftSectionGiftTabItem, NSString, UIScrollView, NSMutableArray, UIView;

@interface IESLiveVSGiftSectionGiftTabCell : UIView <UIScrollViewDelegate, IESLiveVSGiftSectionCell>

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UIScrollView *scrollView;
@property (retain, nonatomic) NSMutableArray *buttons;
@property (nonatomic) BOOL hasSetLandscapeGradientLayer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) IESLiveVSGiftSectionGiftTabItem *item;

- (void)p_setLandscapeGradientViewWithSize:(struct CGSize { double x0; double x1; })a0;
- (void)p_loadTabButtons;
- (void)p_selectButtonAtIndex:(unsigned long long)a0;
- (id)createTabButtonWithPage:(id)a0;
- (void)updateWithItem:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
