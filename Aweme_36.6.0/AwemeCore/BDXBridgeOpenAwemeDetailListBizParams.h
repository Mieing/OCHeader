@class NSString, NSDictionary;

@interface BDXBridgeOpenAwemeDetailListBizParams : BDXBridgeModel

@property (copy, nonatomic) NSString *flashMobID;
@property (copy, nonatomic) NSString *musicID;
@property (copy, nonatomic) NSString *interestPoint;
@property (copy, nonatomic) NSDictionary *propInfo;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
