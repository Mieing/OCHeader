@class NSString, NSDictionary;

@interface IESECGoodsTaxInfiModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *taxText;
@property (copy, nonatomic) NSString *url;
@property (retain, nonatomic) NSDictionary *taxDescribe;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
