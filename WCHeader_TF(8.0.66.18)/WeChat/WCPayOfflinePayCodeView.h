@class NSString, QBarCodeView, UIView, MMUIView, MMUILabel;
@protocol WCPayOfflinePayCodeViewDelegate;

@interface WCPayOfflinePayCodeView : MMUIView {
    double _secondsToRefresh;
    BOOL _inAnimation;
}

@property (retain, nonatomic) QBarCodeView *imageBarView;
@property (retain, nonatomic) MMUILabel *barCodeLabel;
@property (retain, nonatomic) UIView *barCodeBackGroundView;
@property (retain, nonatomic) MMUILabel *tipsLabel;
@property (retain, nonatomic) MMUIView *noticeContentView;
@property (retain, nonatomic) MMUIView *noticePreConfirmView;
@property (retain, nonatomic) QBarCodeView *imageQRView;
@property (retain, nonatomic) UIView *qRCodeBackGroundView;
@property (retain, nonatomic) UIView *offlineMaskView;
@property (nonatomic) int payCodeStyle;
@property (nonatomic) BOOL enable;
@property (copy, nonatomic) NSString *barCodeString;
@property (copy, nonatomic) NSString *qrCodeString;
@property (weak, nonatomic) id<WCPayOfflinePayCodeViewDelegate> delegate;

+ (double)qrCodeWidth;
+ (double)barCodeWidth;
+ (double)height;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)commonInit;
- (void)adjustViews;
- (void)setAlpha:(double)a0;
- (void)dealloc;
- (void)resetViews;
- (void)startAutoRefreshCounting;
- (void)startAutoRefreshCountingAfterSeconds:(unsigned long long)a0;
- (void)cancelAutoRefreshCounting;
- (void)updateAutoRefreshCount;
- (void)updateCodeImageWithPayCodeStyle:(int)a0;
- (void)updateCodeImage;
- (void)exitFullScreenIfNeedAnimation:(BOOL)a0;
- (void)codeViewTapped:(id)a0;
- (void)exitFullScreenWithView:(id)a0 animation:(BOOL)a1;
- (void)barcodeAnimationBegin;
- (void)barcodeAnimationEnd;
- (void)genNoticePreConfirmView;
- (void)preconfirmTipsViewBtnPress;
- (void)removePreConfirmTipsViewIfNeed;
- (BOOL)isBarcodeViewFullScreen;
- (void)showBarCodeNoticeViewWhenUserTakeScreenshot;
- (void).cxx_destruct;

@end
