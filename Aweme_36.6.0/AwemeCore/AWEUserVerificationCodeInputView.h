@class NSString, NSMutableArray;

@interface AWEUserVerificationCodeInputView : UITextField <UITextFieldDelegate>

@property (nonatomic) struct CGSize { double width; double height; } caretSize;
@property (nonatomic) double caretGap;
@property (nonatomic) double gap;
@property (retain, nonatomic) NSMutableArray *itemViews;
@property (retain, nonatomic) NSString *code;
@property (nonatomic) BOOL hasEditingChanged;
@property (nonatomic) long long count;
@property (nonatomic) double totalWidth;
@property (nonatomic) struct CGSize { double width; double height; } itemSize;
@property (nonatomic) double minGap;
@property (copy, nonatomic) id /* block */ firstInputCodeBlock;
@property (copy, nonatomic) id /* block */ didChangeBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEUserModuleServiceDOUYINDSAdapterClass;

- (id)aAWEUserModuleServiceDOUYINDSAdapter;
- (void)setupUIForPad;
- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })caretRectForPosition:(id)a0;
- (void)deleteBackward;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })placeholderRectForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })textRectForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)canPerformAction:(SEL)a0 withSender:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (BOOL)textField:(id)a0 shouldChangeCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementString:(id)a2;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })borderRectForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
