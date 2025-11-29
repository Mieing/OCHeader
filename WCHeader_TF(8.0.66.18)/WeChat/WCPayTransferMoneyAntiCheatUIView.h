@class MMUILabel, WCPayTransferMoneyAntiCheatViewData, WCPayWebImageView, UIButton;
@protocol WCPayTransferMoneyAntiCheatButtonDelegate;

@interface WCPayTransferMoneyAntiCheatUIView : UIView

@property (retain, nonatomic) WCPayTransferMoneyAntiCheatViewData *data;
@property (weak, nonatomic) id<WCPayTransferMoneyAntiCheatButtonDelegate> delegate;
@property (retain, nonatomic) UIButton *contentButton;
@property (retain, nonatomic) MMUILabel *wordingLabel;
@property (retain, nonatomic) WCPayWebImageView *lefticonWebImageView;
@property (retain, nonatomic) WCPayWebImageView *righticonWebImageView;
@property (nonatomic) int buttonCornerRadius;
@property (nonatomic) int lefticonMarginLeft;
@property (nonatomic) int wordingLabelMarginLeft;
@property (nonatomic) int righticonMarginLeft;
@property (nonatomic) int righticonMarginRight;
@property (nonatomic) int lefticonWidth;
@property (nonatomic) int lefticonHeight;
@property (nonatomic) int wordingLabelTestSize;
@property (nonatomic) int righticonWidth;
@property (nonatomic) int righticonHeight;
@property (nonatomic) int wordingLabelMarginVertical;
@property (nonatomic) int antiCheatViewMarginHorizontal;

- (id)initWithNoticeTransferMoney:(id)a0 delegate:(id)a1;
- (id)initWithNoticeUnionTransferMoney:(id)a0 delegate:(id)a1;
- (id)initWithNoticeF2FTransferMoney:(id)a0 delegate:(id)a1;
- (void)setLayoutParams;
- (id)initWithViewData:(id)a0 delegate:(id)a1;
- (void)updateView;
- (void)updateAntiCheatView;
- (void)allocContentButton;
- (void)updateContentButton;
- (void)onContentButtonClick:(id)a0;
- (void)updateLefticon;
- (void)updateWordingLabel;
- (void)updateRighticon;
- (void)adjustView;
- (void).cxx_destruct;

@end
