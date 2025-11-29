@class NSString;

@interface IESECLiveOpenSchemaModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *liveSchema;
@property (copy, nonatomic) NSString *liveWithProductSchema;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
