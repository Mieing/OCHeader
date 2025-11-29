@class NSString, UIView;
@protocol AWEPlayInteractionPOIUGCRateAnchorView;

@interface AWEPlayInteractionNewPOIUGCRateBottomElement : AWEPlayInteractionNewBottomElement <AWEPlayInteractionPOIUGCRateAnchorViewDelegate>

@property (retain, nonatomic) UIView<AWEPlayInteractionPOIUGCRateAnchorView> *rateAnchorView;
@property (copy, nonatomic) NSString *creationId;
@property (copy, nonatomic) NSString *entranceName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEFeedModuleServiceDOUYINSSAdapterClass;

- (void)initializeElement;
- (void)viewController_willDisplay;
- (unsigned long long)elementVisibleType;
- (id)activateInfoWithData:(id)a0;
- (void)layoutElementView;
- (void)viewDidDisposed;
- (id)aAWEFeedModuleServiceDOUYINSSAdapter;
- (BOOL)shouldAppearWithData:(id)a0;
- (void)updatePOIUGCRateAnchorView:(BOOL)a0;
- (BOOL)shouldShowPOIUGCRateAnchorView:(id)a0;
- (BOOL)shouldShowPOIUGCRateAnchorView;
- (id)createRateAnchorView;
- (BOOL)hideCommentBar;
- (BOOL)shouldShowPOIUGCRate:(id)a0;
- (BOOL)shouldUseNewAnchorView;
- (void)p_ugcRateDidClose:(id)a0;
- (void)trackCloseComment;
- (void)setHideCommentBar:(BOOL)a0;
- (void)rateGradeDidSelected:(id)a0;
- (void)didClose:(BOOL)a0;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (id)identifier;
- (void)setupUI;

@end
