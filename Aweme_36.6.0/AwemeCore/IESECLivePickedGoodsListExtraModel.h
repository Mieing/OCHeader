@class NSString, NSArray, NSNumber;

@interface IESECLivePickedGoodsListExtraModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *couponGuide;
@property (copy, nonatomic) NSString *hasShield;
@property (copy, nonatomic) NSString *shieldTitle;
@property (copy, nonatomic) NSArray *shieldNotice;
@property (retain, nonatomic) NSNumber *reputationScore;
@property (retain, nonatomic) NSNumber *reputationPercetage;
@property (retain, nonatomic) NSString *logID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shieldNoticeJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
