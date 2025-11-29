@class NSString, WBMessageObject;

@interface WBShareMessageToContactRequest : WBBaseRequest

@property (retain, nonatomic) NSString *object_id;
@property (retain, nonatomic) NSString *short_url;
@property (retain, nonatomic) WBMessageObject *message;

+ (void)requestWithMessage:(id)a0;
+ (Class)associateResponseClass;

- (void)storeToDictionary:(id)a0;
- (BOOL)canBeReceived;
- (void).cxx_destruct;
- (id)validate;
- (BOOL)canBeSent;
- (void)loadFromDictionary:(id)a0;

@end
