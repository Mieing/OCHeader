@class UIView;
@protocol IESECSliceXFlexDelegate;

@interface IESECSliceXFlex : NSObject

@property (readonly, nonatomic) struct YGNode { } *ygNode;
@property (nonatomic) BOOL isDirty;
@property (nonatomic) struct CGSize { double width; double height; } previousSize;
@property (nonatomic) BOOL hasOngoingLayout;
@property (weak, nonatomic) UIView *view;
@property (nonatomic) BOOL isIncludedInLayout;
@property (readonly, nonatomic) BOOL isRoot;
@property (readonly, nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } contentInsets;
@property (readonly, nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } contentOutsets;
@property (weak, nonatomic) UIView *associatedView;
@property (readonly, nonatomic) id /* block */ overflow;
@property (weak, nonatomic) id<IESECSliceXFlexDelegate> delegate;
@property (readonly, nonatomic) id /* block */ direction;
@property (readonly, nonatomic) id /* block */ wrap;
@property (readonly, nonatomic) id /* block */ layoutDirection;
@property (readonly, nonatomic) id /* block */ justifyContent;
@property (readonly, nonatomic) id /* block */ alignItems;
@property (readonly, nonatomic) id /* block */ alignSelf;
@property (readonly, nonatomic) id /* block */ alignContent;
@property (readonly, nonatomic) id /* block */ grow;
@property (readonly, nonatomic) id /* block */ shrink;
@property (readonly, nonatomic) id /* block */ basis;
@property (readonly, nonatomic) id /* block */ width;
@property (readonly, nonatomic) id /* block */ height;
@property (readonly, nonatomic) id /* block */ minWidth;
@property (readonly, nonatomic) id /* block */ maxWidth;
@property (readonly, nonatomic) id /* block */ minHeight;
@property (readonly, nonatomic) id /* block */ maxHeight;
@property (readonly, nonatomic) id /* block */ aspectRatio;
@property (readonly, nonatomic) id /* block */ position;
@property (readonly, nonatomic) id /* block */ left;
@property (readonly, nonatomic) id /* block */ top;
@property (readonly, nonatomic) id /* block */ right;
@property (readonly, nonatomic) id /* block */ bottom;
@property (readonly, nonatomic) id /* block */ marginTop;
@property (readonly, nonatomic) id /* block */ marginLeft;
@property (readonly, nonatomic) id /* block */ marginBottom;
@property (readonly, nonatomic) id /* block */ marginRight;
@property (readonly, nonatomic) id /* block */ margin;
@property (readonly, nonatomic) id /* block */ paddingTop;
@property (readonly, nonatomic) id /* block */ paddingLeft;
@property (readonly, nonatomic) id /* block */ paddingBottom;
@property (readonly, nonatomic) id /* block */ paddingRight;
@property (readonly, nonatomic) id /* block */ padding;
@property (readonly, nonatomic) id /* block */ borderAll;
@property (readonly, nonatomic) id /* block */ display;

+ (void)supportSliceXFlex:(id)a0;
+ (id)getSliceXFlex:(id)a0;
+ (BOOL)isSupportedSliceXFlex:(id)a0;
+ (void)removeSliceXFlex:(id)a0;
+ (void)initialize;

- (void)removeYGAllChildNode;
- (id)initWithView_common:(id)a0;
- (void)layoutWithMode:(unsigned long long)a0;
- (void)markDirtyAndPropagate;
- (void)markBaseline:(double)a0;
- (void)markCustomBaseline;
- (id)initWithView:(id)a0;
- (void).cxx_destruct;
- (void)layout;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)dealloc;
- (void)markDirty;

@end
