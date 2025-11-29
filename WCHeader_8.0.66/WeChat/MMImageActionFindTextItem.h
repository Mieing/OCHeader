@class WCImageTranslateLogic, NSString, OCRTransHalfScreenViewController, UIScrollView, UIView;

@interface MMImageActionFindTextItem : MMImageActionSheetItem <OCRTransHalfScreenViewControllerDelegate>

@property (retain, nonatomic) OCRTransHalfScreenViewController *ocrHalfScreenViewCtrl;
@property (retain, nonatomic) WCImageTranslateLogic *imgTranslateLogic;
@property (nonatomic) unsigned int enterScene;
@property (nonatomic) unsigned int svrScene;
@property (retain, nonatomic) NSString *senderUserName;
@property (weak, nonatomic) UIScrollView *animationScrollView;
@property (weak, nonatomic) UIView *disableInteractWhenTranslateAnimatingView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (BOOL)isHidden;
- (void)handleWithImage;
- (void)onImageActionSheetDidChangeImage;
- (void)onImageDetectUploadFinish:(unsigned int)a0 context:(id)a1 detectMediaInfo:(id)a2;
- (void)onImageDetectOCRFinish:(unsigned int)a0 jsonStr:(id)a1 reqKey:(id)a2 ocrResultType:(long long)a3;
- (void)showOCRHalfScreenViewCtrl;
- (void).cxx_destruct;

@end
