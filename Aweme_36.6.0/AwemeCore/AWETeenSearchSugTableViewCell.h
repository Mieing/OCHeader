@class NSString, UIImageView, AWETeenSearchSugWordModel, UILabel, BDImageView;
@protocol AWETeenSearchSugTableViewCellDelegate;

@interface AWETeenSearchSugTableViewCell : UITableViewCell

@property (retain, nonatomic) UIImageView *searchImage;
@property (retain, nonatomic) UILabel *sugWordLabel;
@property (retain, nonatomic) BDImageView *tagImageView;
@property (retain, nonatomic) UIImageView *complementImage;
@property (retain, nonatomic) AWETeenSearchSugWordModel *model;
@property (copy, nonatomic) NSString *sugType;
@property (weak, nonatomic) id<AWETeenSearchSugTableViewCellDelegate> delegate;

- (void)configWithModel:(id)a0;
- (void)didClickedComplementView:(id)a0;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;

@end
