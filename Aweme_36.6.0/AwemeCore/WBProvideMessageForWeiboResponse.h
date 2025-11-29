@class WBMessageObject;

@interface WBProvideMessageForWeiboResponse : WBBaseResponse

@property (retain, nonatomic) WBMessageObject *message;

+ (id)responseWithMessage:(id)a0;

- (void)storeToDictionary:(id)a0;
- (BOOL)canBeReceived;
- (void).cxx_destruct;
- (id)validate;
- (BOOL)canBeSent;
- (void)loadFromDictionary:(id)a0;

@end
