@class NSNumber, NSString, NSDictionary;

@interface BDCTTakePhotoResultModel : BDXBridgeModel

@property (retain, nonatomic) NSNumber *status_code;
@property (copy, nonatomic) NSString *message;
@property (copy, nonatomic) NSDictionary *data;
@property (copy, nonatomic) NSDictionary *byted_cert_data;
@property (copy, nonatomic) NSDictionary *raw_data;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
