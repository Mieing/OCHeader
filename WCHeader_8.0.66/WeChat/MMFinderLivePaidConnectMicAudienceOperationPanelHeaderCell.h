@class UIImageView, UILabel, UIButton;

@interface MMFinderLivePaidConnectMicAudienceOperationPanelHeaderCell : UITableViewCell

@property (retain, nonatomic) UIImageView *clockImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *descLabel;
@property (retain, nonatomic) UIButton *bidButton;
@property (retain, nonatomic) UIButton *cancelButton;
@property (retain, nonatomic) UILabel *applyAudienceLabel;
@property (retain, nonatomic) UILabel *audiencePriceLabel;
@property (copy, nonatomic) id /* block */ onCancelApplyAction;
@property (copy, nonatomic) id /* block */ onBidAction;

+ (id)reuseId;
+ (double)cellHeightWithMaxWidth:(double)a0;
+ (id)genDescLabel;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)initViews;
- (void)configWithWaitingCount:(unsigned long long)a0 bidEnabled:(BOOL)a1;
- (void)setShowBottomLabels:(BOOL)a0;
- (id)genCommonAudienceDescLabelWithText:(id)a0;
- (void)layoutSubviews;
- (void)onTapCancel;
- (void)onTapBid;
- (void).cxx_destruct;

@end
