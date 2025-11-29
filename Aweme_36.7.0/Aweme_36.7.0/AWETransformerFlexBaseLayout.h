@class NSArray, AWETransformerLayoutFlexAttributes, AWETransformerLayoutCommonAttributes;
@protocol AWETransformerElementLayoutProtocol;

@interface AWETransformerFlexBaseLayout : NSObject

@property (nonatomic) BOOL isAdaptiveHeight;
@property (nonatomic) BOOL isAdaptiveWidth;
@property (nonatomic) BOOL isHeightDeteminedByParent;
@property (nonatomic) BOOL isWidthDeteminedByParent;
@property (nonatomic) BOOL isScroll;
@property (nonatomic) struct CGSize { double width; double height; } parentSize;
@property (retain, nonatomic) AWETransformerLayoutCommonAttributes *commonAttributes;
@property (retain, nonatomic) AWETransformerLayoutFlexAttributes *flexAttributes;
@property (copy, nonatomic) NSArray *flexChilds;
@property (weak, nonatomic) id<AWETransformerElementLayoutProtocol> containerElement;

- (BOOL)isHeightAdjustByParent;
- (BOOL)isWidthAdjustByParent;
- (id)__filterFlexChildsWithContainerElement:(id)a0;
- (BOOL)__isHeightStretchedByParent:(id)a0;
- (BOOL)__isWidthDeterminedByParent:(id)a0;
- (BOOL)__isHeightRecountByParent:(id)a0;
- (BOOL)__isWidthStretchedByParent:(id)a0;
- (BOOL)__isWidthRecountByParent:(id)a0;
- (id)initWithConatinerElement:(id)a0;
- (BOOL)__isHeightDeterminedByParent:(id)a0;
- (void).cxx_destruct;

@end
