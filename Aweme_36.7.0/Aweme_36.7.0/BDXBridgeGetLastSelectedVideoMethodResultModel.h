@class NSString, NSNumber;

@interface BDXBridgeGetLastSelectedVideoMethodResultModel : BDXBridgeModel

@property (copy, nonatomic) NSString *aid;
@property (copy, nonatomic) NSString *primary_title;
@property (copy, nonatomic) NSString *secondary_title;
@property (retain, nonatomic) NSNumber *value;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
