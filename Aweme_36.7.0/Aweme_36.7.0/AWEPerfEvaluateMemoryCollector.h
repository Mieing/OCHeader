@class NSString;

@interface AWEPerfEvaluateMemoryCollector : NSObject <AWEPerfEvaluateCollector>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
