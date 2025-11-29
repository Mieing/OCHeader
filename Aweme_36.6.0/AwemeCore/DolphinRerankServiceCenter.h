@class NSMutableDictionary;

@interface DolphinRerankServiceCenter : NSObject

@property (retain, nonatomic) NSMutableDictionary *rerankServiceMap;

+ (id)sharedInstance;

- (id)dolphinRerankServiceWithName:(id)a0;
- (id)registerDolphinRerankServiceWithName:(id)a0 configuration:(id /* block */)a1;
- (void)unRegisterDolphinRerankServiceWithName:(id)a0;
- (void).cxx_destruct;

@end
