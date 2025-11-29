@class UIImageView, UILabel;

@interface IESLiveManagedUserListNewCell : IESLiveAdminNewCell

@property (retain, nonatomic) UIImageView *fansImage;
@property (retain, nonatomic) UILabel *operatorLabel;
@property (retain, nonatomic) UILabel *operateTimeLabel;
@property (nonatomic) unsigned long long type;

- (void)setupType:(unsigned long long)a0;
- (void)configWithManagerModel:(id)a0;
- (void)_setupSubViews;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)layoutSubviews;

@end
