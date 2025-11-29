@class NSString, MMFinderLiveRewardGiftItem, FinderLiveAppMsgAlertInfo;

@interface MMLiveRoomMsg : NSObject <NSCopying>

@property (nonatomic) unsigned int msgType;
@property (copy) NSString *senderNickName;
@property (copy) NSString *senderHeadImgUrl;
@property (copy) NSString *content;
@property (nonatomic) unsigned int msgCreateTime;
@property (nonatomic) unsigned long long msgSeq;
@property (copy) NSString *clientMsgId;
@property (copy) NSString *localClientMsgId;
@property (retain, nonatomic) MMFinderLiveRewardGiftItem *comboRewardProduct;
@property (nonatomic) unsigned int comboRewardCount;
@property (nonatomic) unsigned int rankingPosition;
@property (retain, nonatomic) FinderLiveAppMsgAlertInfo *alertInfo;
@property (copy) NSString *bgColorStr;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
