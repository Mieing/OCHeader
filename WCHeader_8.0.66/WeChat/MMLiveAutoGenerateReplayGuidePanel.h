@class MMLiveAutoGenerateReplaySettings, NSString, UIImageView, UILabel;
@protocol MMLiveAutoGenerateReplayGuidePanelDelegate;

@interface MMLiveAutoGenerateReplayGuidePanel : MMPageSheetBaseView <MMPageSheetBottomViewDelegate>

@property (retain, nonatomic) MMLiveAutoGenerateReplaySettings *autoGenerateReplaySettings;
@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *descriptionLabel;
@property (weak, nonatomic) id<MMLiveAutoGenerateReplayGuidePanelDelegate> actionDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithAutoGenerateReplaySettings:(id)a0;
- (double)panelDetailViewMaxHeight;
- (void)configPageSheetAndDetailView;
- (void)layoutSubviews;
- (void)onClickPageSheetConfirmButton;
- (void)onClickPageSheetCancelButton;
- (id)titleForPageSheetConfirmButton;
- (id)titleForPageSheetCancelButton;
- (void).cxx_destruct;

@end
