@class NSString, NSArray;

@interface IESIMJobManagerJobMetaInfo : NSObject <IESIMJobManagerJobMetaInfo>

@property (nonatomic) unsigned int regOrder;
@property (copy) NSString *jobName;
@property (copy) NSArray *observingEvents;
@property (copy) id /* block */ jobBody;
@property (copy) id /* block */ asyncJobBody;
@property (nonatomic) unsigned long long priority;
@property (nonatomic) BOOL shouldBlock;
@property (nonatomic) BOOL shouldRunInMainQueue;
@property (copy) NSArray *depends;
@property (copy) id /* block */ dependencyProvider;
@property (copy) id /* block */ shouldRunChecker;
@property (copy) id /* block */ shouldRecreateChecker;
@property (nonatomic) int delayDuration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)p_copyFrom:(id)a0 to:(id)a1;

@end
