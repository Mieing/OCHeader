@class WASMTPageSheetViewModel;

@interface WASubscriptionMessageTemplatePageSheet : WAAuthorizePageSheet

@property (retain, nonatomic) WASMTPageSheetViewModel *smtViewModel;
@property (nonatomic) long long backButtonType;

- (id)initWithTitle:(id)a0 messageList:(id)a1;
- (id)subviewClassList;
- (id)subViewModel;
- (void).cxx_destruct;

@end
