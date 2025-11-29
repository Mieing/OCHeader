@class NSDictionary, NSError;

@interface AWEPlatformTokenInfoModel : AWEBaseApiModel

@property (nonatomic) double lastUploadTime;
@property (nonatomic) unsigned long long platform;
@property (retain, nonatomic) NSDictionary *info;
@property (retain, nonatomic) NSError *error;

- (void).cxx_destruct;

@end
