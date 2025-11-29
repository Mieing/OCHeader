@class UILabel, UIImageView, GetProfileInfoResponse_RelievedBuyInfo;

@interface WAProfileBuyServiceCell : UITableViewCell

@property (retain, nonatomic) UILabel *titleLabel;
@property (nonatomic) UIImageView *arrowView;
@property (retain, nonatomic) GetProfileInfoResponse_RelievedBuyInfo *infoModel;

+ (double)viewHeightByDataModel:(id)a0;

- (void)setViewDataModel:(id)a0;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void).cxx_destruct;

@end
