@interface EcsActionUtil : NSObject

+ (void)jumpShareTimelineWithInfo:(id)a0 shareExtInfo:(id)a1 currentVC:(id)a2 callbackDelegate:(id)a3;
+ (void)jumpShareVideoToTimelineWithInfo:(id)a0 shareExtInfo:(id)a1 currentVC:(id)a2 callbackDelegate:(id)a3;
+ (void)jumpShareImageToTimelineWithInfo:(id)a0 shareExtInfo:(id)a1 currentVC:(id)a2 callbackDelegate:(id)a3;
+ (id)arrMMImageForShareInfo:(id)a0 shareExtInfo:(id)a1;
+ (id)genWCTimelineExtBean:(id)a0 shareExtInfo:(id)a1;
+ (id)genUploadTaskWithVideoPath:(id)a0 withThumbPath:(id)a1;
+ (void)jumpShareH5ToTimelineWithInfo:(id)a0 shareExtInfo:(id)a1 currentVC:(id)a2 callbackDelegate:(id)a3;
+ (id)supportActionsWithScene:(unsigned long long)a0;
+ (BOOL)isActionSupportWithScene:(unsigned long long)a0 actionName:(id)a1;
+ (id)supportSyncActionsWithScene:(unsigned long long)a0;
+ (BOOL)isSyncActionSupportWithScene:(unsigned long long)a0 actionName:(id)a1;

@end
