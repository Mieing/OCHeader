@class NSString, IESLiveLayoutContainerView, NSMutableSet, UIView;

@interface IESLiveLayoutContainerItem : IESLiveDynamicModel

@property (retain, nonatomic) NSMutableSet *hiddenReasons;
@property (nonatomic) BOOL useProxyStackView;
@property (copy, nonatomic) NSString *viewType;
@property (copy, nonatomic) NSString *containerType;
@property (readonly, nonatomic) IESLiveLayoutContainerView *view;
@property (weak, nonatomic) UIView *contentView;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } insets;
@property (nonatomic) struct CGSize { double width; double height; } size;
@property (nonatomic) BOOL hasRemoved;

- (void)bindingView:(id)a0 insets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a1 size:(struct CGSize { double x0; double x1; })a2;
- (void)remakeInsets:(id)a0 size:(id)a1;
- (void)setHidden:(BOOL)a0 forReason:(id)a1;
- (BOOL)isHiddenForReason:(id)a0;
- (void).cxx_destruct;
- (BOOL)isHidden;

@end
