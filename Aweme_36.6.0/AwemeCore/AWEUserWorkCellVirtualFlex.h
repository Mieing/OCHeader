@interface AWEUserWorkCellVirtualFlex : AWERLVirtualFlexView

@property (copy, nonatomic) id /* block */ viewUpdateBlock;
@property (copy, nonatomic) id /* block */ viewLayoutBlock;

- (void)updateFrameForRenderedView:(id)a0;
- (void)updateAttributesForRenderedView:(id)a0;
- (void).cxx_destruct;

@end
