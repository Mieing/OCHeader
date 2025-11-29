@interface AWEPublishEventFactory : NSObject

+ (id)createPublishClickEvent;
+ (id)createMergePartFinishEvent;
+ (id)createMarkEditPreUploadToPublishEvent;
+ (id)createMergeStartForVidEvent;
+ (id)createCancelForRemoteVidReusedForVidEvent;
+ (id)createUploadWhileMergeEvent;

@end
