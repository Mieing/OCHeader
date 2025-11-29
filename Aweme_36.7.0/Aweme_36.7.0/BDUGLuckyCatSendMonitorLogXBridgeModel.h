@class NSString, NSDictionary, NSNumber;

@interface BDUGLuckyCatSendMonitorLogXBridgeModel : BDXBridgeModel

@property (copy, nonatomic) NSString *eventName;
@property (copy, nonatomic) NSString *vid;
@property (copy, nonatomic) NSString *url;
@property (copy, nonatomic) NSString *biz;
@property (retain, nonatomic) NSDictionary *param;
@property (retain, nonatomic) NSDictionary *category;
@property (retain, nonatomic) NSDictionary *metric;
@property (retain, nonatomic) NSDictionary *extra;
@property (retain, nonatomic) NSNumber *isSample;

+ (id)JSONKeyPathsByPropertyKey;

- (void)faultTolerance;
- (void).cxx_destruct;

@end
