@class NSString;

@interface AWEECommerceFeedReadyTask : NSObject <HTSBootTask>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)syncGetAWEECMallMultiTab;
+ (void)execute;


@end
