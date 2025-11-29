@class HTSLiveCommentApi, NSString, NSArray, HTSLiveTemplateEngineConfiguration, WordAssociationResponse_ResponseData, HTSEventContext;
@protocol HTSLiveTemplateProviderAdapter;

@interface IESLiveCommentIntentionsViewModel : NSObject

@property (copy, nonatomic) NSString *lastSentence;
@property (copy, nonatomic) NSString *tempLastSentence;
@property (copy, nonatomic) NSArray *intentionModels;
@property (retain, nonatomic) HTSLiveCommentApi *commentApi;
@property (retain, nonatomic) id<HTSLiveTemplateProviderAdapter> templateParser;
@property (retain, nonatomic) HTSLiveTemplateEngineConfiguration *templateConfig;
@property (nonatomic) double lastSentenceChangeTime;
@property (nonatomic) double latestRequestTime;
@property (retain, nonatomic) WordAssociationResponse_ResponseData *unusedWordAssociationData;
@property (retain, nonatomic) HTSEventContext *trackContext;
@property (nonatomic) BOOL enable;
@property (nonatomic) BOOL showIntentions;
@property (nonatomic) long long intentionREQTimeRate;
@property (nonatomic) double commentPanelShowTimeInterval;
@property (copy, nonatomic) id /* block */ intetionsDidUpdatedBlock;

- (void)didSetAttachingDIContext;
- (void)checkUnusedIntentionsShouldTrackHide;
- (void)checkUnusedIntentionsAvailable;
- (void)setLastUnusedIntentions:(id)a0;
- (void)trackIntentionEntryClickWithModel:(id)a0 fusionEmoji:(id)a1;
- (void)trackIntentionEntryClickWithModel:(id)a0;
- (void)fetchIntentionsWithSentence:(id)a0;
- (void)fetchIntentionsWithSentence:(id)a0 preSentence:(id)a1;
- (void)realFetchIntentionsWithSentence:(id)a0 preSentence:(id)a1;
- (void)trackIntentionsEntryShowWithModels:(id)a0 duration:(double)a1 show:(BOOL)a2;
- (id)createEntryModelsWithData:(id)a0;
- (void)prepareImageForAssociationResultsIfNeeded:(id)a0 completion:(id /* block */)a1;
- (void)configSubItemsIfNeedWithModel:(id)a0 result:(id)a1;
- (id)getPlainTextEntryTitleFromAttributedString:(id)a0;
- (id)getUnusedIntentionsIfExsit;
- (void).cxx_destruct;
- (id)init;

@end
