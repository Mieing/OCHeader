@class NSString, IESECGoodsDetailHeaderContentModel;

@interface IESECGoodsDetailHeaderContentMultiPriviewCell : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long index;
@property (retain, nonatomic) IESECGoodsDetailHeaderContentModel *cell;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
