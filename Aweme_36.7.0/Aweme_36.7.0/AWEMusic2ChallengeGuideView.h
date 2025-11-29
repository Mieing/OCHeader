@class NSString, AWEMusicChallengeGuideModel;

@interface AWEMusic2ChallengeGuideView : AWEBaseGuideView <AWEConfigBaseGuideViewProtocol>

@property (retain, nonatomic) AWEMusicChallengeGuideModel *guideModel;
@property (nonatomic) BOOL isCommerce;
@property (copy, nonatomic) NSString *musicID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)configAvatarImageView;
- (void)configTitleLabel;
- (void)configDescriptionLabel;
- (void)onChallengeGuideViewTapped:(id)a0;
- (void)configWithMusicModel:(id)a0;
- (void).cxx_destruct;

@end
