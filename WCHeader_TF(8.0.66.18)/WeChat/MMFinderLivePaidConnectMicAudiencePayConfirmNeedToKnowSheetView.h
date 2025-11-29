@class UILabel, UIButton;

@interface MMFinderLivePaidConnectMicAudiencePayConfirmNeedToKnowSheetView : MMPageSheetBaseView

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *contentLabel;
@property (retain, nonatomic) UIButton *confirmButton;

- (id)init;
- (void)initViews;
- (void)setupPageSheetConfig;
- (void)layoutSubviews;
- (void)onConfirm;
- (void).cxx_destruct;

@end
