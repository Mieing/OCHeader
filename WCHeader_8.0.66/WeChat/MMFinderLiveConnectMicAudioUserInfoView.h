@class PAGView;

@interface MMFinderLiveConnectMicAudioUserInfoView : MMFinderLiveConnectMicBaseUserInfoView

@property (retain, nonatomic) PAGView *volumeAnimationView;

- (void)setConfigureLiveDirtyHandle:(BOOL)a0;
- (void)show;
- (void)configVolumeAnimationView;
- (void)updateHeadImageViewSize;
- (void)createHeadImageView;
- (void)createNickNameLabel;
- (unsigned long long)viewType;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })displayNormalizedFrame;
- (void)layoutUI;
- (id)layoutParametersForBigFormFactor;
- (id)layoutParametersForMediumFormFactor;
- (id)layoutParametersForMultiUsersMediumFormFactor;
- (id)layoutParametersForSmallFormFactor;
- (id)layoutParametersForLeadModeSmallFormFactor;
- (void)configureHeadImageViewLiveDirtyHandle;
- (void)configureNicknameLabelLiveDirtyHandle;
- (void)updateMicMutedButtonAppearance;
- (void)didMoveToSuperview;
- (void).cxx_destruct;

@end
