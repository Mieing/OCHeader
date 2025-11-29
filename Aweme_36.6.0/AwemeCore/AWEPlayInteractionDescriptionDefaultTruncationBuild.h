@class AWEPlayInteractionDescriptionContext;

@interface AWEPlayInteractionDescriptionDefaultTruncationBuild : NSObject

@property (retain, nonatomic) AWEPlayInteractionDescriptionContext *parserContext;

+ (id)defaultTruncationBuildWithWithContext:(id)a0;
+ (unsigned long long)entryTextType;
+ (Class)aAWEPlayInteractionDescriptionElementAdapterClass;

- (id)createPlainTextTailLabelWithAttributedText:(id)a0;
- (id)expandTagFont;
- (id)getDotsTruncationExtraModel;
- (id)getSpaceTruncationExtraModel;
- (id)getMoreTruncationExtraModel:(id)a0;
- (id)getTailSpaceTruncationExtraModel;
- (id)getEditTruncationExtraModel;
- (id)getSpaceTruncationExtraModelWithWidth:(double)a0;
- (id)entryTextWithContext:(id)a0;
- (unsigned long long)stableEntryStrategyWithContext:(id)a0;
- (BOOL)hitStableExtendedConsumptionWithContext:(id)a0;
- (id)editTextFont;
- (BOOL)shouldShowReeditTipWithContext:(id)a0;
- (BOOL)canShowTailMore;
- (id)moreString;
- (BOOL)canEnterRelatedSinglePanelWithContext:(id)a0;
- (BOOL)canEnterMaskLayerWithContext:(id)a0;
- (id)aAWEPlayInteractionDescriptionElementAdapter;
- (void).cxx_destruct;

@end
