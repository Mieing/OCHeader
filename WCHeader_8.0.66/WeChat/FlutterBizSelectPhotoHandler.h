@class NSString, BizImageSelectInfo;

@interface FlutterBizSelectPhotoHandler : NSObject <FlutterBizImagePickViewControllerDelegate>

@property (retain, nonatomic) BizImageSelectInfo *selectInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)handleSelect:(id)a0 limit:(long long)a1 canSendOriginalImage:(BOOL)a2 livePhotoMode:(long long)a3 allowTextCover:(BOOL)a4 textCoverEditScene:(long long)a5 completion:(id /* block */)a6;
- (void)onCancelSelectAssets:(id)a0;
- (void)onFinishSelectAssets:(id)a0 assets:(id)a1;
- (void)onSelectTextCover:(id)a0 info:(id)a1;
- (void).cxx_destruct;

@end
