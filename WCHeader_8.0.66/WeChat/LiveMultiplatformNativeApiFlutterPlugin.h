@class NSString, UIViewController, LiveMultiplatformFlutterApi;

@interface LiveMultiplatformNativeApiFlutterPlugin : NSObject <MMFlutterPlugin, LiveMultiplatformNativeApi>

@property (weak, nonatomic) UIViewController *viewController;
@property (retain, nonatomic) LiveMultiplatformFlutterApi *flutterApi;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onAttachedToViewController:(id)a0;
- (void)onAttachedToEngine:(id)a0;
- (void)onDetachedFromEngine:(id)a0;
- (void)openNativePageParams:(id)a0 error:(id *)a1;
- (void)openLiveRoom:(id)a0 commentScene:(unsigned long long)a1 index:(unsigned long long)a2 chnlExtra:(id)a3;
- (void)openProfile:(id)a0 dataItem:(id)a1 commentScene:(unsigned long long)a2;
- (void)getSelfFinderUsernameWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;

@end
