@class NSString, NSArray, AWEAwemeModel;

@interface AWEApplogIncreaseAbstractStrategy : NSObject <AWEExperienceApplogListenerProtocol>

@property (nonatomic) double lastExecuteTimeStamp;
@property (copy, nonatomic) NSString *strategyName;
@property (copy, nonatomic) NSArray *triggerApplogList;
@property (nonatomic) double minTimeInterval;
@property (copy, nonatomic) NSArray *forbidTimeArray;
@property (nonatomic) BOOL enable;
@property (retain, nonatomic) AWEAwemeModel *curPlayModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onApplogEvent:(id)a0 params:(id)a1;
- (BOOL)shouldExecuteStrategy;
- (BOOL)checkTimeInterval;
- (BOOL)checkPeakTimeForbidden;
- (void)updateExecuteTimeStamp;
- (id)selectForbidTimeRangeWithConfig:(id)a0;
- (void).cxx_destruct;
- (void)execute;
- (id)init;
- (void)dealloc;

@end
