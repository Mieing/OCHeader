@class NSArray, AWEIMMessageConversation;

@interface AWEIMChatPanelViewModel : NSObject

@property (retain, nonatomic) AWEIMMessageConversation *conversation;
@property (nonatomic) long long chatPanelCouponState;
@property (nonatomic) long long chatPanelCommodityState;
@property (nonatomic) BOOL isPigeonKeyUser;
@property (copy) NSArray *platfromChatPanels;
@property BOOL isRequesting;
@property (nonatomic) BOOL shouldShowShopwindow;
@property (nonatomic) BOOL panelUseLocalConfigOnly;

- (void)__addNotification;
- (void)__updateCouponEntryStateWithNoti:(id)a0;
- (void)__updateCommoditynEntryStateWithNoti:(id)a0;
- (id)initWithConversation:(id)a0 platformChatPanelModels:(id)a1;
- (void)updatePigeonKeyUser:(BOOL)a0;
- (void)updateWithPlatformChatPanels:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;

@end
