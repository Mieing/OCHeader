@class NSString, UIImageView, AWEGeneralSearchModel, UILabel, UIView;
@protocol AWEFeedFeedbackEntranceProtocol, AWEModernFeedCellContext;

@interface AWEGeneralNormalCellController : UIViewController <AWEModernFeedCellControllerProtocol>

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *contentLabel;
@property (retain, nonatomic) UILabel *descriptionLabel;
@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UIView<AWEFeedFeedbackEntranceProtocol> *feedbackButton;
@property (retain, nonatomic) AWEGeneralSearchModel *model;
@property (copy, nonatomic) id /* block */ callback;
@property (retain, nonatomic) id<AWEModernFeedCellContext> context;
@property (retain, nonatomic) Class cardClass;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)modernFeedCellPreferedHeightForModel:(id)a0 width:(double)a1;
+ (void)__awe__codeRunnerRun___LINE__;

- (void)resetContext:(id)a0;
- (void)trackSearchResultClick;
- (void)registerCallback:(id /* block */)a0 forReachingPlaybackTime:(double)a1;
- (void)trackSearchResultShow;
- (id)tapNotTriggerArea;
- (void)normalCardDidTap;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (void)viewDidLoad;
- (void)setupUI;
- (void)updateWithModel:(id)a0;
- (id)fetchContext;

@end
