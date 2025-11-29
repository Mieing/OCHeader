@class AWEIMShareModel, NSString, UIImageView, UILabel, UIView, UIButton;
@protocol IESIMHalfScreenCurrentOtherGroupTableViewCellDelegate;

@interface IESIMHalfScreenCurrentOtherGroupTableViewCell : UITableViewCell

@property (retain, nonatomic) UIImageView *avatarImageView;
@property (retain, nonatomic) UIView *nonButtonView;
@property (retain, nonatomic) UILabel *nameLabel;
@property (retain, nonatomic) UILabel *memberCountLabel;
@property (retain, nonatomic) UIView *onlineDotView;
@property (retain, nonatomic) UIButton *rightButton;
@property (copy, nonatomic) NSString *uniqueFlag;
@property (retain, nonatomic) AWEIMShareModel *shareModel;
@property (copy, nonatomic) NSString *pageIdentifier;
@property (weak, nonatomic) id<IESIMHalfScreenCurrentOtherGroupTableViewCellDelegate> delegate;

+ (id)identifier;

- (void)configWithShareModel:(id)a0;
- (void)p_fetchImageRequestOptionWithavatarURL:(id)a0;
- (void)p_updateActiveStatusWithShareModel:(id)a0;
- (void)p_didClickRightButton;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;

@end
