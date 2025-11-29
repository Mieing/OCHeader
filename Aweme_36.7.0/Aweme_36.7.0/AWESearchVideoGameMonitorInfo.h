@class NSString;

@interface AWESearchVideoGameMonitorInfo : AWEBaseApiModel

@property (copy, nonatomic) NSString *monitorURL;
@property (nonatomic) BOOL shouldAppendIdentity;
@property (copy, nonatomic) NSString *openGameUrl;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
