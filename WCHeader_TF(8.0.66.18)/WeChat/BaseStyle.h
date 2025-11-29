@interface BaseStyle : NSObject

@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } frame;
@property (nonatomic) BOOL bUserInteractionEnabled;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } range;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } displayRange;
@property (nonatomic) BOOL endOfContent;
@property (nonatomic) BOOL hasAdjustment;
@property (nonatomic) BOOL bHighlighted;
@property (nonatomic) BOOL isSelectable;
@property (weak, nonatomic) BaseStyle *eventRespondStyle;

- (id)init;
- (void)drawInContext:(struct CGContext { } *)a0;
- (void).cxx_destruct;

@end
