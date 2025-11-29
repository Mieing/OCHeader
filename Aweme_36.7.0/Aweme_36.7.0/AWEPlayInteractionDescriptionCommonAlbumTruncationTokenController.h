@class NSString;

@interface AWEPlayInteractionDescriptionCommonAlbumTruncationTokenController : NSObject <AWEPlayInteractionDescriptionParserProtocol, AWEPlayInteractionDescriptionRenderProtocol, AWEPlayInteractionDescriptionLifeCycleProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)enableFullPageSearchParams;

- (id)createPlainTextTailLabelWithAttributedText:(id)a0;
- (id)expandTagFont;
- (id)calculateTruncationTokenWithContext:(id)a0;
- (id)advanceParserDescriptionWithContext:(id)a0;
- (id)setTruncationTokenIfNeedWithContext:(id)a0;
- (id /* block */)getDescriptionLabelTapActionWithContext:(id)a0;
- (void)viewDidLoadWithContext:(id)a0;
- (void)moreLabelDidClickAtExpandRegion:(BOOL)a0 withParams:(id)a1 parserContext:(id)a2;
- (BOOL)needDefaultActionWithContext:(id)a0;
- (id)getMoreTruncationExtraModel:(id)a0 context:(id)a1;
- (id)entryTextWithContext:(id)a0;
- (void)trackMiniDetailTitleClickWithContext:(id)a0;
- (unsigned long long)stableEntryStrategyWithContext:(id)a0;
- (BOOL)hitStableExtendedConsumptionWithContext:(id)a0;
- (id)editTextFont;

@end
