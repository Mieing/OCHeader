@class NSString, WCCardDataCardInfo, WCCardDataCardTPInfo, UIView;
@protocol WCCardDataSource, WCCardDetailPageCodeCellViewDelegate;

@interface WCCardDetailPageCodeCellView : MMUIView {
    WCCardDataCardTPInfo *_cardTpInfo;
    WCCardDataCardInfo *_cardInfo;
    id<WCCardDataSource> _cardDataSource;
    UIView *_codeContainView;
    id<WCCardDetailPageCodeCellViewDelegate> _delegate;
    int _fixPadding;
    NSString *_tipsWording;
    NSString *_reasonWording;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _oldFrame;
    NSString *_buttonWording;
}

@property (retain, nonatomic) NSString *dynamicCode;
@property (retain, nonatomic) NSString *dynamicOfflineCode;
@property (nonatomic) unsigned int offlineCodeStatus;

+ (double)heightForCardSource:(id)a0 viewWidth:(double)a1 offlineCode:(id)a2;

- (id)initWithViewWidth:(double)a0 cardSource:(id)a1 delegate:(id)a2 dynamicCode:(id)a3 offlineCode:(id)a4 offlineCodeStatus:(unsigned int)a5;
- (void)initView;
- (void)setupView;
- (void)doDisableCodeLogic;
- (id)createCodeNumView:(id)a0;
- (id)getBlurCodeView;
- (id)getCodeViewWithCode:(id)a0;
- (id)genDataMatrixWithQrLevel:(id)a0 cardCode:(id)a1;
- (void)refresh:(id)a0;
- (void)updateViewStatus;
- (void)showErrorView;
- (void)refreshCode;
- (void)acceptButtonDidClicked;
- (void)codeViewTapped:(id)a0;
- (void).cxx_destruct;

@end
