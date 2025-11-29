@class BaseAnimaXAbility;

@interface AnimaXContext : NSObject

@property (retain, nonatomic) BaseAnimaXAbility *ability;
@property (nonatomic) BOOL needSkipCountDown;
@property (nonatomic) BOOL enableMultiThreadAccelerate;

+ (id)contextWithDefaultAbility;

- (id)initWithAbility:(id)a0;
- (id)monitorDelegate;
- (void).cxx_destruct;

@end
