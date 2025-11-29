@class NSString;

@interface AWEIMGroupMessageInactiveModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *secUid;
@property (copy, nonatomic) NSString *lastEnterGroupTime;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
