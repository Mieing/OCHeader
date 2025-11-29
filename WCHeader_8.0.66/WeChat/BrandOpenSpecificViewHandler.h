@class NSString, NSMutableDictionary;
@protocol BrandOpenSpecificViewHandlerDelegate;

@interface BrandOpenSpecificViewHandler : MMObject <VerifyPhoneDelegate> {
    NSMutableDictionary *m_urlToViewController;
    id<BrandOpenSpecificViewHandlerDelegate> _delegate;
}

@property (retain, nonatomic) NSString *nsFromWhichUrl;
@property (retain, nonatomic) NSString *nsPublisherName;
@property (nonatomic) unsigned int uiScene;
@property (retain, nonatomic) NSString *nsExtInfo;
@property (nonatomic) unsigned int uiSponsorID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDelegate:(id)a0;
- (BOOL)canHandleViewJump:(id)a0;
- (void)handleViewJump:(id)a0;
- (void)loadUrlToViewControllerArray;
- (void)handleJumpURL:(id)a0;
- (void)jumpToRecoverDataViewController;
- (void)jumpToNewFriendViewController;
- (void)jumpToAddFriendViewController:(BOOL)a0;
- (void)jumpToSearchBrandViewController;
- (void)jumpToTimeLineViewController;
- (void)jumpToScanViewController;
- (void)jumpToSettingViewController:(id)a0;
- (void)jumpToExposeViewController;
- (void)jumpToCardListViewController;
- (void)jumpToShareCardListViewController;
- (void)jumpToLogViewController;
- (void).cxx_destruct;

@end
