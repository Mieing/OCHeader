@class NSString;

@interface AWELastViewInteractiveButtonModel : AWEBaseApiModel

@property (nonatomic) long long buttonType;
@property (copy, nonatomic) NSString *message;
@property (nonatomic) long long level;
@property (nonatomic) long long cursor;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
