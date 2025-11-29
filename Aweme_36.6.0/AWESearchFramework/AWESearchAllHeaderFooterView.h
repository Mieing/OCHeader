@class NSString, UIImageView, UIView, MASConstraint, UILabel;
@protocol AWEFeedFeedbackEntranceProtocol;

@interface AWESearchAllHeaderFooterView : UIView

@property (retain, nonatomic) UIImageView *arrowImageView;
@property (retain, nonatomic) UIImageView *arrowRightImageView;
@property (nonatomic) unsigned long long type;
@property (nonatomic) unsigned long long viewDisplayType;
@property (copy, nonatomic) NSString *preferTitle;
@property (retain, nonatomic) NSString *liveQuery;
@property (retain, nonatomic) MASConstraint *feedbackRightToEdgeConstraint;
@property (retain, nonatomic) MASConstraint *feedbackRightToArrowConstraint;
@property (retain, nonatomic) UIView *titleViewMoreView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIView<AWEFeedFeedbackEntranceProtocol> *feedbackView;
@property (readonly, nonatomic) BOOL showFeedback;
@property (copy, nonatomic) id /* block */ trackFeedbackBtnTappedEventBlock;
@property (nonatomic) BOOL isInNearby;

+ (id)recommendHeaderView;
+ (id)MTGuessWordHeaderView;
+ (id)mtBottomHistoryHeaderView;

- (void)configureUI;
- (void)configureWithSearchType:(unsigned long long)a0 viewType:(unsigned long long)a1 hasMore:(BOOL)a2 feedbackUrl:(id)a3;
- (void)configureWithSearchType:(unsigned long long)a0 viewType:(unsigned long long)a1;
- (void)configureWithSearchType:(unsigned long long)a0 viewType:(unsigned long long)a1 hasMore:(BOOL)a2;
- (void)configureWithSearchType:(unsigned long long)a0 viewType:(unsigned long long)a1 liveQuery:(id)a2 hasMore:(BOOL)a3 feedbackUrl:(id)a4;
- (void)configureWithSearchType:(unsigned long long)a0 viewType:(unsigned long long)a1 liveQuery:(id)a2 hasMore:(BOOL)a3;
- (void)hideTitleViewMoreViewLabel;
- (void)showTitleViewMoreViewLabel;
- (void)configureCustomTypeWithViewType:(unsigned long long)a0 preferTitle:(id)a1 hasMore:(BOOL)a2;
- (void)configureWithSearchType:(unsigned long long)a0 viewType:(unsigned long long)a1 liveQuery:(id)a2;
- (unsigned long long)searchType;
- (void).cxx_destruct;
- (unsigned long long)viewType;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)updateUI;

@end
