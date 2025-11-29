@class NSArray, NSString;

@interface BDMannorSendThirdTrackParamModel : BDXBridgeModel

@property (copy, nonatomic) NSArray *trackURLList;
@property (copy, nonatomic) NSString *trackLabel;
@property (copy, nonatomic) NSString *creativeID;
@property (copy, nonatomic) NSString *adID;
@property (copy, nonatomic) NSString *logExtra;
@property (copy, nonatomic) NSString *groupID;

+ (id)JSONKeyPathsByPropertyKey;
+ (id)JSONTransformerForKey:(id)a0;

- (void).cxx_destruct;

@end
