@class NSString;

@interface AWEIMBaseNoticeDisturbModelNew : IESIMBaseApiModel

@property (copy, nonatomic) NSString *name;
@property (nonatomic) long long type;
@property (nonatomic) long long disturb;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
