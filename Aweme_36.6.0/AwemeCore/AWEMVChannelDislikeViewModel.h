@class NSDictionary, NSString;

@interface AWEMVChannelDislikeViewModel : AWEDoubleColumnDislikeViewModel <AWEDoubleColumnDislikeVMProtocol>

@property (copy, nonatomic) NSDictionary *logExtraDict;
@property (nonatomic) long long triggerAction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)referString;
+ (id)enterMethod;
+ (id)logScenePrefix;
+ (void)requestRevokeFeedbackVideo:(id)a0;
+ (void)trackRevokeFeedbackWithModel:(id)a0 andFeedbackInfo:(id)a1;

- (id)dislikeLongPressPanelConfig;
- (void)sendDislikeRequest:(id)a0 extraInfo:(id)a1;
- (id)dislikeSectionData:(id)a0;
- (id)feedbackSectionData:(id)a0;
- (double)headerHeightForSection:(long long)a0;
- (double)cellWidthForIndexPath:(id)a0;
- (void)setupUIInfo;
- (id)dislikeTextConfig;
- (id)watchLaterSectionData:(id)a0;
- (void)trackDislikeWithType:(id)a0;
- (id)playletAndLongVideoDislikeArray:(id)a0;
- (id)videoDislikeArray;
- (id)mixAndLongVideoFeedbackArray;
- (id)feedBackInfoArray;
- (BOOL)currentSectionWatchLaterEnable:(long long)a0;
- (id)liveDislikeArray;
- (void).cxx_destruct;
- (void)setCurrentModel:(id)a0;

@end
