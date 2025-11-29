@class NSString;

@interface IESLLPOISourceTraceInterceptor : NSObject <IESLLPOITrackerInterceptor>

@property (readonly, nonatomic) unsigned long long type;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
