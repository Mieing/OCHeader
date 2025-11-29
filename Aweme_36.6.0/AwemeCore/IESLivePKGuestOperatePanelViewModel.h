@class IESLivePKGuestEmojiAPI, NSArray, NSString, IESLivePKGuestOperatePanelConfig, IESLivePopupItem;
@protocol IESLiveInteractUserModel, IESLivePKGuestOperatePanelViewModelDelegate;

@interface IESLivePKGuestOperatePanelViewModel : NSObject

@property (nonatomic) BOOL isMute;
@property (nonatomic) BOOL isFollow;
@property (copy, nonatomic) NSArray *panelItems;
@property (copy, nonatomic) NSArray *modeItems;
@property (retain, nonatomic) IESLivePKGuestEmojiAPI *api;
@property (retain, nonatomic) IESLivePKGuestOperatePanelConfig *config;
@property (nonatomic) unsigned long long emojiLines;
@property (copy, nonatomic) NSString *requestPage;
@property (nonatomic) long long loadingStatus;
@property (weak, nonatomic) IESLivePopupItem *popupItem;
@property (retain, nonatomic) id<IESLiveInteractUserModel> interactGuestUser;
@property (weak, nonatomic) id<IESLivePKGuestOperatePanelViewModelDelegate> delegate;
@property (copy, nonatomic) NSArray *emojiPages;
@property (nonatomic) BOOL showEmoji;
@property (nonatomic) BOOL isGameMode;

- (void)didSelectEmoji:(id)a0;
- (void)didClickFollowButton;
- (id)panelTitle;
- (void)hidePanel;
- (void)didClickMuteButton:(BOOL)a0;
- (unsigned long long)initialEmojiLines;
- (BOOL)isOthersPanel;
- (void)didShowEmoji:(id)a0;
- (id)renderItems;
- (id)renderConnectModeItems;
- (BOOL)showCenterTitle;
- (BOOL)isTopRightDisconnect;
- (BOOL)showConnectionIcon;
- (void)didClickConnectionButton;
- (void)updatePanelItemWithType:(long long)a0;
- (unsigned long long)requestEmojiCategory;
- (id)reformEmojiPageFromList:(id)a0;
- (unsigned long long)emojiLinesWithPages:(id)a0;
- (void)fetchEmojiList:(BOOL)a0 emojiCategory:(unsigned long long)a1 completion:(id /* block */)a2;
- (id)othersPanelItemTypes;
- (id)makePanelItemWithType:(long long)a0;
- (id)selfPanelItemTypes;
- (id)selfConnectModeTypes;
- (BOOL)isSingleLineEmojiList;
- (id)itemInfoForType:(long long)a0;
- (BOOL)showMuteIcon;
- (BOOL)showCameraOption;
- (BOOL)showVideoModeIcon;
- (int)currentConnectMode;
- (BOOL)showBeautyIcon;
- (BOOL)showAudioModeIcon;
- (void)didClickUserInfoButton;
- (BOOL)precheckOthersConnection;
- (void)didClickSwitchGuestButton;
- (id)pr_reformEmojiPageFromList:(id)a0 withMaxLines:(unsigned long long)a1;
- (void)unFollowAction:(id)a0 trackParams:(id)a1 extra:(id)a2;
- (void)followAction:(id)a0 trackParams:(id)a1 extra:(id)a2;
- (void).cxx_destruct;
- (void)fetchData;
- (id)initWithConfig:(id)a0;
- (id)currentUser;

@end
