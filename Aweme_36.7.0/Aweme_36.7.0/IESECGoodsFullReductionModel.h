@class NSArray, NSString;

@interface IESECGoodsFullReductionModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSArray *list;
@property (copy, nonatomic) NSString *URL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
