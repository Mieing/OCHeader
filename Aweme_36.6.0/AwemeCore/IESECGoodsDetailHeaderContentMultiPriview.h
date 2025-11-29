@class NSArray, NSString;

@interface IESECGoodsDetailHeaderContentMultiPriview : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSArray *cells;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)cellsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
