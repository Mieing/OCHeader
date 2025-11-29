@class IESLLGoodsDetailPageContext, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface IESLLGDTrackerProbe : NSObject

@property (retain, nonatomic) NSMutableArray *recordList;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) BOOL enable;
@property (weak, nonatomic) IESLLGoodsDetailPageContext *context;

- (BOOL)gdTrackerDetectionEnable;
- (id)analyzeRecord:(id)a0;
- (void)trackConflict:(id)a0;
- (id)deepDetectKeys;
- (id)calDeepConflict:(id)a0;
- (id)jsonValue:(id)a0;
- (id)filterValueConflict:(id)a0;
- (id)getValueBlackConflicts:(id)a0;
- (id)joinToString:(id)a0 seg:(id)a1;
- (id)getValueConflicts:(id)a0;
- (id)valueConflictWhiteList;
- (id)valueConflictBlackList;
- (id)gdTrackerDetectionSettings;
- (void)recordConflictKey:(id)a0 fromValue:(id)a1 toValue:(id)a2 from:(long long)a3 to:(long long)a4;
- (BOOL)isEnable;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (void)finish;

@end
