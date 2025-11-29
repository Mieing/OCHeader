@class NSString;

@interface TIMXLongConnectionPBChatCMDRequest : TIMXLongConnectionPBRequest

@property (retain, nonatomic) NSString *logToken;

+ (Class)callbackClass;

- (void).cxx_destruct;
- (id)initWithRootObject:(id)a0;
- (void)willSend;

@end
