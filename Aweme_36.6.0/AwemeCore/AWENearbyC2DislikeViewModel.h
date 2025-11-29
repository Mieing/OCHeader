@interface AWENearbyC2DislikeViewModel : AWEDoubleColumnDislikeViewModel

@property (nonatomic) long long pageType;

+ (id)referString;
+ (id)enterMethod;
+ (id)logScenePrefix;
+ (id)dislikeDataSource:(id)a0;

- (id)commonParams;
- (void)sendDislikeRequest:(id)a0 extraInfo:(id)a1;
- (id)dislikeSectionData:(id)a0;
- (id)feedbackSectionData:(id)a0;
- (void)trackDislikeWithType:(id)a0;
- (void)afterDismissFeedbackWithIndexPath:(id)a0;
- (void)trackDislikePanelShow;
- (id)sectionData:(id)a0;
- (void)trackDislike:(id)a0;

@end
