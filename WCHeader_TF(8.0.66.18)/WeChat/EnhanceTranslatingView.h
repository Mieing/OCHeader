@class UIView, EnhanceTranslatingResultView, EnhanceTranslatingRectBoardView, EnhanceTranslatingCropImageView, NSString, UIImageView, MMUIButton, OCRTransReport;
@protocol EnhanceTranslatingViewDelegate;

@interface EnhanceTranslatingView : UIImageView <IOCRTransMgrExt> {
    unsigned int _sessionId;
}

@property (nonatomic) BOOL active;
@property (retain, nonatomic) EnhanceTranslatingCropImageView *boardView;
@property (retain, nonatomic) EnhanceTranslatingRectBoardView *rectBoardView;
@property (retain, nonatomic) UIView *contentMaskView;
@property (retain, nonatomic) UIImageView *perspectiveAnimationView;
@property (retain, nonatomic) EnhanceTranslatingResultView *resultView;
@property (retain, nonatomic) MMUIButton *cancelButton;
@property (weak, nonatomic) id<EnhanceTranslatingViewDelegate> delegate;
@property (readonly, nonatomic) UIImageView *contentImageView;
@property (nonatomic) double cancelBtnCenterY;
@property (nonatomic) int scene;
@property (retain, nonatomic) OCRTransReport *report;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)onTapMaskView;
- (void)invalidate;
- (void)reset;
- (void)onTapCancelBtn;
- (void)showDocumentImg:(id)a0 sourceImg:(id)a1 sessionId:(unsigned long long)a2 leftTop:(struct CGPoint { double x0; double x1; })a3 rightTop:(struct CGPoint { double x0; double x1; })a4 rightBottom:(struct CGPoint { double x0; double x1; })a5 leftBottom:(struct CGPoint { double x0; double x1; })a6 boardAnimated:(BOOL)a7;
- (void)doPerspectiveTransform:(id)a0 sourceImg:(id)a1 sessionId:(unsigned long long)a2 imgSize:(struct CGSize { double x0; double x1; })a3 leftTop:(struct CGPoint { double x0; double x1; })a4 rightTop:(struct CGPoint { double x0; double x1; })a5 rightBottom:(struct CGPoint { double x0; double x1; })a6 leftBottom:(struct CGPoint { double x0; double x1; })a7;
- (void)showResultView:(id)a0 backgroundView:(id)a1 boardSize:(struct CGSize { double x0; double x1; })a2;
- (void)autoTranslatingImage:(id)a0;
- (void)onCdnUploadImageDataFinish:(unsigned int)a0 isSuccess:(BOOL)a1;
- (void)onSendTransImageData:(unsigned int)a0 ret:(id)a1 pbCGIWrap:(id)a2;
- (void)cancelTranslate;
- (void)updateBeforeTransitionAnimation;
- (void)updateAfterTransitionAnimation;
- (void).cxx_destruct;

@end
