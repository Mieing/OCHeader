@class NSString;

@interface AWEVideoSafetyCheckResponseModel : AWEBaseApiModel

@property (nonatomic) long long safetyCode;
@property (copy, nonatomic) NSString *safetyMsg;
@property (copy, nonatomic) NSString *itemId;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
