@class NSMutableDictionary, UIView, MMWebImageView, MMUILabel;
@protocol WCAccountRegByOldPhoneViewControllerDelegate;

@interface WCAccountRegByOldPhoneViewController : WCAccountBaseViewController {
    id<WCAccountRegByOldPhoneViewControllerDelegate> m_delegate;
}

@property (retain, nonatomic) MMWebImageView *headImageView;
@property (retain, nonatomic) MMUILabel *nicknameLabel;
@property (retain, nonatomic) MMUILabel *contentLabel;
@property (retain, nonatomic) UIView *mItemsView;
@property (nonatomic) BOOL hasNickname;
@property (nonatomic) BOOL hasUser;
@property (retain, nonatomic) NSMutableDictionary *userInfo;

- (BOOL)useSheetView;
- (BOOL)useRedesignStyle;
- (void)viewDidLoad;
- (void)initData;
- (void)registerYReportSdk;
- (void)viewDidLayoutSubviews;
- (void)setDelegate:(id)a0;
- (void)initNavigationBar;
- (void)initView;
- (void).cxx_destruct;

@end
