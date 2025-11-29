@class AWEPaidStreamIAAGetSendAwardConfigV2ResultData;

@interface AWEPaidStreamIAAGetSendAwardConfigV2ResponseModel : AWEBaseApiModel

@property (retain, nonatomic) AWEPaidStreamIAAGetSendAwardConfigV2ResultData *resultData;

+ (id)resultDataJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
