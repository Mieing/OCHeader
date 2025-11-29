@class AWEAwemeModel, DUXBaseTableView, UIView, NSString, UIImageView, UIButton, UIVisualEffectView, UILabel;

@interface AWEFeedLLMRecommendSurveyView : UIView <UITableViewDelegate, UITableViewDataSource>

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIView *surveyInfoContainerView;
@property (retain, nonatomic) UIVisualEffectView *blurView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIButton *closeButton;
@property (retain, nonatomic) DUXBaseTableView *optionsTableView;
@property (retain, nonatomic) AWEAwemeModel *model;
@property (nonatomic) long long surveyFrom;
@property (nonatomic) BOOL enableSelectedStyle;
@property (retain, nonatomic) UILabel *subTitleLabel;
@property (retain, nonatomic) UIImageView *redEnvelopIconImageView;
@property (copy, nonatomic) id /* block */ closeButtonTappedBlock;
@property (copy, nonatomic) id /* block */ optionCellTappedBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)configWithAwemeModel:(id)a0;
- (long long)optionCountWithAwemeModel:(id)a0;
- (id)surveyTitleWithAwemeModel:(id)a0;
- (id)optionLongestTitleWithAwemeModel:(id)a0;
- (id)optionTitleWithIndex:(long long)a0;
- (void)setupUGUI;
- (struct CGSize { double x0; double x1; })closeButtonImageSize;
- (BOOL)optionSelectedStatusWithIndex:(long long)a0;
- (void)updateOptionSelectedStatusWithCell:(id)a0 index:(long long)a1;
- (void).cxx_destruct;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (id)titleLabelFont;
- (void)setupUI;
- (void)closeButtonTapped:(id)a0;

@end
