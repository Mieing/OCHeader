@class ACCTextErrorContentView, NSString;

@interface ACCTextErrorPopover : DUXPopover

@property (retain, nonatomic) ACCTextErrorContentView *contentView;
@property (copy, nonatomic) id /* block */ tapTextAction;
@property (copy, nonatomic) id /* block */ tapIgnoreAction;
@property (nonatomic) long long offset;
@property (nonatomic) long long length;
@property (copy, nonatomic) NSString *originalText;
@property (copy, nonatomic) NSString *replacement;
@property (copy, nonatomic) id /* block */ textErrorPopoverDismissBlock;

- (id)initWithContentText:(id)a0 target:(id)a1;
- (void)dismiss;
- (void).cxx_destruct;

@end
