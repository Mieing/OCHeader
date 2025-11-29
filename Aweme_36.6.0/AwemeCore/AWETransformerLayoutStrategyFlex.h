@class NSString, AWETransformerJustifyContentBaseLayout, AWETransformerLayoutFlexAttributes, AWETransformerAlignItemsBaseLayout;

@interface AWETransformerLayoutStrategyFlex : NSObject <AWETransformerLayoutStrategyProtocol>

@property (retain, nonatomic) AWETransformerJustifyContentBaseLayout *justifyContentLayout;
@property (retain, nonatomic) AWETransformerAlignItemsBaseLayout *alignItemsLayout;
@property (retain, nonatomic) AWETransformerLayoutFlexAttributes *flexAttributes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithContainerElement:(id)a0;
- (void)calculateLayoutWithContainerSize:(struct CGSize { double x0; double x1; })a0 completion:(id /* block */)a1;
- (double)calculateAdaptiveContainerWidth;
- (double)calculateAdaptiveContainerHeight;
- (id)justifyContentLayoutWithMainAxisStrategy:(unsigned long long)a0 element:(id)a1;
- (id)alignItemsLayoutWithCrossAxisStrategy:(unsigned long long)a0 element:(id)a1;
- (void).cxx_destruct;

@end
