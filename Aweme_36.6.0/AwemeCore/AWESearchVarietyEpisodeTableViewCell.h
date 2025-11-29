@class NSString, UIImageView, UIView, YYLabel;
@protocol AWESearchFilmTVTagViewProtocol;

@interface AWESearchVarietyEpisodeTableViewCell : UITableViewCell <AWESearchVarietyEpisodeTableViewCellProtocol>

@property (retain, nonatomic) YYLabel *titleLabel;
@property (retain, nonatomic) YYLabel *timeLabel;
@property (retain, nonatomic) UIView<AWESearchFilmTVTagViewProtocol> *paymentTag;
@property (retain, nonatomic) UIImageView *newIcon;
@property (retain, nonatomic) UIView *bgView;
@property (nonatomic) BOOL cellMode;
@property (nonatomic) BOOL showPeriod;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)tableCellHeight;

- (void)configureUI;
- (void)configModel:(id)a0;
- (void)updatePaymentStatus:(id)a0;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;

@end
