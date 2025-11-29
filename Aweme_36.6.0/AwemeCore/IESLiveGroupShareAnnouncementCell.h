@class UIStackView, UIImageView, UILabel, UIView;

@interface IESLiveGroupShareAnnouncementCell : UITableViewCell

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UILabel *dateLabel;
@property (retain, nonatomic) UIImageView *selectImageView;
@property (retain, nonatomic) UIStackView *contentContainerView;
@property (retain, nonatomic) UILabel *contentLabel;
@property (retain, nonatomic) UIView *contentDivideLine;
@property (retain, nonatomic) UILabel *countLabel;

- (void)updateUIWithModel:(id)a0;
- (void)updateContentContainerWithModel:(id)a0;
- (void)updateSelectImageWithModel:(id)a0;
- (void)updateDateLabelWithModel:(id)a0;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)setupUI;
- (void)setupLayout;

@end
