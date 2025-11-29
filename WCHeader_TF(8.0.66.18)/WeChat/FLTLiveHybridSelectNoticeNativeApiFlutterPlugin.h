@class NSString, UIViewController, NSMutableDictionary;
@protocol FLTLiveHybridSelectNoticeNativeApiFlutterPluginDelegate;

@interface FLTLiveHybridSelectNoticeNativeApiFlutterPlugin : NSObject <MMFinderLiveCreateNoticeViewControllerDelegate, MMFlutterPlugin, LiveCreateNoticeNativeApi, LiveSelectNoticeNativeApi>

@property (weak, nonatomic) UIViewController *viewController;
@property (retain, nonatomic) NSMutableDictionary *noticeCreationItems;
@property (weak, nonatomic) id<FLTLiveHybridSelectNoticeNativeApiFlutterPluginDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onAttachedToViewController:(id)a0;
- (void)onAttachedToEngine:(id)a0;
- (void)onDetachedFromEngine:(id)a0;
- (void)createNoticeTaskID:(id)a0 completion:(id /* block */)a1;
- (void)handleSelectNoticeResultAction:(unsigned long long)a0 selectedNoticeData:(id)a1 error:(id *)a2;
- (void)viewController:(id)a0 didFinishCreateLiveNoticeWithInfo:(id)a1;
- (void)viewControllerDidCancelCreateLiveNotice:(id)a0;
- (void).cxx_destruct;

@end
