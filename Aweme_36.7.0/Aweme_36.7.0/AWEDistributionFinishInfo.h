@class NSString, NSDictionary;

@interface AWEDistributionFinishInfo : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *type;
@property (retain, nonatomic) NSDictionary *extra;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
