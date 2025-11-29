@class NSString, NSDictionary, BDXBridgeEventSubscriber, AWENewPublishAnchorTableViewCell;

@interface AWEPostPageMediaElement : AWEPostPageAnchorCheckCellElement <AWECommerceAnchorMessageProtocol, AWEPostPageAnchorProtocol>

@property (retain, nonatomic) AWENewPublishAnchorTableViewCell *mediumTableViewCell;
@property (retain, nonatomic) BDXBridgeEventSubscriber *subscriber;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSDictionary *extras;

+ (void)_aweLazyRegisterPostPage;
+ (id)type;

- (void)elementAppear;
- (void)didSelectAnchorWithType:(long long)a0 anchorDismissBlock:(id /* block */)a1 enterFromType:(long long)a2;
- (void)setupUIForAnchor;
- (void)setupCell:(id)a0;
- (void)configPlaceholderUI;
- (void)refreshWithAnchorVM:(id)a0;
- (BOOL)canHandleAnchorType:(long long)a0;
- (id)matchMission;
- (void)addAnchorMediumObserver;
- (void)didClickMediumWithCompletion:(id /* block */)a0;
- (void)openEntertainmentAnchorPanel;
- (void)cancleSelectedMedium:(id)a0;
- (void)addMediumAnchorNotification:(id)a0;
- (void)updateMediumWithJsonString:(id)a0;
- (void).cxx_destruct;
- (BOOL)isVisible;
- (BOOL)isEnabled;
- (void)cleanUp;
- (id)cell;
- (void)didSelect;

@end
