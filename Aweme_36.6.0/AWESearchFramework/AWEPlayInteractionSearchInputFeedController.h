@class CAGradientLayer, NSString, UIView, UIButton;

@interface AWEPlayInteractionSearchInputFeedController : AWEPlayInteractionNewBaseController

@property (retain, nonatomic) UIButton *commentButton;
@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) UIView *topView;
@property (retain, nonatomic) CAGradientLayer *topLayer;
@property (retain, nonatomic) CAGradientLayer *bottomLayer;
@property (retain, nonatomic) NSString *schema;
@property (retain, nonatomic) NSString *searchKeyWord;

- (void)setHide:(BOOL)a0;
- (BOOL)showInputView;
- (void)updateAllSubViews;
- (void)removeAllSubViews;
- (BOOL)isPersonalHomepage;
- (void)layoutButton;
- (void)searchAIGCButtonClick;
- (void)searchAIGCEntranceShowEvent;
- (void)searchAIGCEntranceClickEvent;
- (BOOL)isMessageCurrentUser;
- (void)updateAllSubViewsHiddenStatus:(BOOL)a0;
- (void)layoutAllSubviews;
- (void)layoutTopView;
- (void)layoutBottomView;
- (long long)fetchButtonOriginY;
- (void)launchAIPage:(id)a0;
- (struct CGSize { double x0; double x1; })fetchBtnSize;
- (void).cxx_destruct;
- (void)setData:(id)a0;
- (void)viewDidLayoutSubviews;
- (id)init;
- (void)reset;
- (void)willDisplay;

@end
