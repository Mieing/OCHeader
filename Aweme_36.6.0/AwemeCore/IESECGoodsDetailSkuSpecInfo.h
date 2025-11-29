@class NSString, NSArray;

@interface IESECGoodsDetailSkuSpecInfo : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *specDefaultName;
@property (retain, nonatomic) NSArray *specIDs;
@property (retain, nonatomic) NSArray *specNames;
@property (copy, nonatomic) NSString *selectSpecId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
