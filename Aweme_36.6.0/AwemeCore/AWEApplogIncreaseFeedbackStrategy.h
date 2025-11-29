@class NSArray, NSString;

@interface AWEApplogIncreaseFeedbackStrategy : AWEApplogIncreaseAbstractStrategy <AWEExperienceApplogListenerProtocol, AWEExperienceTimeProtocol>

@property (copy, nonatomic) NSArray *negativeFbApplogList;
@property (nonatomic) BOOL isNegativeFbTriggered;
@property (copy, nonatomic) NSString *triggerApplogEvent;
@property (copy, nonatomic) NSString *negativeApplogEvent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)playWith:(id)a0;
- (void)onApplogEvent:(id)a0 params:(id)a1;
- (BOOL)shouldExecuteStrategy;
- (void).cxx_destruct;
- (void)execute;
- (id)init;

@end
