@class NSString, UILabel, UIImageView;

@interface ACCTextErrorContentView : NSObject <DUXPopoverContent>

@property (copy, nonatomic) NSString *contentText;
@property (retain, nonatomic) UILabel *contentLabel;
@property (retain, nonatomic) UIImageView *ignoreImageView;
@property (copy, nonatomic) id /* block */ tapTextAction;
@property (copy, nonatomic) id /* block */ tapIgnoreAction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)duxPopover_view;
- (void)tapImageView;
- (void)tapLabel;
- (id)initWithContentText:(id)a0;
- (void).cxx_destruct;

@end
