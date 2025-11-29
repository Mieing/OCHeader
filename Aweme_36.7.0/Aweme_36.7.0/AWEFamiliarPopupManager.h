@class NSString, NSDate, NSObject, AWEFamiliarAlertPopupViewController;
@protocol AWEUserRecommendTableViewModelProtocol;

@interface AWEFamiliarPopupManager : NSObject <AWEFamiliarAlertPopupViewControllerDelegate, AWEFamiliarPopupManagerProtocol>

@property (retain, nonatomic) NSDate *lastestShowDate;
@property (nonatomic) long long errorRetryCount;
@property (retain, nonatomic) NSObject<AWEUserRecommendTableViewModelProtocol> *viewModel;
@property (retain, nonatomic) AWEFamiliarAlertPopupViewController *popupViewController;
@property (nonatomic) BOOL hasShown;
@property (nonatomic) BOOL showedFromAlertManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)alertViewEnterFrom;
+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)sharedInstance;

- (id)alertIDForEvent:(id)a0;
- (long long)alertPriorityForEvent:(id)a0;
- (BOOL)canShowWithContext:(id)a0;
- (void)prepareWithContext:(id)a0 onCompletion:(id /* block */)a1;
- (void)showWithCloseCallback:(id /* block */)a0;
- (long long)negativeCount;
- (void)dismissPopupAlertView;
- (BOOL)isFamiliarPopup:(id)a0;
- (void)saveDate;
- (void)popupViewController:(id)a0 willDismissWithType:(long long)a1;
- (void)popupViewController:(id)a0 didDismissWithType:(long long)a1;
- (void)tabbarDidChangeSelectedIndex:(id)a0;
- (id)negativeBeginTime;
- (void)trackPopupViewWithdraw;
- (id)p_storageKey:(id)a0;
- (void)addNegativeCount;
- (void)clearNegativeCount;
- (void)setNegativeBeginTime:(id)a0;
- (void)p_showPopupAlertViewIfNeeded;
- (BOOL)isPopupAlertAvailable;
- (void)showPopupAlertView;
- (BOOL)isFetchDataAvailable;
- (BOOL)isRootViewInFeed;
- (BOOL)isComformToMappingPage;
- (void)updateShowDate;
- (void)calculateNegativeBehaviorWithDismissType:(long long)a0;
- (BOOL)willShowPopupAlertInFeed;
- (void).cxx_destruct;
- (void)loadDate;
- (id)init;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isShowing;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)fetchDataWithContext:(id)a0 completion:(id /* block */)a1;

@end
