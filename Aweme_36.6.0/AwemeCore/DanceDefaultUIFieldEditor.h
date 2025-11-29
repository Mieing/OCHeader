@class NSString;

@interface DanceDefaultUIFieldEditor : NSObject <DanceUIFieldEditor>

@property (readonly, nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } selectionRange;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setSelection:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)setAttributedText:(id)a0 andSetCaretSelectionAfterText:(BOOL)a1;
- (void)setAttributedMarkedText:(id)a0 selectedRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;

@end
