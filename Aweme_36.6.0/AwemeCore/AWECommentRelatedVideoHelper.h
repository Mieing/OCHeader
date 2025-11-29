@interface AWECommentRelatedVideoHelper : NSObject

+ (id)getDurationAndPercentParamsFromPlayer:(id)a0;
+ (id)playerParamsWithPlayer:(id)a0;
+ (void)trackShowRelatedBarWithAWEModel:(id)a0 extraInfo:(id)a1;
+ (void)recordRelatedVideoBarShown;
+ (void)preloadMpWithModel:(id)a0;
+ (void)trackClickRelatedBarWithAWEModel:(id)a0 extraInfo:(id)a1;
+ (void)openXiguaWithModel:(id)a0 extraInfo:(id)a1;
+ (void)recordRelatedVideoBarClick;
+ (id)commentTrackParamsWithModel:(id)a0 extraInfo:(id)a1;
+ (BOOL)isXiguaAppInstalled;
+ (Class)aAWECommentXIGAttributionCommonAdapterClass;
+ (void)openXiguaAppWithModel:(id)a0 extraInfo:(id)a1;
+ (void)openMpUrlWithModel:(id)a0;
+ (void)trackAlertClickActionWithAWEModel:(id)a0 clickConfirm:(BOOL)a1 extraInfo:(id)a2;
+ (void)trackZlinkWithModel:(id)a0;
+ (void)doOpenXiguaAppWithModel:(id)a0;
+ (void)trackAlertShowWithAWEModel:(id)a0 extraInfo:(id)a1;
+ (BOOL)isAwemeLiteWithModel:(id)a0;
+ (id)getGroupIDForRelatedModel:(id)a0;
+ (id)getGroupIDForCommentRelatedModel:(id)a0;
+ (id)getGroupIDForMpOpenUrl:(id)a0 andOpenAppSchema:(id)a1;
+ (id)getGroupIDFromMpOpenUrl:(id)a0;
+ (id)getGroupIDFromAppScheme:(id)a0;
+ (void)didShowWithAWEModel:(id)a0 extraInfo:(id)a1;
+ (void)didClickWithAWEModel:(id)a0 extraInfo:(id)a1;
+ (BOOL)isSameVideoForRelatedVideo:(id)a0 andCommentRelatedVideo:(id)a1;

- (id)aAWECommentXIGAttributionCommonAdapter;

@end
