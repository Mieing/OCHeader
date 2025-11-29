@class NSMutableArray;

@interface AWETeenAntiAddictionDecisionService : NSObject

@property (retain, nonatomic) NSMutableArray *taskArray;
@property (readonly, nonatomic) double lastDecisionTS;

- (void)teenModeDidChange:(BOOL)a0 isLogout:(BOOL)a1;
- (void)storeLastDecisionTS;
- (void)setLastDecisionTS:(double)a0;
- (id)taskForID:(unsigned long long)a0;
- (void)addTask:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)makeDecision;

@end
