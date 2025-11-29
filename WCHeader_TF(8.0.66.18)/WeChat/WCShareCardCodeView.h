@class WCCardDataCardInfo, WCCardDynamicCodeGenerator, WCCardDataCardTPInfo, UILabel, UIButton, UIView, UIScrollView, NSString, MMUILabel, MMTimer, MMUIView, MMUIActivityIndicatorView, UIImageView;
@protocol WCCardDataSource, WCShareCardCodeViewDelegate;

@interface WCShareCardCodeView : MMUIView {
    NSString *_shareUserName;
    WCCardDataCardInfo *_cardInfo;
    WCCardDataCardTPInfo *_cardTPInfo;
    id<WCCardDataSource> _cardDataSource;
    MMTimer *brightTimer;
    double _oldBrightness;
    double _toBrightness;
    struct CGSize { double width; double height; } biggerSize;
    UIView *_animateView;
    UILabel *_codeLabel;
    UIScrollView *_maskView;
    MMUIView *_whiteBgView;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } fromStartRect;
    MMUIActivityIndicatorView *activityIndicator;
    UIView *statusBgView;
    UIImageView *fakeQRCodeImgView;
    MMUILabel *_logoNameLabel;
    MMUILabel *_titleLabel;
    MMUILabel *_showToWaiterTips;
    UIButton *_closeViewBtn;
    UIButton *_directPayBtn;
    UIButton *_notifyCheckBox;
    BOOL _bStatusBarBlack;
    unsigned long long _curStatus;
    BOOL _isLoading;
    MMTimer *_updateDynamicCodeTimer;
}

@property (weak, nonatomic) WCCardDynamicCodeGenerator *dynamicCodeGenerator;
@property (retain, nonatomic) NSString *dynamicCode;
@property (weak, nonatomic) id<WCShareCardCodeViewDelegate> m_delegate;
@property (retain, nonatomic) NSString *typeName;

- (id)initWithCardSourceData:(id)a0 andCodeStartRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 shareUserName:(id)a2 isStatusBarBlack:(BOOL)a3 dynamicCodeGenerator:(id)a4;
- (void)dealloc;
- (void)layoutSubviews;
- (id)getCurrentBrandColor;
- (void)initShadowView;
- (void)initView;
- (void)showWithAnimation;
- (void)showCodeViewWithAnimation;
- (void)makeCheckBoxView;
- (void)closeCodeView;
- (void)showTips:(id)a0;
- (void)showMarkedView;
- (void)showMarkedErrorView;
- (id)getLogoName;
- (void)makeCancelBtn;
- (void)updateViewStatus:(unsigned long long)a0;
- (void)updateCardDatasource:(id)a0;
- (void)setupMemberCardCodeView;
- (void)setupOriginMemberCodeView;
- (void)setupNewMemberCodeView;
- (id)getCodeViewWithCode:(id)a0;
- (BOOL)isMemberCard;
- (void)recoverBrightness:(double)a0;
- (void)graduallySetBrightness:(double)a0;
- (void)timerCheckUpdateBrightness;
- (void)onClickNotifyCheckBoxBtn:(id)a0;
- (void)payAndQrcodeDidClick;
- (void)startDynamicCodeUpdateTimer;
- (void)updateDynamicCode;
- (void)loadDynamicCodeIfNeed;
- (void).cxx_destruct;

@end
