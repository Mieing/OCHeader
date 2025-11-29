@class NSString;

@interface WeChat.WSTextFieldInteractor : WebSearchPluginBase {
    void /* unknown type, empty encoding */ forbidNotifyTextChanged;
    void /* unknown type, empty encoding */ didEditingAtBegining;
    void /* unknown type, empty encoding */ viewHasAppear;
    void /* unknown type, empty encoding */ latestNotifiedText;
}

@property (nonatomic, readonly) void /* unknown type, empty encoding */ textField;
@property (nonatomic, readonly) NSString *trimmedText;
@property (nonatomic, copy) NSString *latestNotifiedText;

- (id)initWithTextField:(id)a0 webviewOwner:(id)a1;
- (void)handleEvent:(id)a0 userInfo:(id)a1;
- (BOOL)textFieldShouldBeginEditing;
- (void)onSearchInputTextChanged:(id)a0;
- (void)__onSearchInputTextChangedWith:(id)a0;
- (void)focusSearchBar:(BOOL)a0;
- (id)init;
- (void).cxx_destruct;

@end
