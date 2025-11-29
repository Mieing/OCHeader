@class NSString, NSDictionary;

@interface AWELuckyCatNetworkModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) unsigned long long errNo;
@property (copy, nonatomic) NSString *errTips;
@property (copy, nonatomic) NSDictionary *data;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
