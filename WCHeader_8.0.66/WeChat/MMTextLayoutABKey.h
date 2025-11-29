@interface MMTextLayoutABKey : NSObject

@property (nonatomic) BOOL enable;
@property (nonatomic) long long sampleCount;
@property (nonatomic) long long errorRatio;
@property (nonatomic) long long statisticsRatio;
@property (nonatomic) BOOL enableProfile;
@property (nonatomic) BOOL enableRandomProfile;
@property (nonatomic) unsigned int os;
@property (nonatomic) long long step;
@property (nonatomic) long long maxCount;
@property (nonatomic) long long maxError;
@property (nonatomic) long long reportLimit;
@property (nonatomic) long long mode;
@property (nonatomic) long long type;
@property (nonatomic) long long errorDuration;

- (id)initWithOS:(unsigned int)a0;
- (BOOL)boolForKey:(id)a0 valeIfUndefined:(BOOL)a1;
- (BOOL)isEnable:(id)a0 valeIfUndefined:(BOOL)a1;
- (BOOL)isEnable:(id)a0 valeIfUndefined:(BOOL)a1 forceDisableIfNotSet:(BOOL)a2;
- (id)keyWith:(id)a0;
- (BOOL)boolWithKey:(id)a0 undef:(BOOL)a1;
- (BOOL)boolWithKey:(id)a0 undef:(BOOL)a1 disableIfNotSet:(BOOL)a2;
- (long long)integerWithKey:(id)a0 undef:(long long)a1;
- (void)setup;
- (id)attrWithFont:(id)a0 lineBreak:(long long)a1 breakStrategy:(unsigned long long)a2;
- (BOOL)probe;
- (BOOL)isRoot;
- (BOOL)isOSAvailable;

@end
