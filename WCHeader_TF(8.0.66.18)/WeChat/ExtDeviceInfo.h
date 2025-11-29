@class NSString;

@interface ExtDeviceInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *deviceBrand;
@property (retain, nonatomic) NSString *deviceManufacturer;
@property (retain, nonatomic) NSString *deviceModel;
@property (retain, nonatomic) NSString *deviceRelease;
@property (retain, nonatomic) NSString *deviceIncremental;
@property (retain, nonatomic) NSString *deviceDisplay;

+ (void)initialize;

@end
