@interface AWEPublishInfiniTaskTracker : NSObject

+ (void)p_mergePublishParams:(id)a0 toDict:(id)a1;
+ (id)paramsForPublishFinishWithAweme:(id)a0 publishViewModel:(id)a1;
+ (void)trackLifePublishWithParams:(id)a0;
+ (void)trackSingleVideoPublishDone:(id)a0 customerTracker:(id)a1 customerParams:(id)a2;
+ (void)trackImageAlbumStylePublishDone:(id)a0 customerTracker:(id)a1 customerParams:(id)a2;
+ (void)trackPublishAppState:(id)a0 state:(id)a1 status:(long long)a2 currentStage:(long long)a3;
+ (void)trackPublishFailSaveDraft:(id)a0 success:(BOOL)a1 draftError:(id)a2;
+ (void)trackPrePublish:(id)a0 sucess:(BOOL)a1;
+ (id)p_aweme:(id)a0;
+ (id)remoteVideoPublishTrackParams:(id)a0;
+ (void)p_uploadLocalLifePublishFinish:(id)a0;
+ (id)p_getMultiplePoiListFromPOIListArray:(id)a0;

@end
