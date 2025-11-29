@class NSString, MMFinderLiveGenericQrCodeView, FinderLiveShareLiveQRCodeInfo, WCFinderContact;

@interface MMFinderLiveLegacyGenericQrCodeViewController : MMLiveRoundButtonsPosterViewController <MMLivePosterReporting, MMFinderLiveGenericQrCodeViewDelegate>

@property (retain, nonatomic) WCFinderContact *anchorContact;
@property (nonatomic) unsigned int isSpamModPic;
@property (retain, nonatomic) FinderLiveShareLiveQRCodeInfo *qrCodeInfo;
@property (retain, nonatomic) MMFinderLiveGenericQrCodeView *posterView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)fetchDetailsQRCodeInfoWithLiveTaskId:(id)a0 contact:(id)a1 completionBlock:(id /* block */)a2;
- (id)createPosterViews;
- (id)reporter;
- (void)MMImagePickerManager:(id)a0 didFinishPickingImageWithEditImageAttr:(id)a1;
- (void)MMImagePickerManagerDidCancel:(id)a0;
- (void)onCancelButtonInvoked;
- (void)onSaveImageButtonInvoked;
- (void)onShareButtonInvoked;
- (void)onLiveGenericQrCodeViewBackgroundImageChangeRequested:(id)a0;
- (void)setBackgroundImage:(id)a0;
- (void)clearBackgroundImage;
- (void)reportShareQRCodeAction:(unsigned long long)a0;
- (void).cxx_destruct;

@end
