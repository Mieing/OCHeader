@class BTAudioItemCellViewModel, NSString, MMUILabel, UIView, WCBrandAudioPlayView;

@interface BTAudioItemCellView : BTReaderItemCellView <MMUIViewControllerExt, IAudioReceiverExt, IMusicPlayerExt, MMMusicPlayerContollerDelegate, TingFlowPlayerNotification> {
    WCBrandAudioPlayView *m_audioPlayView;
    MMUILabel *m_timeLabel;
    UIView *m_containView;
}

@property (readonly, nonatomic) BTAudioItemCellViewModel *viewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithViewModel:(id)a0;
- (void)initTopReaderItem;
- (void)initContainView;
- (void)initCoverView;
- (void)initNormalReaderItem;
- (void)initPlayView;
- (void)initTitleAndTimeLabel;
- (void)initTitleView;
- (void)initFriendsReadLabel;
- (id)getFriendRelatedInfoTextColor;
- (void)onUpdateViewModel;
- (void)layoutSubviewsTopItem;
- (void)layoutSubviewsNormalItem;
- (void)StopPlay;
- (id)getChatName:(id)a0;
- (void)MMUIViewControllerDidBeRemoved:(id)a0;
- (void)audioPlayClicked;
- (id)accessibilityLabel;
- (void).cxx_destruct;

@end
