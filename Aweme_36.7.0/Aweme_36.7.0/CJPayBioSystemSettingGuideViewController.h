@class CJPayButton, CJPayBaseVerifyManager, CJPayResultFigureGuideView, CJPayResultPageGuideInfoModel;

@interface CJPayBioSystemSettingGuideViewController : CJPayHalfPageBaseViewController

@property (retain, nonatomic) CJPayResultPageGuideInfoModel *model;
@property (retain, nonatomic) CJPayResultFigureGuideView *figureGuideView;
@property (retain, nonatomic) CJPayButton *cancelButton;
@property (nonatomic) BOOL isToOpened;
@property (retain, nonatomic) CJPayBaseVerifyManager *verifyManager;
@property (copy, nonatomic) id /* block */ completeBlock;

- (void)p_didBecomeActive;
- (void)p_trackWithEventName:(id)a0 params:(id)a1;
- (id)initWithGuideInfoModel:(id)a0;
- (BOOL)p_isGifImg;
- (void)p_setNavbarTitle;
- (void)p_openFailed;
- (void)p_clickTrack:(id)a0;
- (void)p_confirmButtonClick;
- (void)p_cancelButtonClick;
- (void)p_setupUI;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)dealloc;
- (void)back;

@end
