@class UIImageView, AWEPayVolumeControlView;

@interface AWEPayRPOpenRedPacketMessageCardView : AWEPayRPOpenRedPacketBaseCardView

@property (retain, nonatomic) UIImageView *openBtnImageView;
@property (retain, nonatomic) AWEPayVolumeControlView *volumeView;

- (void)setupOpenTaskView;
- (void)openRedPackage;
- (id)p_rpInfoTitle;
- (BOOL)p_isDetailBtnHidden;
- (id)p_exclusiveTitleWithCardConfigModel:(id)a0;
- (void).cxx_destruct;
- (void)startLoading;
- (void)updateContent;
- (void)stopLoading;
- (void)setupUI;

@end
