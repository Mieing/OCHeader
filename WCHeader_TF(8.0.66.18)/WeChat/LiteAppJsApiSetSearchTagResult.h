@class WCTopicSearchActionLogic;

@interface LiteAppJsApiSetSearchTagResult : LiteAppJsApi

@property (retain, nonatomic) WCTopicSearchActionLogic *shareActionLogic;

- (void)invokeJsApi:(id)a0 param:(id)a1 isFromView:(BOOL)a2;
- (void)onSetSearchTagResult:(id)a0 chatUserName:(id)a1;
- (void)onEmoticonDownloaded:(id)a0 chatUserName:(id)a1;
- (void)onSelectEmoticonFinished:(id)a0 chatUserName:(id)a1;
- (void)onSelectEmoticonFailed;
- (void).cxx_destruct;

@end
