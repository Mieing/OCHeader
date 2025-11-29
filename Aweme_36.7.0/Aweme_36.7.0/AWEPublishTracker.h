@class NSString, NSDictionary, AWEVideoPublishViewModel, AWEPublishTrackParamManager;
@protocol AWEVideoPublishFlowTrackDelegate;

@interface AWEPublishTracker : NSObject <AWEPublishTrackerProtocol>

@property (weak, nonatomic) AWEVideoPublishViewModel *publishModel;
@property (retain, nonatomic) AWEPublishTrackParamManager *paramManager;
@property (copy, nonatomic) NSDictionary *publishEventParams;
@property (weak, nonatomic) id<AWEVideoPublishFlowTrackDelegate> delegate;
@property (copy, nonatomic) NSString *enterFrom;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)trackPublishResourcesCheck:(id)a0 checkType:(id)a1 extraInfo:(id)a2;
+ (void)trackSaveDraftPerformance:(id)a0 duration:(long long)a1 info:(id)a2;
+ (void)trackDownloadEvent:(id)a0 extra:(id)a1;
+ (void)trackToolPerformancePublishNext:(id)a0 nextPage:(id)a1;
+ (void)trackMediaEffectInfo:(id)a0;
+ (id)getDownloadEventParams:(id)a0 extra:(id)a1;
+ (id)picTemplateParamsFromPublishModel:(id)a0;
+ (void)uploadBeautyInfo:(id)a0;
+ (int)awemeTypeForTracker:(id)a0;

- (id)initWithPublishModel:(id)a0;
- (id)commonTrackParams:(id)a0;
- (void)draftEvent;
- (void)publishFinishEventWithParams:(id)a0;
- (id)publishEventWithParams:(id)a0;
- (void)publishFailEventWithError:(id)a0 params:(id)a1;
- (void)jarvisItemClickEvent;
- (void)trackStickerAtInfo;
- (void)trackTitleTextInfo;
- (void)reportSelectedPOI:(id)a0 lastRequestPOILogpb:(id)a1;
- (void)p_trackPropSearchEvent:(id)a0 attribute:(id)a1;
- (void)feedbackForSaveDraftIfNeeded;
- (id)p_musicAttributes;
- (void)p_trackSocialPropNotice;
- (id)publishEventParamStorageKey;
- (void)configPublishExceptionJSONValidWithParams:(id)a0 event:(id)a1;
- (id)paramsShouldSync;
- (void)publishFailExceptionWithError:(id)a0 params:(id)a1;
- (void).cxx_destruct;

@end
