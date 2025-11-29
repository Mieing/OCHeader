@class NSString;

@interface BDXBridgeLuckycatUserHandPredictMethodResultModel : BDXBridgeModel

@property (copy, nonatomic) NSString *last_predict_hand;
@property (copy, nonatomic) NSString *most_used_hand;
@property (copy, nonatomic) NSString *recently_used_hand;
@property (copy, nonatomic) NSString *last_session_most_use_hand;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
