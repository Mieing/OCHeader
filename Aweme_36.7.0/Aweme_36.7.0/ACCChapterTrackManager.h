@class DVEVCContext, NSString, AWEVideoPublishViewModel;

@interface ACCChapterTrackManager : NSObject <DVETrackEventProtocol>

@property (weak, nonatomic) AWEVideoPublishViewModel *publishModel;
@property (weak, nonatomic) DVEVCContext *vcContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithPublishModel:(id)a0;
- (id)nleModel;
- (void)p_trackEvent:(id)a0 params:(id)a1;
- (void)trackEvent:(id)a0 eventParam:(id)a1 needCommonParams:(BOOL)a2;
- (void)updateVCContext:(id)a0;
- (id)p_commonParamsFromPublishModel;
- (void).cxx_destruct;
- (void)trackEvent:(id)a0;

@end
