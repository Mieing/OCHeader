@class NSMutableDictionary;

@interface IESIMMessageRegisterManager : NSObject

@property (readonly, nonatomic) NSMutableDictionary *messageMap;
@property (readonly, nonatomic) NSMutableDictionary *messageLoaderMap;

+ (id)sharedIntance;

- (void)evaluateLazyRegister;
- (id)getRegisterMessageItemWithType:(long long)a0;
- (void)p_registeMessageItem:(id)a0;
- (BOOL)p_oldIsMessageRegistedWithMessageType:(long long)a0;
- (void)registeMessageItemGenerator:(void /* function */ *)a0 messageType:(long long)a1;
- (void).cxx_destruct;
- (id)init;

@end
