@class IESLiveNativeAppShelfCellCommonEdgeView, UIButton, IESLiveAudienceShelfCardExtraInfo, IESLiveNativeAppShelfCellAudienceCouponInfoView, ShelfCardInfo, IESLiveNativeAppShelfCellAudienceCoverImageView, IESLiveNativeAppShelfCellAudienceTitleLabel;

@interface IESLiveAudienceShelfBaseCell : UITableViewCell

@property (retain, nonatomic) IESLiveNativeAppShelfCellCommonEdgeView *edgeView;
@property (retain, nonatomic) IESLiveNativeAppShelfCellAudienceTitleLabel *titleLabel;
@property (retain, nonatomic) IESLiveNativeAppShelfCellAudienceCoverImageView *coverImageView;
@property (retain, nonatomic) IESLiveNativeAppShelfCellAudienceCouponInfoView *couponInfoView;
@property (retain, nonatomic) UIButton *getButton;
@property (retain, nonatomic) IESLiveAudienceShelfCardExtraInfo *cardExtraInfo;
@property (retain, nonatomic) ShelfCardInfo *cardInfo;
@property (nonatomic) BOOL hasCommodity;

- (void)updateShelfModel:(id)a0 cardExtraInfo:(id)a1;
- (id)getProductTraceParams;
- (void)trackCardWithEvent:(id)a0;
- (void)updateLayout;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)setupUI;

@end
