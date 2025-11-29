@class NSMutableDictionary;

@interface IESIMMessageHash : NSObject {
    NSMutableDictionary *p_hash;
}

- (id)getKeyMessageList:(id)a0;
- (void)registerMessage:(id)a0 forKey:(id)a1;
- (void)unregisterKeyMessage:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
