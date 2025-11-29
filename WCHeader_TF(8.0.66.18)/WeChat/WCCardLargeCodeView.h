@class NSString, WCCardDataCardInfo, WCCardDataCardTPInfo, UIView;
@protocol WCCardLargeCodeViewDelegate, WCCardDataSource;

@interface WCCardLargeCodeView : MMUIView <IWCCardLargeCodeExt> {
    WCCardDataCardTPInfo *_cardTpInfo;
    WCCardDataCardInfo *_cardInfo;
    id<WCCardDataSource> _cardDataSource;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _originRect;
    BOOL _animating;
    BOOL _isOnShow;
    UIView *_codeContainView;
}

@property (retain, nonatomic) NSString *dynamicCode;
@property (retain, nonatomic) NSString *dynamicOfflineCode;
@property (nonatomic) unsigned int offlineCodeStatus;
@property (weak, nonatomic) id<WCCardLargeCodeViewDelegate> m_delegte;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithCodeRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 cardSource:(id)a1 dynamicCode:(id)a2 offlineCode:(id)a3 offlineCodeStatus:(unsigned int)a4;
- (void)willChangeToSplitMode;
- (void)updateLargeCodeView:(id)a0 dynamicCode:(id)a1 offlineCode:(id)a2 offlineCodeStatus:(unsigned int)a3;
- (void)initView;
- (void)setupViewWithAnimation:(BOOL)a0;
- (id)getBlurCodeView;
- (id)getCodeViewWithCode:(id)a0;
- (void)refresh:(id)a0;
- (void)updateViewStatus;
- (void)dealloc;
- (void)viewTapped:(id)a0;
- (id)createCodeNumView:(id)a0;
- (void)closeCodeView;
- (id)genDataMatrixWithQrLevel:(id)a0 cardCode:(id)a1;
- (void)onCloseView;
- (void).cxx_destruct;

@end
