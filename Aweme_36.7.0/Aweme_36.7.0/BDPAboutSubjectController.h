@class BDPAboutSubjectView, NSString, BDPAboutInfoModel, UIScrollView, UIView;

@interface BDPAboutSubjectController : BDPBusinessXScreenViewController <BDPPrivacyRegulationContentViewDelegate, BDPAboutSubjectViewDelegate>

@property (weak, nonatomic) BDPAboutInfoModel *aboutModel;
@property (retain, nonatomic) UIView *bgView;
@property (retain, nonatomic) UIScrollView *scrollView;
@property (retain, nonatomic) BDPAboutSubjectView *subjectView;
@property (nonatomic) BOOL preload;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)bootstrapLaunch;
+ (void)getAboutInfoWithUniqueID:(id)a0 completion:(id /* block */)a1;

- (id)initWithModel:(id)a0 uniqueID:(id)a1;
- (BOOL)XScreenWindowShouldShowCustomButton:(id)a0;
- (BOOL)XScreenWindowShouldShowLeftCustomButton:(id)a0;
- (void)onClickReport:(id)a0;
- (void)onClickPrivacyProtocol:(id)a0;
- (void)backButtonClickClose;
- (void)clickDocketDescLabel:(id)a0;
- (void)clickMerchantDescLabel:(id)a0;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)updateNavigationTitle;

@end
