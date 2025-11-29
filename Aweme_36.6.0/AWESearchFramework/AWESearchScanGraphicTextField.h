@class NSString;

@interface AWESearchScanGraphicTextField : DUXBaseTextField

@property (copy, nonatomic) NSString *lastText;
@property (nonatomic) BOOL shouldDeleteBackward;
@property (copy, nonatomic) id /* block */ deleteBackwardBlock;
@property (copy, nonatomic) id /* block */ textFieldWillBecomeEmptyBlock;
@property (copy, nonatomic) id /* block */ textFieldWillBecomeNotEmptyBlock;
@property (copy, nonatomic) id /* block */ textFieldDidChangeBlock;

- (void)identifyTextChangeWithOldText:(id)a0 andNewText:(id)a1;
- (void).cxx_destruct;
- (void)textDidChange:(id)a0;
- (void)deleteBackward;
- (void)setText:(id)a0;
- (id)init;
- (void)dealloc;

@end
