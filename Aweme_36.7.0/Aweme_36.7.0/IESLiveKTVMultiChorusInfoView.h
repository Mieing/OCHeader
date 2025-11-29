@class NSArray, UILabel, IESLiveKTVMultiChorusInfoViewConfig;

@interface IESLiveKTVMultiChorusInfoView : UIView

@property (retain, nonatomic) IESLiveKTVMultiChorusInfoViewConfig *config;
@property (copy, nonatomic) NSArray *avatarImageViews;
@property (retain, nonatomic) UILabel *totalLabel;
@property (retain, nonatomic) UILabel *ellipsisLabel;

- (void)updateWithAvatars:(id)a0;
- (void).cxx_destruct;
- (id)initWithConfig:(id)a0;
- (void)setupSubviews;

@end
