@class WCLiveBlurButton;

@interface MMFinderLiveSongLivingAudienceTableViewCell : MMFinderLiveSongLivingManageTableViewCell

@property (retain, nonatomic) WCLiveBlurButton *giftButton;

+ (id)identifier;

- (void)onTapGesture:(id)a0;
- (void)layoutUI;
- (void)updateMusicNameLabelOrigin;
- (BOOL)shouldHideHeartValueLabel;
- (void)layoutHeartValueLabel;
- (id)createRequestMemDescLabel;
- (id)createFinishButton;
- (id)createSingButton;
- (void).cxx_destruct;

@end
