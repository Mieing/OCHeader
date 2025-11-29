@class NSString;

@interface AWEIMBaseNoticeSubscribeModelNew : IESIMBaseApiModel

@property (copy, nonatomic) NSString *name;
@property (nonatomic) long long type;
@property (nonatomic) long long unsubscribe;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
