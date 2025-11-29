@class NSString;
@protocol IESLiveMonitor;

@interface IESLiveLaunchTaskLiveIM : IESLiveBaseLaunchTask <IESLiveIMTrackerDelegate>

@property (retain, nonatomic) id<IESLiveMonitor> monitor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)trackWith:(long long)a0 extra:(id)a1;
- (void)excute;
- (void).cxx_destruct;

@end
