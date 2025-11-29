@class AWEListenFeedContentModel, UIImageView, UILabel, AWEListenFeedContext;

@interface AWEListenFeedContentFilterView : UIView

@property (retain, nonatomic) UIImageView *coverImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subTitleLabel;
@property (retain, nonatomic) AWEListenFeedContentModel *model;
@property (retain, nonatomic) AWEListenFeedContext *context;
@property (nonatomic) long long count;

- (void)updateByModel:(id)a0;
- (void)trackListenModelClick;
- (void)enterSecondPage;
- (void).cxx_destruct;
- (id)init;
- (void)tapAction;
- (void)configLayout;
- (void)initUI;

@end
