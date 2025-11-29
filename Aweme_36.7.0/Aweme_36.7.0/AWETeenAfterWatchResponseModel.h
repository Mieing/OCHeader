@class NSString, NSArray;

@interface AWETeenAfterWatchResponseModel : AWEBaseApiModel

@property (nonatomic) long long status;
@property (copy, nonatomic) NSString *msg;
@property (retain, nonatomic) NSArray *afterWatchArray;

+ (id)afterWatchArrayJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
