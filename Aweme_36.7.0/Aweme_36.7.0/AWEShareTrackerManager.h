@class NSString;

@interface AWEShareTrackerManager : NSObject <AWEShareTrackerManager>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)forwardToCustomPage:(id)a0;
+ (void)returnFromCustomPage:(id)a0;


@end
