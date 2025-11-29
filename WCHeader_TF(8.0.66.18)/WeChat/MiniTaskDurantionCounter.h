@interface MiniTaskDurantionCounter : NSObject

@property (nonatomic) unsigned long long storedDurantion;
@property (nonatomic) unsigned long long baselineTime;
@property (retain, nonatomic) id userInfo;

- (id)init;
- (void)reset;
- (void)pause;
- (void)resume;
- (unsigned long long)durantion;
- (void).cxx_destruct;

@end
