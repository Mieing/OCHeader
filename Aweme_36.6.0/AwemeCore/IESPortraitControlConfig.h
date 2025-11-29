@class NSString;

@interface IESPortraitControlConfig : NSObject {
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _lock;
}

@property (nonatomic) BOOL innerHitReport;
@property (nonatomic) BOOL ruleEnable;
@property (nonatomic) BOOL reportEnable;
@property (nonatomic) double reportUserRate;
@property (retain, nonatomic) NSString *ruleConfigKey;
@property (retain, nonatomic) NSString *srcConfigKey;
@property (retain, nonatomic) NSString *typeConfigKey;

- (BOOL)hitReport;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
