@class NSString, NSDictionary;

@interface AWEGDGrouponDetailActionModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *actionType;
@property (copy, nonatomic) NSDictionary *actionParams;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
