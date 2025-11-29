@class NSMutableDictionary, NSDictionary, AWESearchHotSpotConfigModel, NSString;

@interface AWEUGCTopicPublishInnerFlowTool : NSObject <AWEPublishTaskMessage, AWEUGCTopicInnerFlowFunctionHandlerProtocol>

@property (retain, nonatomic) NSMutableDictionary *pubslihTaskMap;
@property (retain, nonatomic) AWESearchHotSpotConfigModel *topicPublishModel;
@property (copy, nonatomic) id /* block */ publishWithContextBlock;
@property (copy, nonatomic) NSDictionary *logExtra;
@property (nonatomic) unsigned long long innerFlowToolUseScene;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)task:(id)a0 didEndWithResult:(long long)a1 error:(id)a2;
- (void)removePublishTask:(id)a0;
- (void)onTopicFavorited:(id /* block */)a0 paramContext:(id)a1;
- (void)onTopicClickPublish:(id)a0;
- (void)onFavoriteButtonShow:(id)a0;
- (void)onPublishButtonShow:(id)a0;
- (id)topicTitelStringForText:(id)a0;
- (id)joinNumberStringForNumber:(long long)a0;
- (id)publishButtonTextForConfigModel:(id)a0 withAwemeModel:(id)a1 buttonStyleConfigParams:(id)a2;
- (BOOL)shouldUseConfigModelCameraSetting:(id)a0 withAwemeModel:(id)a1;
- (void)onFavoriteButtonClick:(id)a0 isFavorited:(BOOL)a1;
- (void)onRequestFavorite:(id /* block */)a0 paramContext:(id)a1;
- (void)onFavorited:(id)a0;
- (void)onCancelFavorited;
- (void)onFavoriteChallenge:(id)a0 isFavorited:(BOOL)a1;
- (void)trackOnClickLook:(id)a0;
- (void)onPublish:(id)a0;
- (void)onPublishButtonClick:(id)a0;
- (id)logExtras:(id)a0 buttonType:(id)a1 btm:(id)a2;
- (id)hashtagNameFrom:(id)a0;
- (id)hashtagIDFrom:(id)a0;
- (id)enterMethodFrom:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
