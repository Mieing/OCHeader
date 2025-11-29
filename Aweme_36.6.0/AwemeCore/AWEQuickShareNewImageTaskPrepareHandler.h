@class NSString, AWEQuickShareTaskPrepareResult;

@interface AWEQuickShareNewImageTaskPrepareHandler : NSObject <AWEQuickShareNewTaskPrepareService>

@property (retain, nonatomic) AWEQuickShareTaskPrepareResult *result;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
