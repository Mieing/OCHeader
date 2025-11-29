@class NSString, UIImageView, ChatBotAsstDiscoverItemView, NSMutableArray, MMUIButton;
@protocol ChatBotAsstDiscoverViewDelegate;

@interface ChatBotAsstDiscoverViewController : MMUIViewController <ChatBotAsstDiscoverItemDelegate>

@property (retain, nonatomic) UIImageView *backgroundView;
@property (retain, nonatomic) MMUIButton *backBtn;
@property (retain, nonatomic) MMUIButton *updateDataBtn;
@property (retain, nonatomic) NSMutableArray *roomInfoList;
@property (retain, nonatomic) NSMutableArray *headComponentList;
@property (retain, nonatomic) ChatBotAsstDiscoverItemView *activeDiscoverItem;
@property (retain, nonatomic) MMUIButton *joinRoomBtn;
@property (nonatomic) unsigned int curPage;
@property (weak, nonatomic) id<ChatBotAsstDiscoverViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)viewDidLoad;
- (void)viewDidDisappear:(BOOL)a0;
- (void)interruptAISpeaking;
- (void)updateData;
- (void)layoutUpdateDataBtn;
- (void)onUpdateDataBtnClick;
- (void)relayoutRooms;
- (void)viewDidLayoutSubviews;
- (void)initNavigationItems;
- (void)layoutBackground;
- (void)onBackgroundView;
- (void)showSocialHistory;
- (void)layoutBackBtn;
- (void)layoutRooms;
- (void)layoutJoinRoomBtn;
- (void)onJoinRoomBtnClick;
- (void)exitPage;
- (BOOL)useTransparentNavibar;
- (BOOL)useBlackStatusbar;
- (BOOL)shouldInteractivePop;
- (BOOL)shouldNavigationBarAccessibilityHidden;
- (void)disableItemView:(id)a0 disable:(BOOL)a1;
- (void)updateActiveDiscoverItemView:(id)a0;
- (void)onDiscoverItemClick:(id)a0;
- (void).cxx_destruct;

@end
