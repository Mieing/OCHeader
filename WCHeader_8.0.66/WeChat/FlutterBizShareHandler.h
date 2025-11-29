@class MMScrollActionSheet, NSMutableDictionary, ForwardMessageLogicController, MMFlutterViewController, NSString;
@protocol BrandTLViewControllerProtocol;

@interface FlutterBizShareHandler : NSObject <ForwardMessageLogicDelegate, WCCommitViewResultDelegate, RecentForwardScrollViewDelegate, MMScrollActionSheetDelegate>

@property (retain, nonatomic) ForwardMessageLogicController *forwardMsgLogic;
@property (retain, nonatomic) MMScrollActionSheet *shareActionSheet;
@property (retain, nonatomic) NSMutableDictionary *downloadingImgInfo;
@property (weak, nonatomic) MMFlutterViewController<BrandTLViewControllerProtocol> *viewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)shareToContact:(id)a0 targetContact:(id)a1;
- (void)shareToTimeline:(id)a0;
- (void)showShareMenuInfo:(id)a0 completion:(id /* block */)a1;
- (void)shareWithAppMsg:(id)a0 targetContact:(id)a1;
- (void)shareWithImage:(id)a0 targetContact:(id)a1;
- (void)shareAppMsgToTimeline:(id)a0;
- (void)shareImageToTimeline:(id)a0;
- (void)saveImage2Local:(id)a0;
- (id)getCurrentViewController;
- (void)OnForwardMessageSend:(id)a0;
- (void)OnForwardMessageCancel:(id)a0;
- (void)OnForwardMessageException:(id)a0;
- (void)clickRFItemCallBack:(id)a0;
- (void)scrollActionSheet:(id)a0 didSelecteItem:(id)a1;
- (void)OnHttpGetFinish:(id)a0 response:(id)a1 ErrNo:(int)a2 isWebp:(BOOL)a3;
- (id)genKeyForUrl:(id)a0;
- (id)imageWithData:(id)a0;
- (id)tryGetResource:(id)a0;
- (void).cxx_destruct;

@end
