@class NSMutableDictionary;

@interface BDPMessageHash : NSObject {
    NSMutableDictionary *dic;
}

- (void)registerMessage:(id)a0 forKey:(id)a1;
- (void)unregisterKeyMessage:(id)a0;
- (id)getObserversArray:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
