@interface AWEOfflineCenterTrackingManager : NSObject

+ (Class)aAWEFeedModuleServiceDOUYINJXAdapterClass;
+ (id)videoPlayAspect;
+ (void)modifyParamsDictWithModel:(id)a0 params:(id)a1 context:(id)a2;
+ (id)videoPlayTimeAspect;
+ (id)videoPlayFinishAspect;
+ (id)videoPlayFailedAspect;
+ (unsigned long long)getNetStatus;
+ (void)trackStoreFailedWithModel:(id)a0 andReason:(id)a1 andType:(id)a2;
+ (id)bitrateFromModel:(id)a0;
+ (void)trackModelPlayFailedWithModel:(id)a0;
+ (void)trackModelDownloadDeleteWithModel:(id)a0 extraParams:(id)a1;
+ (void)trackAllVideoClearWithVideoLocalCount:(long long)a0 andVideoType:(long long)a1;
+ (void)addDefaultParamsFromModel:(id)a0 toParams:(id)a1;
+ (id)formatFromModel:(id)a0;
+ (long long)videoTypeWithAwemeModel:(id)a0;
+ (void)trackAllVideoClearWithCenterModel:(id)a0;
+ (void)trackModelDownloadStartWithModel:(id)a0;
+ (void)trackModelDownloadFailedWithModel:(id)a0 andReason:(id)a1 extraParams:(id)a2;
+ (void)trackModelDownloadSuccessWithModel:(id)a0 extraParams:(id)a1;
+ (void)trackModelDownloadPauseWithModel:(id)a0 extraParams:(id)a1;
+ (void)trackModelPlayStartWithModel:(id)a0;
+ (void)trackModelPlayFirstFrameWithModel:(id)a0;
+ (void)trackDashModelChangeWithModel:(id)a0 status:(id)a1;
+ (void)trackDownloadedFileLostWithModel:(id)a0;
+ (void)trackDownloadedDonePush:(BOOL)a0;
+ (void)trackDownloadWithAwemeModels:(id)a0 enterFrom:(id)a1;

- (id)aAWEFeedModuleServiceDOUYINJXAdapter;

@end
