@class NSArray, IESIMChatSettingsItemCustomDescribeViewModel, IESIMGroupSettingsChatAlbumView, AWEIMHistoryMediaDisplayDataCenter, NSString;

@interface IESIMGroupSettingsShareContentComponent : AWEIMComponentBase <AWEIMMessageDataEventProtocol, IESIMChatSettingsItemProvider, IESIMGroupSettingsChatAlbumViewDelegate, IESIMChatSettingCleanMsgAction, IESIMChatDataManagerDelegate>

@property (retain, nonatomic) IESIMChatSettingsItemCustomDescribeViewModel *viewModel;
@property (retain, nonatomic) AWEIMHistoryMediaDisplayDataCenter *dataCenter;
@property (retain, nonatomic) IESIMGroupSettingsChatAlbumView *chatAlbumView;
@property (copy, nonatomic) NSArray *allMediaModels;
@property (nonatomic) BOOL isChatAlbumViewShow;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)iesim_willHandleCommandMessages:(id)a0 reason:(long long)a1;
- (void)hostVC_viewDidLoad;
- (void)componentDidMounted:(id)a0;
- (void)recallMessage:(id)a0 toMessage:(id)a1;
- (id)groupSettingsItemTypes;
- (id)groupSettingsItemViewModelForItemModel:(id)a0;
- (void)allMessageClearedForConvId:(id)a0;
- (void)loadLocalMediaModelList:(id)a0;
- (void)updateChatAlbumView:(id)a0;
- (void)p_updateChatAlbumView;
- (long long)p_itemCount;
- (id)addMediaModels:(id)a0;
- (id)tryFindMsgListMediaModels:(id)a0 supportTypes:(id)a1;
- (void)p_bindingDataCenterIfNeed;
- (struct CGSize { double x0; double x1; })itemSizeForChatAlbumView:(id)a0;
- (id)collapseMessageTypesForChatAlbumView:(id)a0;
- (void)didClickChatAlbumView:(id)a0;
- (id)viewForChatAlbumView:(id)a0;
- (struct CGPoint { double x0; double x1; })contentOffsetForChatAlbumView:(id)a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSizeForChatAlbumView:(id)a0;
- (struct CGSize { double x0; double x1; })p_shareContentItemSize;
- (void)p_transferToShareContentDetail;
- (void).cxx_destruct;

@end
