@class NSString, NSHashTable;
@protocol IESLiveGroupLiveTrackerInterceptorImplDelegate;

@interface IESLiveGroupLiveTrackerInterceptorImpl : NSObject <IESLiveTrackerDelegate>

@property (retain, nonatomic) NSHashTable *trackerEventNames;
@property (weak, nonatomic) id<IESLiveGroupLiveTrackerInterceptorImplDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)trackerFilterEventNames;

@end
