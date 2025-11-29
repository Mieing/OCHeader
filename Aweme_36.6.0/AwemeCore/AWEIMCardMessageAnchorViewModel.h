@class AWEIMMessageConversation, NSString, AWEIMCardMessage, AWEAwemeModel, AWEIMCardMessageCommerceAnchorInfo, NSURL;
@protocol IESIMMessageProtocol;

@interface AWEIMCardMessageAnchorViewModel : NSObject <IESIMFeedVideoCachePoolMessage, IESIMFriendsRedPacketMessage, IESIMCardMessageAnchorViewModelProtocol>

@property (readonly) long long pineappleRedPacketStatus;
@property (retain, nonatomic) AWEIMMessageConversation *conversation;
@property (retain, nonatomic) AWEIMCardMessage *cardMessage;
@property (retain, nonatomic) id<IESIMMessageProtocol> iesMsg;
@property (weak, nonatomic) AWEAwemeModel *awemeModel;
@property (nonatomic) BOOL shouldTrackerDisplay;
@property (nonatomic) BOOL commerceAnchorInvalid;
@property (retain, nonatomic) AWEIMCardMessageCommerceAnchorInfo *commerceAnchorInfo;
@property long long pineappleRedPacketStatus;
@property (copy, nonatomic) NSString *identifier;
@property unsigned long long style;
@property (copy) NSString *title;
@property (copy) NSString *subtitle;
@property (retain) NSURL *icon;
@property (copy) NSString *price;
@property BOOL shouldShowCardTitle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isValidPineappleAnchorWithStatus:(long long)a0;
+ (BOOL)hasPineappleAnchorTagWithMessage:(id)a0;
+ (void)setAwe_pineappleStatus:(long long)a0 msg:(id)a1;
+ (void)setAwe_pineappleHasQuestion:(BOOL)a0 msg:(id)a1;
+ (BOOL)shouldShowPineappleAnchorWithMessage:(id)a0;
+ (id)awe_pineappleStatus:(id)a0;
+ (BOOL)awe_pineappleHasQuestion:(id)a0;
+ (BOOL)__shouldShowSkuAnchorWithCardMessage:(id)a0;
+ (BOOL)shouldShowAnchorWithMessage:(id)a0;

- (void)redPacketStatusUpdatedOnAwemeID:(id)a0 status:(long long)a1;
- (void)willDisplayByMessageVisibleLifeCycle;
- (void)didEndDisplayingByMessageVisibleLifeCycle;
- (void)didTappedPineappleAnchor;
- (void)__configCommerceAnchorWithAnchorInfo:(id)a0;
- (void)__configCommercePriceAnchorWithAnchorInfo:(id)a0;
- (void)__saveCommerceAnchorWithAnchorInfo:(id)a0;
- (void)__setCardMessageCommerceAnchorInfoInvalid:(BOOL)a0;
- (void)configWithCardMessage:(id)a0;
- (id)ecomShareBackCommonParams;
- (id)__productEntranceCommonParams;
- (void)configCommerceAnchorWithCardMessage:(id)a0;
- (void)fetchLatestCommercePriceInfo;
- (void)dealCommerceAnchorInfoWithAwemeModel:(id)a0;
- (id)didTapCommerceAnchorToGetSchema;
- (id)didTapCommerceAnchorExtraParams;
- (void)dispalyCommerceAnchorTracker;
- (void)tapCommerceAnchorTracker;
- (void)__updatepineappleRedPacketStatus:(long long)a0 hasQuestion:(BOOL)a1;
- (void)__pineappleAnchorClickTracker;
- (id)__pineappleAnchorParams;
- (BOOL)pineappleRedPacketHasQuestionForAwemeModel:(id)a0;
- (long long)pineappleRedPacketStatusForAwemeModel:(id)a0;
- (void)configPineappleAnchorWithMessage:(id)a0;
- (void)updatePineappleAnchorInfoWithStatus:(long long)a0 hasQuestion:(BOOL)a1;
- (void)pineappleAnchorShowTracker;
- (void)feedVideoCachePoolDidUpdate:(id)a0;
- (void)__dealWithAwemeModel:(id)a0;
- (id)didTapExtraParams;
- (id)initWithConversation:(id)a0 message:(id)a1 iesMsg:(id)a2;
- (id)didTapAnchorToGetSchema;
- (id)ecomTrackParams;
- (void).cxx_destruct;
- (void)dealloc;

@end
