@class NSString;

@interface AWEApplogIncreaseVideoPopularityStrategy : AWEApplogIncreaseAbstractStrategy <AWEExperienceApplogListenerProtocol, AWEExperienceTimeProtocol>

@property (nonatomic) BOOL enableFastEmitTag;
@property (nonatomic) double fastEmitScoreMin;
@property (nonatomic) double fastEmitScoreMax;
@property (nonatomic) long long hasConsumedFastEmitVideoCount;
@property (copy, nonatomic) NSString *triggerApplogEvent;
@property (nonatomic) BOOL hasConsumedFastEmitVideo;
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
