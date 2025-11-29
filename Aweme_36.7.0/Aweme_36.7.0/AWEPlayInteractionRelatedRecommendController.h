@class NSString;

@interface AWEPlayInteractionRelatedRecommendController : NSObject <AWEPlayInteractionDescriptionParserProtocol, AWEPlayInteractionDescriptionRenderProtocol, AWEPlayInteractionDescriptionLifeCycleProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)createPlainTextTailLabelWithAttributedText:(id)a0;
- (id)expandTagFont;
- (id)calculateTruncationTokenWithContext:(id)a0;
- (id)advanceParserDescriptionWithContext:(id)a0;
- (id)setTruncationTokenIfNeedWithContext:(id)a0;
- (BOOL)isDetailPageShowing:(id)a0;

@end
