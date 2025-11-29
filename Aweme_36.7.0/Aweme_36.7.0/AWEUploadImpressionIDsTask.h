@class NSString;

@interface AWEUploadImpressionIDsTask : NSObject <HTSBootTask>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)uploadLastFollowFeedImpressionIDsWithContext:(id)a0;
+ (void)execute;


@end
