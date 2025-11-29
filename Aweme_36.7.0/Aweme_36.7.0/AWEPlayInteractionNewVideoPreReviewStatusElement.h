@class NSString, AWEAntiAddictedNoticeBarView;

@interface AWEPlayInteractionNewVideoPreReviewStatusElement : AWEPlayInteractionNewBottomElement

@property (retain, nonatomic) AWEAntiAddictedNoticeBarView *antiAddictedNoticeBarView;
@property (copy, nonatomic) NSString *tips;

- (void)initializeElement;
- (void)viewController_willDisplay;
- (unsigned long long)elementVisibleType;
- (id)activateInfoWithData:(id)a0;
- (void)layoutElementView;
- (void)viewDidDisposed;
- (BOOL)shouldAppearWithData:(id)a0;
- (void)updateAntiAddictedNoticeBarView;
- (void)trackPlaypageItemAuditBarIsDisplay:(BOOL)a0;
- (void).cxx_destruct;
- (void)reset;
- (void)viewDidLoad;
- (id)identifier;

@end
