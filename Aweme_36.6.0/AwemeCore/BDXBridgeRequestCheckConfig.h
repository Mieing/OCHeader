@class NSDictionary;

@interface BDXBridgeRequestCheckConfig : NSObject

@property (retain, nonatomic) NSDictionary *cachedUnits;
@property (nonatomic, getter=isToggleOn) BOOL toggle;

- (id)requestCheckForMethod:(id)a0 withParameters:(id)a1;
- (id)setupUnits;
- (id)unitForMethod:(id)a0;
- (BOOL)matchRule:(id)a0 withValue:(id)a1 error:(id *)a2;
- (void).cxx_destruct;
- (id)init;

@end
