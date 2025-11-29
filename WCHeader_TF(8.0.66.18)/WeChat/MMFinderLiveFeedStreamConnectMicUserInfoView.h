@class MMFinderLiveConnectMicAllUserInfoView, NSString, UIImageView;

@interface MMFinderLiveFeedStreamConnectMicUserInfoView : MMFinderLiveFeedStreamWidgetBaseView <MMFinderLiveConnectMicAllUserInfoViewDelegate>

@property (retain, nonatomic) MMFinderLiveConnectMicAllUserInfoView *connectMicAllUserInfoView;
@property (retain, nonatomic) NSString *currentPkSessionId;
@property (weak, nonatomic) UIImageView *connectMicPkAtmosphereBackgroundView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)prepareForReuse;
- (void)setTaskId:(id)a0;
- (void)updateUserPkStateUI;
- (void)resetConnectMicUserInfoViewFrame;
- (BOOL)shouldMMFinderLiveConnectMicAllUserInfoDisableStartPkAnimation:(id)a0;
- (void)onMMFinderLiveConnectMicAllUserInfoPkStatusChange:(unsigned long long)a0 toState:(unsigned long long)a1;
- (void)startExposeAction;
- (void)endExposeAction;
- (void)updatePkAtmosphereBackgroundIfNeeded:(BOOL)a0;
- (void).cxx_destruct;

@end
