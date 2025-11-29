@class UIButton, NSMutableArray;
@protocol BDXContainerProtocol;

@interface AnnieLiveBizButtons : NSObject

@property (weak, nonatomic) id<BDXContainerProtocol> container;
@property (retain, nonatomic) NSMutableArray *wkObserverKeys;
@property (retain, nonatomic) UIButton *backBtn;
@property (retain, nonatomic) UIButton *shareBtn;
@property (retain, nonatomic) UIButton *closeBtn;
@property (retain, nonatomic) UIButton *halfScreenCloseButon;

- (void)setupPageBackBtnWithParams:(id)a0 container:(id)a1;
- (void)setupPageCloseBtnWithParams:(id)a0 container:(id)a1;
- (void)setupPageShareBtnWithParams:(id)a0 container:(id)a1;
- (void)setupPopupBackBtnWithParams:(id)a0 container:(id)a1;
- (void)setupPopupCloseBtnWithParams:(id)a0 container:(id)a1;
- (void)setupPopupShareBtnWithParams:(id)a0 container:(id)a1;
- (void)addUpToFullScreenCloseBtnWithSchemeParam:(id)a0 container:(id)a1;
- (void)addWKObserverWithContainer:(id)a0;
- (id)AnnieLiveBizButtonWithBackGroundImage:(id)a0 accessibilityLable:(id)a1;
- (void)clickPageBackBtn:(id)a0;
- (double)topBtnMarginWithPageVC:(id)a0;
- (BOOL)supportNativeShareInfo:(id)a0;
- (void)clickPageShareBtn:(id)a0;
- (void)clickPageCloseBtn:(id)a0;
- (id)getPuzzleContextWithSchemaParam:(id)a0;
- (void)shareWithHybridView:(id)a0 context:(id)a1;
- (void)backBtnPopupClicked:(id)a0;
- (void)updateBackBtnWithPopupVC:(id)a0;
- (void)shareBtnPopupClicked:(id)a0;
- (void)closeBtnPopupClicked:(id)a0;
- (void)shareWithTargetURL:(id)a0 title:(id)a1 content:(id)a2 imageURL:(id)a3 context:(id)a4;
- (void)getShareInfoOfWebView:(id)a0 complete:(id /* block */)a1;
- (void)updateUpHalfScreenCloseBtnIcon:(id)a0 container:(id)a1;
- (void)halfCloseBtnClicked;
- (id)getHalfScreenCloseBtnImage:(id)a0 container:(id)a1;
- (void)setupWithContainer:(id)a0;
- (void)didLoadFaildedWithContainer:(id)a0;
- (void)shareWithShareInfo:(id)a0 context:(id)a1;
- (void)container:(id)a0 updateHalfScreenButtonsTopOffsetWithContainerOnTop:(BOOL)a1;
- (void)removeWKObserverWithContainer:(id)a0;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;

@end
