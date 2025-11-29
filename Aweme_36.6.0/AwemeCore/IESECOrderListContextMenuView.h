@class NSMutableArray, UIView;

@interface IESECOrderListContextMenuView : UIView

@property (retain, nonatomic) NSMutableArray *actionList;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UIView *contentBgView;
@property (retain, nonatomic) NSMutableArray *buttonList;
@property (retain, nonatomic) UIView *fromView;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } fromRect;
@property (copy, nonatomic) id /* block */ dismissCompletionBlock;
@property (nonatomic) unsigned long long arrowDirection;
@property (nonatomic) double viewScale;
@property (nonatomic) double fontScale;

- (void)dismissWithAnimation;
- (void)showFromView:(id)a0 rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)drawShape;
- (void).cxx_destruct;
- (void)addAction:(id)a0;
- (id)init;
- (void)setupUI;
- (void)tapAction;
- (void)tapAction:(id)a0;

@end
