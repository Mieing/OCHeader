@class ForwardMessageLogicController, WAWebViewController, NSString;

@interface WAShareMessageProxy : NSObject <ForwardMessageLogicDelegate, IWAShareMessageServiceProtocol>

@property (nonatomic) BOOL isSharing;
@property (retain, nonatomic) ForwardMessageLogicController *forwardLogicController;
@property (copy, nonatomic) id /* block */ completion;
@property (weak, nonatomic) WAWebViewController *webVC;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (void)shareScreenshotWithAssetId:(id)a0 webVC:(id)a1 completion:(id /* block */)a2;

- (id)init;
- (void)shareScreenshotWithAssetId:(id)a0 webVC:(id)a1 completion:(id /* block */)a2;
- (void)OnForwardMessageSend:(id)a0;
- (void)OnForwardMessageCancel:(id)a0;
- (void)OnForwardMessageException:(id)a0;
- (id)getCurrentViewController;
- (void).cxx_destruct;

@end
