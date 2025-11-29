@class IESECSliceXTextInputElementView;

@interface IESECSliceXTextField : UITextField

@property (weak, nonatomic) IESECSliceXTextInputElementView *textInputElementView;
@property (nonatomic) BOOL returnKeyHasTapped;

- (id)initWithTextInputElementView:(id)a0;
- (void).cxx_destruct;
- (void)paste:(id)a0;

@end
