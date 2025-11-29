@class NSString, AWEShareContext;
@protocol AWEShareView;

@interface AFDAddWechatFriendsShareChannel : AWEShareBaseChannel <AWEShareItemDelegate, AWEShareFunction, AFDAddFriendsShareProtocol, AFDWechatShareChannelProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSString *shareType;
@property (readonly, weak, nonatomic) AWEShareContext *context;
@property (readonly, weak, nonatomic) id<AWEShareView> shareView;
@property (readonly, nonatomic) long long shareCategory;
@property (readonly, copy, nonatomic) NSString *trackingLabel;
@property (readonly, nonatomic) BOOL supportMultipleOperations;
@property (readonly, nonatomic, getter=isShareItemEnabled) BOOL shareItemEnabled;

+ (long long)insertIndex;
+ (id)cellTitle;
+ (id)cellSubTitle;
+ (void)startAction:(id)a0;
+ (BOOL)canShow:(id)a0 row:(long long)a1;
+ (long long)insertIndexForRow:(long long)a0;
+ (long long)indexForWeChatShareChannel;
+ (void)postShareToWeChatFriendsNotificationWithParams:(id)a0;
+ (void)postShareToWeChatFriendsShareTokenVCStatusChangeNotificationWithIfShow:(BOOL)a0 params:(id)a1;

- (id)shareImage;
- (void)shareItem:(id)a0 willAppear:(BOOL)a1;
- (void)configWithShareView:(id)a0;
- (id)defaultSmallIconInTheme:(id)a0;
- (id)defaultSmallIconBackgroundColorInTheme:(id)a0;
- (id)smallOutlineIconInTheme:(id)a0;
- (id)outlineIconBackgroundColorInTheme:(id)a0;
- (void)precheckFunctionBeforeShareWithCompletion:(id /* block */)a0;
- (void)functionWillDisplayWithIndexPath:(id)a0 isFirstShow:(BOOL)a1;
- (void)onClickWechatShare;
- (void)copyLinkWithCompletion:(id /* block */)a0;
- (BOOL)share;
- (id)title;
- (id)shareTitle;
- (BOOL)prepareWithContext:(id)a0;
- (id)defaultIcon;

@end
