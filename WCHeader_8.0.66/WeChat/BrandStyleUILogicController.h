@class NSMutableDictionary, CContact;
@protocol BrandStyleUILogicControllerDelegate;

@interface BrandStyleUILogicController : MMObject {
    CContact *m_contact;
    id<BrandStyleUILogicControllerDelegate> m_delegate;
}

@property (retain, nonatomic) NSMutableDictionary *extInfo;

- (id)initWithContact:(id)a0 WithDelegate:(id)a1;
- (void)updateIfViewWillInit;
- (void)updateIfViewDidInit;
- (void)updateIfViewWillAppear;
- (void)updateIfViewDidAppear;
- (void)updateIfViewWillDisappear;
- (void)updateIfCreateToolView:(id)a0 inputPresenter:(id)a1;
- (void)startReceiveMsg:(id)a0;
- (BOOL)isNoNeedShowNormalToolView;
- (void)addSessionToTop;
- (void)adjustToolViewComponent;
- (BOOL)getLastMenuMode;
- (void)setLastMenuMode:(BOOL)a0;
- (double)getCustomizedAreaWidth;
- (BOOL)shouldHideOrginInputToolView;
- (BOOL)shouldSaveAchievedImageMd5;
- (void)processImageDidCancel;
- (void)processImageDidFinish;
- (void)saveAchievedImageMd5:(id)a0;
- (void)processLocationDidFinish;
- (void)addMsgForUsr:(id)a0;
- (void)removeCustomToolView;
- (id)getBrandContact;
- (id)getBrandLogicController;
- (id)getBrandViewController;
- (id)getWholeView;
- (id)getOutterToolView;
- (id)getOutterInputPresenter;
- (id)getInnerToolView;
- (void).cxx_destruct;

@end
