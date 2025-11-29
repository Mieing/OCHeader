@class NSString, NSNumber, NSArray;

@interface BDAPUAdInfoMethodResultModel : BDXBridgeModel

@property (copy, nonatomic) NSString *adID;
@property (retain, nonatomic) NSNumber *adType;
@property (retain, nonatomic) NSNumber *cid;
@property (copy, nonatomic) NSString *groupID;
@property (copy, nonatomic) NSString *logExtra;
@property (copy, nonatomic) NSArray *trackUrlList;
@property (copy, nonatomic) NSString *SKANParameters;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
