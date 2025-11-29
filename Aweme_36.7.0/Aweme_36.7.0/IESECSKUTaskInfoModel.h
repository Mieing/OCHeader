@class NSString, NSDictionary, IESECBTMModel, NSNumber;

@interface IESECSKUTaskInfoModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSString *curSKUID;
@property (retain, nonatomic) NSString *curSKUNum;
@property (retain, nonatomic) NSString *poiID;
@property (retain, nonatomic) NSNumber *installmentCount;
@property (retain, nonatomic) NSString *couponID;
@property (retain, nonatomic) NSString *orderURL;
@property (retain, nonatomic) IESECBTMModel *btmModel;
@property (copy, nonatomic) NSString *customPropertyList;
@property (copy, nonatomic) NSString *salePackageList;
@property (retain, nonatomic) NSDictionary *suppExtraParams;
@property (retain, nonatomic) NSNumber *showDouCampaign;
@property (copy, nonatomic) NSDictionary *extensionParams;
@property (copy, nonatomic) NSDictionary *addCartExtra;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)taskInfoParamsFromExtraSKUParams:(id)a0;
+ (id)JSONKeyPathsByPropertyKey;

- (id)basicOrderParams;
- (void).cxx_destruct;

@end
