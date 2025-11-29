@class NSDictionary;

@interface BDByteCastPPGetDeviceInfoCmd : BDByteCastPPCmd

@property (retain, nonatomic) NSDictionary *deviceInfo;

+ (id)cmd;

- (void).cxx_destruct;

@end
