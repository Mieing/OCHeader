@class NSString, AWEShareSpikeGoodsIMInfoModel;

@interface AWEShareEcomActivityInfoModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) AWEShareSpikeGoodsIMInfoModel *imInfo;
@property (copy, nonatomic) NSString *detailUrl;
@property (copy, nonatomic) NSString *shareTemplate;
@property (copy, nonatomic) NSString *qrExtra;
@property (copy, nonatomic) NSString *tokenExtra;
@property (copy, nonatomic) NSString *shareScene;
@property (copy, nonatomic) NSString *ecomShareTrackParams;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)imInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
