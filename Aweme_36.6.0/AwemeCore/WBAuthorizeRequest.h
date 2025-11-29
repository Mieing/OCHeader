@class NSString;

@interface WBAuthorizeRequest : WBBaseRequest

@property (retain, nonatomic) NSString *redirectURI;
@property (retain, nonatomic) NSString *scope;
@property (nonatomic) BOOL shouldShowWebViewForAuthIfCannotSSO;

+ (Class)associateResponseClass;

- (void)storeToDictionary:(id)a0;
- (BOOL)canBeReceived;
- (void).cxx_destruct;
- (id)validate;
- (id)init;
- (BOOL)canBeSent;
- (void)loadFromDictionary:(id)a0;

@end
