@class JSApiScopeAuthorizePageSheet, JSApiScopeAuthorizeInfo;

@interface JSApiScopeAuthViewModel : WAAuthPageSheetViewModel

@property (retain, nonatomic) JSApiScopeAuthorizeInfo *infoModel;
@property (weak, nonatomic) JSApiScopeAuthorizePageSheet *pageSheet;
@property (copy, nonatomic) id /* block */ scrollToAvatarAction;

- (void).cxx_destruct;

@end
