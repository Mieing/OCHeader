@class NSDictionary, NSMutableDictionary, NSString;

@interface APRiskConfigServiceDelegate : NSObject <APRiskConfigServiceProtocol>

@property (retain, nonatomic) NSDictionary *configMap;
@property (retain, nonatomic) NSDictionary *oldConfigMap;
@property (retain, nonatomic) NSMutableDictionary *listeners;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)addConfigChangeListener:(id)a0 forKey:(id)a1;
- (void)refreshConfig:(id)a0 from:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (id)stringValueForKey:(id)a0;

@end
