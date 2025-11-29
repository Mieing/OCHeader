@class NSString;

@interface BDUGTextInputNotificationAction : BDUGNotificationAction

@property (copy, nonatomic) NSString *textInputButtonTitle;
@property (copy, nonatomic) NSString *textInputPlaceholder;

+ (id)actionWithIdentifier:(id)a0 title:(id)a1 options:(unsigned long long)a2 textInputButtonTitle:(id)a3 textInputPlaceholder:(id)a4 icon:(id)a5;
+ (id)actionWithIdentifier:(id)a0 title:(id)a1 options:(unsigned long long)a2 textInputButtonTitle:(id)a3 textInputPlaceholder:(id)a4;

- (void).cxx_destruct;

@end
