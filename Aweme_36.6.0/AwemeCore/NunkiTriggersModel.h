@class NSDictionary, NSString;

@interface NunkiTriggersModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSDictionary *triggers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
