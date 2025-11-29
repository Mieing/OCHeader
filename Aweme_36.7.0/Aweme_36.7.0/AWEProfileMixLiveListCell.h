@class NSDateFormatter, UIImageView, AWEAwemeModel, UILabel;

@interface AWEProfileMixLiveListCell : UITableViewCell

@property (retain, nonatomic) UIImageView *coverImageView;
@property (retain, nonatomic) UILabel *titleLable;
@property (retain, nonatomic) UILabel *watchCountLable;
@property (retain, nonatomic) UILabel *durationLable;
@property (retain, nonatomic) UILabel *dateLable;
@property (retain, nonatomic) AWEAwemeModel *model;
@property (retain, nonatomic) NSDateFormatter *dateFormatter;

- (id)bottomInfoLable;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)setUpUI;

@end
