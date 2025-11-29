@class NSString, IESECGoodsDetailPendantFrame, NSDictionary, IESECGoodsDetailPendantTiming;

@interface IESECGoodsDetailPendantInfo : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) IESECGoodsDetailPendantFrame *pendantFrame;
@property (retain, nonatomic) IESECGoodsDetailPendantTiming *showTiming;
@property (copy, nonatomic) NSString *schema;
@property (copy, nonatomic) NSDictionary *data;
@property (nonatomic) unsigned long long type;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
