@class NSString, UIViewController;

@interface BizAudioFlutterPlugin : NSObject <MMFlutterPlugin, BizAudioApi>

@property (weak, nonatomic) UIViewController *attachedViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onAttachedToEngine:(id)a0;
- (void)onAttachedToViewController:(id)a0;
- (void)onDetachedToViewController;
- (void)openUrlArticleInfo:(id)a0 error:(id *)a1;
- (void)addToPreloadUrl:(id)a0 itemShowType:(long long)a1 openScene:(long long)a2 brandUserName:(id)a3 error:(id *)a4;
- (void)addToStarListenItemData:(id)a0 cancel:(BOOL)a1 snapInfo:(id)a2 completion:(id /* block */)a3;
- (void)removeStarListenItemData:(id)a0 completion:(id /* block */)a1;
- (void)containsInStarListenId:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;

@end
