@class NSString;

@interface AWEIMHighlyProspectiveBaseResponse : AWEBaseApiModel

@property (nonatomic) long long baseStatusCode;
@property (copy, nonatomic) NSString *baseStatusMessage;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
