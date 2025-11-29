@class NSString;

@interface AWEIMFeedContentComponent : AWEIMFlexComponent <AWEIMFeedContentInterface, AWEIMFoldMessageAssistanceButtonClickAction, AWEIMMessageContentInterface>

@property (nonatomic) BOOL isFromSearchBrandAD;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) long long scene;

+ (void)didTapQuotedMessage:(id)a0 context:(id)a1;
+ (void)fetchQuotedMessageCover:(id)a0 context:(id)a1 completion:(id /* block */)a2;
+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)componentDidMounted:(id)a0;
- (void)cellVisibleLifeCycleChanged:(unsigned long long)a0;
- (void)cellWillDisplay:(unsigned long long)a0;
- (void)didClickAssistanceButton:(long long)a0;
- (void)p_setupReadKVO;
- (void)showFeedDetailWithParams:(id)a0;
- (id)displayViewModel;
- (void)didTapFeedCover:(BOOL)a0 extraParams:(id)a1;
- (void)p_addKVOForDigCount:(id)a0;
- (void)p_addKVOForViewModel:(id)a0;
- (void)searchBrandADTrackerWithLabel:(id)a0;
- (void)p_configLoadingIfNeededWithShow:(BOOL)a0;
- (void)trackEcomFeedCardMsgClick;
- (id)displayMessage;

@end
