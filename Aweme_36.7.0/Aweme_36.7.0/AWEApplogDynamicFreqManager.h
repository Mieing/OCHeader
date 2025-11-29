@class AWEExperiencePriorityStack, NSMutableArray, NSString;

@interface AWEApplogDynamicFreqManager : NSObject <AWEApplogDynamicFreqStrategyDelegate>

@property (retain, nonatomic) NSMutableArray *strategyList;
@property (retain, nonatomic) AWEExperiencePriorityStack *validStrategyPriorityStack;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)onManagerInit;
- (id)buildApplogDefaultFreqStrategy;
- (void)logObjectsInPriorityStack;
- (void)updateApplogUploadFrequency;
- (void)trackStrategyChangedWithStrategy:(id)a0 didChangeState:(BOOL)a1;
- (void)strategy:(id)a0 didChangeState:(BOOL)a1 fromState:(BOOL)a2;
- (void).cxx_destruct;
- (id)init;

@end
