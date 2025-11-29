@class NSString;

@interface SlideTextSelectModel : NSObject

@property (copy, nonatomic) NSString *selectedText;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } selectedRange;

- (id)initWithContent:(id)a0 selectedRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void).cxx_destruct;

@end
