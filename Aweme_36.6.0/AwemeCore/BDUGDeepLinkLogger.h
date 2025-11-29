@interface BDUGDeepLinkLogger : NSObject

+ (void)xlogCustomizeMsg:(id)a0;
+ (void)xlogLinkInvokeEndWithScheme:(id)a0 type:(long long)a1;
+ (void)xlogCheckClipboardEnd:(BOOL)a0;
+ (void)xlogRequestSchemeSuccess:(id)a0;
+ (void)xlogRequestSchemeNotInSchemeList;
+ (void)xlogRequestSchemeErrorWithMessage:(id)a0 code:(long long)a1;
+ (void)xlogDidIsEmpty;
+ (void)updateLinkInvokeSession;
+ (void)xlogStartParseLinkWithUri:(id)a0 isInit:(BOOL)a1;
+ (void)xlogParseLinkSuccessWithScheme:(id)a0 result:(long long)a1;
+ (void)xlogParseLinkFailWithUrl:(id)a0 result:(long long)a1;
+ (void)xlogForbidReadClipboard;
+ (void)updateClipboardInvokeSession;
+ (void)xlogStartCheckClipboard:(BOOL)a0;
+ (void)xlogStartReadClipboard;
+ (void)xlogRepeatScheme;
+ (void)xlogClipboardIsNull;

@end
