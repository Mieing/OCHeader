@class NSError, NSString, NSArray;

@interface VEScanQRCodeResult : NSObject

@property (retain, nonatomic) NSError *error;
@property (copy, nonatomic) NSString *content;
@property (nonatomic) unsigned long long codeType;
@property (nonatomic) float zoomFactor;
@property (copy, nonatomic) NSArray *quadrilateralPoints;
@property (nonatomic) float vesdk_algorithm_init_duration;
@property (nonatomic) float vesdk_algorithm_qrcode_duration;
@property (nonatomic) float vesdk_algorithm_not_qrcode_duration;
@property (nonatomic) float vesdk_after_algorithm_duration;

- (void).cxx_destruct;
- (id)init;

@end
