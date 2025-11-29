@class NSString, NSMutableDictionary;

@interface TMAPIControlUnifiedContext : NSObject <TMAPIControlTaskContext>

@property (retain, nonatomic) NSMutableDictionary *unified;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)rulerParams;
- (id)apiMethod;
- (id)apiClass;
- (id)apiDataType;
- (id)contextFromKey:(id)a0;
- (void)mergeContext:(id)a0 withKey:(id)a1;
- (id)callToken;
- (void).cxx_destruct;
- (id)init;

@end
