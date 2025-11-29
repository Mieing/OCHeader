@class FlutterTextInputView;

@interface FlutterTokenizer : UITextInputStringTokenizer

@property (weak, nonatomic) FlutterTextInputView *textInputView;

- (id)initWithTextInput:(id)a0;
- (id)rangeEnclosingPosition:(id)a0 withGranularity:(long long)a1 inDirection:(long long)a2;
- (id)lineEnclosingPosition:(id)a0 inDirection:(long long)a1;
- (void).cxx_destruct;

@end
