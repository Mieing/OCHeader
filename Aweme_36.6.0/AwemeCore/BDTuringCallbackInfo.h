@class NSString;

@interface BDTuringCallbackInfo : NSObject <NSCopying>

@property (nonatomic) char bdTuringRetry;
@property (nonatomic) double bdTuringCallbackDuration;
@property (copy, nonatomic) NSString *retryByHeaderFilterKey;

- (id)initWithTuringRetry:(char)a0 callbackDuration:(double)a1 retryByHeaderFilterKey:(id)a2;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
