@class NSString, NSDictionary;

@interface CJPayIntelligenceJsModule : NSObject <JSModule>

@property (class, readonly, copy, nonatomic) NSString *name;
@property (class, readonly, copy, nonatomic) NSDictionary *methodLookup;
@property (class, readonly, copy, nonatomic) NSDictionary *attributeLookup;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


- (id)kvStorageRead:(id)a0;
- (void)kvStorageWrite:(id)a0;
- (id)getABTestValAndExposure:(id)a0;

@end
