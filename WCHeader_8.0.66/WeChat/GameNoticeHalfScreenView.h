@class GameNoticeAdditionalInfoView, FixTitleColorButton, GameNoticeInfo, NSString, UILabel, MMWebImageView, UIButton;
@protocol GameNoticeHalfScreenViewDelegate;

@interface GameNoticeHalfScreenView : MMPageSheetBaseView <MMPageSheetBottomViewDelegate, GameNoticeAdditionalInfoViewDelegate>

@property (retain, nonatomic) MMWebImageView *infoIcon;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) GameNoticeAdditionalInfoView *additionalView;
@property (retain, nonatomic) FixTitleColorButton *confirmButton;
@property (retain, nonatomic) UIButton *checkButton;
@property (retain, nonatomic) GameNoticeInfo *noticeInfo;
@property (weak, nonatomic) id<GameNoticeHalfScreenViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;
- (void)checkButtonClicked;
- (double)detailViewHeight;
- (id)titleForConfirmButton;
- (void)onConfirmButtonClick;
- (void)pageSheetDidDisappear;
- (void)additionalButtonDidClick;
- (void).cxx_destruct;

@end
