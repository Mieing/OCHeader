@class UIView, ShelfInfo, IESLiveNativeAppShelfCellAnchorTitleLabel, IESLiveNativeAppShelfCellCommonEdgeView, IESLiveNativeAppShelfCellAnchorCouponInfoView, IESLiveNativeAppShelfTradeDataView, UIButton, ShelfCardInfo, IESLiveNativeAppShelfCellCommonButton, IESLiveNativeAppShelfCellAnchorCoverImageView, NSIndexPath;
@protocol IESLiveNativeAppShelfCardCellDelegate;

@interface IESLiveNativeAppShelfCardCell : UITableViewCell

@property (retain, nonatomic) ShelfInfo *shelfInfo;
@property (retain, nonatomic) IESLiveNativeAppShelfCellCommonEdgeView *edgeView;
@property (retain, nonatomic) IESLiveNativeAppShelfCellAnchorTitleLabel *titleLabel;
@property (retain, nonatomic) IESLiveNativeAppShelfCellCommonButton *explainStatusButton;
@property (weak, nonatomic) IESLiveNativeAppShelfCellAnchorCoverImageView *coverImageView;
@property (retain, nonatomic) UIView *reviewContent;
@property (retain, nonatomic) UIButton *reviewingButton;
@property (retain, nonatomic) UIButton *reviewRejectButton;
@property (weak, nonatomic) IESLiveNativeAppShelfCellAnchorCouponInfoView *couponInfoView;
@property (retain, nonatomic) IESLiveNativeAppShelfTradeDataView *tradeDataView;
@property (weak, nonatomic) id<IESLiveNativeAppShelfCardCellDelegate> delegate;
@property (retain, nonatomic) ShelfCardInfo *cardInfo;
@property (nonatomic) BOOL hasCommodity;
@property (retain, nonatomic) NSIndexPath *indexPath;

- (void)didSetAttachingDIContextCallOnce;
- (void)trackBubble:(id)a0 showWithShelfInfo:(id)a1;
- (void)explainStatusButtonDidClick:(id)a0;
- (id)explainBubbleShowedStorageKey;
- (void)showExplainBubble;
- (void)reviewRejectButtonDidClick;
- (void)updateWithShelfInfo:(id)a0 cardInfo:(id)a1;
- (void)updateWithCardTradeArray:(id)a0 viewHeight:(double)a1;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)setUpUI;

@end
