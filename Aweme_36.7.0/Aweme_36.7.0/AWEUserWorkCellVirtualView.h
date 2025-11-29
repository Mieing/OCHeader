@interface AWEUserWorkCellVirtualView : AWERLVirtualView

@property (copy, nonatomic) id /* block */ viewCreateBlock;
@property (copy, nonatomic) id /* block */ viewUpdateBlock;
@property (copy, nonatomic) id /* block */ viewLayoutBlock;

- (void)updateFrameForRenderedView:(id)a0;
- (id)createViewToRender;
- (void)updateAttributesForRenderedView:(id)a0;
- (void).cxx_destruct;

@end
