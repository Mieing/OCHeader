@class NSDictionary, NSString, TIMXSDKInstance;

@interface TIMXElapsedTimeTracker : NSObject <TIMXElapsedTimeTaskEvent>

@property (weak, nonatomic) TIMXSDKInstance *r;
@property (copy, nonatomic) NSDictionary *trackConfig;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
