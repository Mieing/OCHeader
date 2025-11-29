@interface AWERelatedRecommendImpl.RelatedRecommendDislikeViewModel : AWEDoubleColumnDislikeViewModel {
    void /* unknown type, empty encoding */ $__lazy_storage_$_defaultDislikeSectionData;
    void /* unknown type, empty encoding */ $__lazy_storage_$_defaultFeedbackSectionData;
}

- (void)sendDislikeRequest:(id)a0 extraInfo:(id)a1;
- (id)dislikeSectionData:(id)a0;
- (id)feedbackSectionData:(id)a0;
- (BOOL)calculatePanelHeightAfterConfig:(id)a0;
- (BOOL)useAdaptiveHeight:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
