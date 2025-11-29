@class YYLabel, NSString;

@interface AWEIMServiceChatRoleCardTextView : UIView

@property (retain, nonatomic) YYLabel *textLabel;
@property (retain, nonatomic) NSString *content;
@property (nonatomic) BOOL isExpanded;
@property (copy, nonatomic) id /* block */ tapExpandActionBlock;

- (void)updateTextLabelWithText:(id)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })p_getVisibleRangeText:(id)a0 appendText:(id)a1;
- (void)p_setAlignmentCenter;
- (void).cxx_destruct;
- (void)setText:(id)a0;
- (id)init;

@end
