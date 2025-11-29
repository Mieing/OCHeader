@class NSString;

@interface AWElunaSong : AWEBaseApiModel

@property (copy, nonatomic) NSString *lunaSongId;
@property (nonatomic) BOOL lunaCopyright;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
