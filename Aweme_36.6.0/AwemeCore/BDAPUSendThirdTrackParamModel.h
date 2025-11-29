@class NSArray, NSString;

@interface BDAPUSendThirdTrackParamModel : BDXBridgeModel

@property (copy, nonatomic) NSArray *trackURLList;
@property (copy, nonatomic) NSString *trackLabel;
@property (copy, nonatomic) NSString *cid;
@property (copy, nonatomic) NSString *adID;
@property (copy, nonatomic) NSString *logExtra;

+ (id)JSONKeyPathsByPropertyKey;
+ (id)JSONTransformerForKey:(id)a0;

- (void).cxx_destruct;

@end
