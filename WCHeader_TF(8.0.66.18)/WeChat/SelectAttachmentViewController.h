@class NSArray, NSString, NSMutableArray, UIViewController;
@protocol SelectAttachmentViewControllerDelegate;

@interface SelectAttachmentViewController : MMUIViewController <MMNewTipsMgrExt, SelectAttachmentViewDelegate, SelectAttachmentViewDataSource, MMTransparentButtonDelegate, IAppDataExt> {
    int _iCurSelection;
    NSMutableArray *_arrAttachementObjectItems;
    long long m_inputToolWeAppStartIndex;
    long long m_inputToolWeAppNotShowIndex;
}

@property (nonatomic) unsigned long long m_appearTime;
@property (weak, nonatomic) id<SelectAttachmentViewControllerDelegate> m_delegate;
@property (retain, nonatomic) NSArray *m_svcApps;
@property (weak, nonatomic) UIViewController *m_containerVC;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)shouldShowQuickReplyPush:(id)a0;
- (void)initData;
- (void)initObjectItem;
- (id)init;
- (void)dealloc;
- (void)updateView;
- (void)resetView;
- (void)viewDidLoad;
- (void)viewWillDisappear:(BOOL)a0;
- (void)changeToInputToolWeAppNotShowPageWithHadAttachmentRedDot:(BOOL)a0;
- (id)getDynamicWeAppItemAtIndex:(unsigned int)a0;
- (double)getSelectAttachmentViewHeight;
- (id)getImageAtIndex:(unsigned int)a0;
- (id)getTextAtIndex:(unsigned int)a0;
- (id)getDescAtIndex:(unsigned int)a0;
- (unsigned long long)numberOfAttachment;
- (unsigned long long)numberOfRows;
- (unsigned long long)numberOfCols;
- (void)OnAttachmentClicked:(id)a0;
- (id)viewForAttachmentAtIndex:(unsigned int)a0;
- (double)getRealSafeBottomInset;
- (void)MMTransparentButton_touchesBegan:(id)a0 withEvent:(id)a1;
- (void)MMTransparentButton_touchesEnded:(id)a0 withEvent:(id)a1;
- (void)OnAppRegisterInfoChanged;
- (void)OnAppIconChanged:(id)a0;
- (void)OnNewAppStatusChanged;
- (void)OnAppSettingChanged;
- (void)adjustViewAndNavBarRect;
- (void)onShowInputToolWeAppArAtPageIndex:(unsigned long long)a0 pageNumber:(unsigned long long)a1;
- (void)onShowAttachmentAtPageIndex:(unsigned long long)a0 pageSize:(unsigned long long)a1;
- (void)setSelectAttachmentViewAccessibility:(BOOL)a0;
- (void)reportHBShow;
- (void)onTipsShowInfoChangeWithPathKey:(id)a0;
- (void).cxx_destruct;

@end
