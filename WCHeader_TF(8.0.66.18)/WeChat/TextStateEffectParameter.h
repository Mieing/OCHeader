@class NSString;

@interface TextStateEffectParameter : NSObject

@property (retain, nonatomic) NSString *cacheKey;
@property (nonatomic) long long type;

+ (id)defaultParameter;

- (void).cxx_destruct;

@end
