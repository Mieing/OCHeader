@class NSString, WBMessageObject, WBAuthorizeRequest;

@interface WBSendMessageToWeiboRequest : WBBaseRequest

@property (nonatomic) BOOL shouldShowComposerIfCannotShareInWBApp;
@property (retain, nonatomic) WBAuthorizeRequest *authRequest;
@property (retain, nonatomic) NSString *access_token;
@property (retain, nonatomic) WBMessageObject *message;

+ (id)requestWithMessage:(id)a0;
+ (id)requestWithMessage:(id)a0 authInfo:(id)a1 access_token:(id)a2;
+ (Class)associateResponseClass;

- (void)storeToDictionary:(id)a0;
- (BOOL)canBeReceived;
- (void).cxx_destruct;
- (id)validate;
- (BOOL)canBeSent;
- (void)loadFromDictionary:(id)a0;

@end
