@class NSString, AWEIMMessageConversation;

@interface AWEIMGroupEntryLimitsSwitchStyleCellModel : NSObject

@property (retain, nonatomic) AWEIMMessageConversation *conversation;
@property (nonatomic) unsigned long long type;
@property (nonatomic) BOOL isOn;
@property (nonatomic) BOOL disableSwitch;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *desc;

+ (id)modelWithConversation:(id)a0 type:(unsigned long long)a1 isOn:(BOOL)a2;

- (struct CGSize { double x0; double x1; })descLabelSizeWithMaxWidth:(double)a0;
- (id)attributedDescTextWithPreferredTheme:(long long)a0;
- (void)updateModelWithInfo:(id)a0;
- (void).cxx_destruct;
- (double)cellHeight;

@end
