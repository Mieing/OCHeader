@class NSString, MMFlutterViewController, FlutterBizShareHandler;
@protocol BrandTLViewControllerProtocol;

@interface FlutterBizMediaPlugin : NSObject <MMFlutterPlugin, BizMediaApi>

@property (weak, nonatomic) MMFlutterViewController<BrandTLViewControllerProtocol> *viewController;
@property (retain, nonatomic) FlutterBizShareHandler *flutterBizShareHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)onAttachedToEngine:(id)a0;
- (void)selectPhotoLimit:(long long)a0 canSendOriginalImage:(BOOL)a1 supportLivePhoto:(BOOL)a2 scene:(long long)a3 completion:(id /* block */)a4;
- (void)uploadCommentPicReq:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;

@end
