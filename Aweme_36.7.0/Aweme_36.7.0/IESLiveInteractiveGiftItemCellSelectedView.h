@class UIImageView, IESInteractiveGiftItem, UILabel, UIView, IESLiveGradientView;

@interface IESLiveInteractiveGiftItemCellSelectedView : UIView

@property (retain, nonatomic) IESInteractiveGiftItem *giftItem;
@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) UILabel *name;
@property (retain, nonatomic) UIView *detailView;
@property (retain, nonatomic) UIView *interactionContainer;
@property (retain, nonatomic) UILabel *interactionLabel;
@property (retain, nonatomic) IESLiveGradientView *gradientView;
@property (nonatomic) BOOL enableRemove;
@property (copy, nonatomic) id /* block */ interactClick;

- (void)displayInteractViewWithTitle:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 andViewModel:(id)a1;
- (void)updateWithItem:(id)a0;
- (void).cxx_destruct;
- (void)loadViews;
- (void)handleTap:(id)a0;

@end
