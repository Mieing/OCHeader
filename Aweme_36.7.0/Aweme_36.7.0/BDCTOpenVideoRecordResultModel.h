@class NSDictionary, NSNumber, NSString;

@interface BDCTOpenVideoRecordResultModel : BDXBridgeModel

@property (copy, nonatomic) NSDictionary *data;
@property (retain, nonatomic) NSNumber *status_code;
@property (copy, nonatomic) NSString *log_id;
@property (copy, nonatomic) NSString *message;
@property (copy, nonatomic) NSString *preview_image;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
