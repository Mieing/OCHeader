@class NSString, NSMutableDictionary, NSDictionary;

@interface AWEIMStrategyRegisterTriple : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _configDictLock;
}

@property (retain, nonatomic) NSMutableDictionary *indexNodes;
@property (readonly, copy, nonatomic) NSString *sceneString;
@property (readonly, copy, nonatomic) NSString *responseBizKey;
@property (readonly, nonatomic) Class modelClass;
@property (copy, nonatomic) NSDictionary *configDict;

- (id)initWithSceneString:(id)a0 bizKey:(id)a1 modelClass:(Class)a2;
- (void)p_configDictLock;
- (void)p_configDictUnLock;
- (void).cxx_destruct;

@end
