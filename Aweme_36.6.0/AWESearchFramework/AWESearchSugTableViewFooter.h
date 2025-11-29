@class UIButton, NSString, NSArray;

@interface AWESearchSugTableViewFooter : UITableViewHeaderFooterView

@property (retain, nonatomic) UIButton *feedbackButton;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *gid;
@property (copy, nonatomic) NSString *logid;
@property (copy, nonatomic) NSString *query;
@property (copy, nonatomic) NSArray *recomWords;
@property (copy, nonatomic) id /* block */ feedbackPanelShowBlock;

+ (id)identifier;

- (void)configureUI;
- (void)feedbackButtonClicked;
- (void)trackFeedbackEntranceClick;
- (void).cxx_destruct;
- (id)initWithReuseIdentifier:(id)a0;

@end
