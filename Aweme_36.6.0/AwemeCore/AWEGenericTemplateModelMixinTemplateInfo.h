@class CKGenericTemplateModel, NSNumber, NSArray;

@interface AWEGenericTemplateModelMixinTemplateInfo : NSObject

@property (weak, nonatomic) CKGenericTemplateModel *hostTemplateModel;
@property (retain, nonatomic) NSNumber *isAIMattingValue;
@property (retain, nonatomic) NSNumber *isMultiSlotsTemplateValue;
@property (retain, nonatomic) NSNumber *isAIGCTemplateValue;
@property (retain, nonatomic) NSNumber *isAsyncAIGCAlgorithmTemplateValue;
@property (retain, nonatomic) NSNumber *isAIAvatarTemplateValue;
@property (retain, nonatomic) NSNumber *isOnlyAIAvatarSlotsTemplateValue;
@property (retain, nonatomic) NSNumber *isPreprocessTemplateValue;
@property (copy, nonatomic) NSArray *features;
@property (nonatomic) BOOL hasStickersToRecover;
@property (nonatomic) BOOL templateHasBeautyFeature;

- (BOOL)isAIGCTemplate;
- (BOOL)isPreprocessTemplate;
- (BOOL)isAIGCTemplateForUGCFusionTransition;
- (id)parseMetricsDictWithPrefix:(BOOL)a0;
- (BOOL)isAIAvatarTemplate;
- (BOOL)isAsyncAIGCAlgorithmTemplate;
- (double)generateTimeConsuming;
- (BOOL)isMultiSlotsTemplate;
- (id)bizExtraDictCached;
- (BOOL)isAIMatting;
- (BOOL)isCustomInfoTemplate;
- (id)sdkExtraString;
- (id)sdkExtraDict;
- (id)bizExtraString;
- (id)bizExtraDict;
- (BOOL)isOnlyAIAvatarSlotsTemplate;
- (id)sdkExtraDictCached;
- (id)recommendMusicID;
- (id)musicIdForMusicBeatsDynamicTemplate;
- (id)dynamicTransitionsListForMusicBeatsDynamicTemplate;
- (void).cxx_destruct;

@end
