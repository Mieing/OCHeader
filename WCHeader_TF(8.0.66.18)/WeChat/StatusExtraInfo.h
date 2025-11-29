@class NSString, NSMutableArray;

@interface StatusExtraInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *backgroundId;
@property (nonatomic) float contentScore;
@property (nonatomic) long long serverCreateTimeMs;
@property (nonatomic) long long modifyTimeMs;
@property (retain, nonatomic) NSMutableArray *iconActions;

+ (void)initialize;

- (void)setIconActions:(id)a0;
- (id)iconActions;
- (void)setModifyTimeMs:(long long)a0;
- (long long)modifyTimeMs;
- (void)setServerCreateTimeMs:(long long)a0;
- (long long)serverCreateTimeMs;
- (void)setContentScore:(float)a0;
- (float)contentScore;
- (void)setBackgroundId:(id)a0;
- (id)backgroundId;

@end
