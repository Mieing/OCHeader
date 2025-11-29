@class NSString;

@interface AWEPlayInteractionRelatedRecommendOptimizationController : NSObject <AWEPlayInteractionDescriptionParserProtocol, AWEPlayInteractionDescriptionRenderProtocol, AWEPlayInteractionDescriptionLifeCycleProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)calculateTruncationTokenWithContext:(id)a0;
- (id)advanceParserDescriptionWithContext:(id)a0;
- (id)setTruncationTokenIfNeedWithContext:(id)a0;
- (BOOL)isDetailPageShowing:(id)a0;
- (id)getMoreTruncationExtraModel:(id)a0 context:(id)a1;

@end
