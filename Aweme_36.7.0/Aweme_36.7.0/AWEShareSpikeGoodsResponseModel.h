@class NSNumber, NSString, AWEShareSpikeGoodsDataModel;

@interface AWEShareSpikeGoodsResponseModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSNumber *st;
@property (copy, nonatomic) NSString *msg;
@property (retain, nonatomic) AWEShareSpikeGoodsDataModel *data;
@property (copy, nonatomic) NSString *dataJson;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;
+ (id)dataJSONTransformer;

- (void).cxx_destruct;

@end
