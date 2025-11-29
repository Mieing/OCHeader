@class NSDictionary, NSString;

@interface AWEPOIBDUGTrackerResponseModel : AWEBaseApiModel

@property (nonatomic) long long httpCode;
@property (retain, nonatomic) NSDictionary *logData;
@property (retain, nonatomic) NSString *message;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
