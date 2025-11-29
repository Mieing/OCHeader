@class BaseRequest, NSMutableArray, NSString;

@interface WxaABTestInfoRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSMutableArray *appinfoList;
@property (retain, nonatomic) NSString *deviceModel;
@property (retain, nonatomic) NSString *deviceBrand;
@property (retain, nonatomic) NSString *deviceManufacturer;
@property (retain, nonatomic) NSString *osVersion;
@property (retain, nonatomic) NSString *publicLibVersion;
@property (nonatomic) unsigned int publicLibReleaseVersion;
@property (retain, nonatomic) NSString *deviceRelease;
@property (retain, nonatomic) NSString *deviceIncremental;
@property (retain, nonatomic) NSString *deviceDisplay;

+ (void)initialize;

@end
