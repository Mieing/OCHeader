@class NSLock, NSDictionary, NSMutableDictionary;

@interface AWEHPHambCache : NSObject

@property (retain, nonatomic) NSLock *lock;
@property (copy, nonatomic) NSDictionary *defaultConfig;
@property (copy, nonatomic) NSDictionary *userConfig;
@property (copy, nonatomic) NSDictionary *deviceConfig;
@property (retain, nonatomic) NSMutableDictionary *resultConfig;

- (id)getAllConfig;
- (id)getConfigWithCmd:(id)a0;
- (void)reloadDefaultConfig:(id)a0 userConfig:(id)a1 deviceConfig:(id)a2 messages:(id)a3;
- (void)insertMessages:(id)a0 modifyNames:(id *)a1 error:(id *)a2;
- (void).cxx_destruct;
- (id)init;

@end
