@class AWEDouplusToastModel, NSString;

@interface AWEAwemeCommerceModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long cpcAdVideoAuthStatus;
@property (nonatomic) long long cpcAdVideoAuthTargetType;
@property (nonatomic) long long cpcAdSourceType;
@property (nonatomic) BOOL avoidGlobalPendant;
@property (nonatomic) BOOL showShareLink;
@property (retain, nonatomic) AWEDouplusToastModel *douplusToastModel;
@property (nonatomic) BOOL isAuthAuctionAdVideo;
@property (nonatomic) BOOL withCommentFilterWords;
@property (nonatomic) BOOL isAdvertisable;
@property (nonatomic) BOOL preventDelete;
@property (nonatomic) BOOL preventSelfSee;
@property (nonatomic) BOOL preventFriendSee;
@property (copy, nonatomic) NSString *preventPrivacyReason;
@property (nonatomic) long long adBanMask;
@property (nonatomic) long long adType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)douplusToastModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void)handleNotification:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
