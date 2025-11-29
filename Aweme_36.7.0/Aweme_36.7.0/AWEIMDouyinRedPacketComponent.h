@class UIImage, NSString;
@protocol AWEIMDouyinRedPacketTransferProtocol;

@interface AWEIMDouyinRedPacketComponent : AWEIMFlexComponent <AWEIMMessageContentInterface>

@property (retain, nonatomic) id<AWEIMDouyinRedPacketTransferProtocol> transferManager;
@property (retain, nonatomic) UIImage *defaultCover;
@property (nonatomic) long long scene;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)didTapQuotedMessage:(id)a0 context:(id)a1;
+ (BOOL)enableShowQuotedCover:(id)a0;
+ (void)fetchQuotedMessageCover:(id)a0 context:(id)a1 completion:(id /* block */)a2;
+ (void)handleExchangeRedPacketTapAction:(id)a0 conversation:(id)a1;
+ (void)trackMessageClick:(id)a0;
+ (id)extraTrackingParamDict:(id)a0;

- (void)componentDidMounted:(id)a0;
- (void)cellVisibleLifeCycleChanged:(unsigned long long)a0;
- (void)cellWillDisplay:(unsigned long long)a0;
- (void)viewControllerLifeCycleChanged:(unsigned long long)a0;
- (void)p_addKVO;
- (id)coverSubTitle;
- (void)p_createPresenterIfNeed;
- (void)p_updatePresenter;
- (void)p_trackRedPacketShow;
- (void)trackMessageShow;
- (void)p_updateRedPacketCover;
- (void)setupProps;
- (void)redPacketDidTapped;
- (BOOL)p_enableSenderAvatarList;
- (id)p_senderAvatarList;
- (BOOL)p_needNewCoverView;
- (void)p_updatePresenterWithVerticalStyle;
- (void)p_updatePromotionStyle;
- (id)verticalStyleTitle;
- (id)verticalStyleSubtitle;
- (id)verticalStyleTitleTopSupplementText;
- (id)verticalStyleAvatarArray;
- (id)verticalStyleMiddleText;
- (id)p_exclusiveRPTitleWithMessage:(id)a0;
- (void)handleDefaultTapAction;
- (void).cxx_destruct;
- (id)conversation;
- (id)displayMessage;

@end
