@class NSString, NSDictionary, AWEECOMIMBcInfoModel;

@interface AWEECOMIMEntryChatInfoModel : NSObject

@property (copy, nonatomic) NSString *cardUrlContenxParamsString;
@property (copy, nonatomic) NSDictionary *chatFromSourceDict;
@property (retain, nonatomic) AWEECOMIMBcInfoModel *bcInfoModel;
@property (retain, nonatomic) NSDictionary *originalParamsDict;
@property (copy, nonatomic) NSString *fromSource;
@property (copy, nonatomic) NSString *goodId;
@property (copy, nonatomic) NSString *orderId;
@property (copy, nonatomic) NSString *streamerName;
@property (copy, nonatomic) NSString *extraFromPlatform;
@property (copy, nonatomic) NSString *extraParams;
@property (copy, nonatomic) NSString *decodeShopId;
@property (copy, nonatomic) NSString *encodedShopId;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *entranceInfo;
@property (copy, nonatomic) NSString *sourcePage;
@property (copy, nonatomic) NSString *ecomGroupType;
@property (copy, nonatomic) NSString *originType;
@property (copy, nonatomic) NSString *originId;
@property (copy, nonatomic) NSString *ecomSendMessageParams;
@property (copy, nonatomic) NSString *enterFromLiveSaas;
@property (copy, nonatomic) NSString *ecomSdk;
@property (copy, nonatomic) NSString *enableLatch;
@property (copy, nonatomic) NSString *selfId;
@property (copy, nonatomic) NSString *marketingChannel;
@property (copy, nonatomic) NSString *requestAdditions;
@property (copy, nonatomic) NSString *liveRoomId;
@property (copy, nonatomic) NSString *promotionId;
@property (copy, nonatomic) NSString *metaParams;
@property (copy, nonatomic) NSString *authorId;
@property (copy, nonatomic) NSString *sendId;
@property (copy, nonatomic) NSString *anchorId;
@property (copy, nonatomic) NSString *conversationId;
@property (copy, nonatomic) NSString *transferUniqueId;
@property (copy, nonatomic) NSString *originEnterFrom;
@property (copy, nonatomic) NSString *storeId;
@property (copy, nonatomic) NSString *shopTag;
@property (copy, nonatomic) NSString *storeName;
@property (copy, nonatomic) NSString *preSourceType;
@property (copy, nonatomic) NSString *ppreSourceType;
@property (copy, nonatomic) NSString *itemId;
@property (copy, nonatomic) NSString *serviceEntityID;
@property (copy, nonatomic) NSString *channelId;
@property (copy, nonatomic) NSString *channelType;
@property (copy, nonatomic) NSString *eccsSchemeInfoString;
@property (copy, nonatomic) NSString *eccsSchemeInfoApiString;
@property (readonly, copy, nonatomic) NSString *requestSrcName;
@property (nonatomic) BOOL hideBottomFloatCard;
@property (nonatomic) BOOL shouldMsgTimeoutRecoverRollback;
@property (nonatomic) long long targetIndexV2;
@property (copy, nonatomic) NSString *aggregatesType;

+ (id)praserFromDict:(id)a0;
+ (id)findTargetValueForKey:(id)a0 ParamsDict:(id)a1 entranceInfoDict:(id)a2 seendMessageDict:(id)a3;

- (id)getPlatform;
- (id)extraFromPlatFromDict;
- (id)srcNameDict;
- (void).cxx_destruct;
- (id)getSource;

@end
