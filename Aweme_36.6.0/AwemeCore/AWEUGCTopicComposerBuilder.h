@class NSDictionary, AWEUGCTopicPublishContext;
@protocol AWEUGCTopicComposerStrategyProtocol;

@interface AWEUGCTopicComposerBuilder : NSObject

@property (retain, nonatomic) id<AWEUGCTopicComposerStrategyProtocol> strategy;
@property (retain, nonatomic) AWEUGCTopicPublishContext *publishContext;
@property (copy, nonatomic) NSDictionary *extraParams;
@property (nonatomic) unsigned long long publishType;

+ (id)removeHashtags:(id)a0;
+ (id)createNewHashtagStickerConfigFromStickers:(id)a0;

- (id)collectCoreTrackParams:(id)a0 initScene:(unsigned long long)a1;
- (id)buildCamera;
- (id)buildCommonData;
- (id)buildBizData;
- (id)buildAlbum;
- (id)buildInfiniEditor;
- (id)buildPublish;
- (id)buildMergeConfig;
- (id)buildComposerFeature;
- (id)buildDataConfig;
- (id)buildRichText;
- (void)handleInjectService:(id)a0;
- (void)addCameraNewHashtagIfNeeded:(id)a0 withStickers:(id)a1;
- (id)getAnchorFromChallengeModel:(id)a0;
- (id)initWithStrategy:(id)a0 context:(id)a1 extraParams:(id)a2 publishType:(unsigned long long)a3;
- (void)buildComposerWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;

@end
