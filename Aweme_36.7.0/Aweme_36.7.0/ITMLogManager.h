@class ITMLogModel;

@interface ITMLogManager : NSObject

@property (retain, nonatomic) ITMLogModel *logModel;

+ (id)sharedInstance;

- (void)event:(id)a0 params:(id)a1;
- (void)log:(id)a0 level:(unsigned long long)a1;
- (void).cxx_destruct;

@end
