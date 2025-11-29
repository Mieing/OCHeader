@class NSString, WCCardPkgBackView, WCCardChoosePeopleLabelView, WCCardChooseEmptyView, UIButton, WeToast, NSMutableArray, WCCardAcceptCardListInfo;
@protocol WCCardBatchImportViewControllerDelegate;

@interface WCCardBatchImportViewController : MMUIViewController <WCCardPkgBackViewDelegate, IWCCardPkgExt, IWCShareCardPkgExt> {
    id<WCCardBatchImportViewControllerDelegate> _delegate;
    BOOL _isLoading;
    WCCardAcceptCardListInfo *_cardListInfo;
    NSMutableArray *_cardList;
    WCCardChooseEmptyView *_emptyView;
    UIButton *_sureButton;
    unsigned int _genType;
}

@property (retain, nonatomic) WCCardPkgBackView *backview;
@property (nonatomic) BOOL isSelectTagGroup;
@property (retain, nonatomic) NSMutableArray *arrGroupUser;
@property (retain, nonatomic) NSMutableArray *arrBlackUser;
@property (retain, nonatomic) NSMutableArray *arrGroupUserLabelID;
@property (retain, nonatomic) NSMutableArray *arrBlackUserLabelID;
@property (retain, nonatomic) NSString *privateWording;
@property (retain, nonatomic) WCCardChoosePeopleLabelView *peopleLabelView;
@property (retain, nonatomic) WeToast *toastVC;
@property (nonatomic) unsigned int uiScene;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDelegate:(id)a0 cardListInfo:(id)a1;
- (void)viewDidLoad;
- (void)initData;
- (void)initBaseUI;
- (void)initEmptyView;
- (void)initBackView;
- (void)initBottomPeopleView;
- (void)viewDidLayoutSubviews;
- (void)viewDidBePoped:(BOOL)a0;
- (void)viewDidBeDismissed:(BOOL)a0;
- (BOOL)useTransparentNavibar;
- (void)showEmptyView;
- (void)showBackView;
- (void)showPeopleLabelView;
- (void)onShareCard:(id)a0 TpID:(id)a1 andCardInfo:(id)a2;
- (void)onGetBulkInfo:(id)a0 errCode:(int)a1;
- (void)onImportBulkCard:(id)a0 errCode:(int)a1;
- (void)performDismiss;
- (void)onShareSelectedCardList;
- (void)onImportSelectedCardList;
- (void)onCancel;
- (void)onPop;
- (void)setCardWhoCanSee;
- (void)stopLoadingWithOKText:(id)a0;
- (void)stopLoadingWithFailText:(id)a0;
- (double)wcCardPkgBackViewMaxHeight;
- (void)wcCardSureButtonDidSelected;
- (void)wcIsHaveAvailabledCard:(BOOL)a0;
- (id)sortByGuideSameWithCardList:(id)a0;
- (void)cardDataList:(id)a0 tpCardDataList:(id)a1;
- (void).cxx_destruct;

@end
