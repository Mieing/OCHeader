@class NSString;

@interface BDUGLuckyActivityStageTaskModel : NSObject <BDUGLuckyDogOnDateTaskTrigger> {
    NSString *_cacheKey;
}

@property (copy, nonatomic) NSString *entryId;
@property (nonatomic) long long beforeActivityEnterTime;
@property (nonatomic) double activityBeginTime;
@property (nonatomic) double activityExpireTime;
@property (copy, nonatomic) NSString *resourceId;
@property (copy, nonatomic) NSString *cycleId;
@property (nonatomic) BOOL disableFinishTrigger;
@property (copy, nonatomic) NSString *taskKeyExtStr;
@property (copy, nonatomic) id /* block */ didStartTriggerBlock;
@property (copy, nonatomic) id /* block */ didFinishTriggerBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)taskKey;
- (void)didStartTrigger;
- (BOOL)triggerOncePerSession;
- (void)didFinishTrigger;
- (void).cxx_destruct;
- (id)beginDate;
- (id)expireDate;

@end
