@class NSString, NSArray;

@interface WCCanvasRandomCardDynamicInfo : MMObject <NSCoding>

@property (nonatomic) int cardType;
@property (retain, nonatomic) NSString *titlePrefix;
@property (retain, nonatomic) NSString *titleInfix;
@property (retain, nonatomic) NSString *titleSuffix;
@property (retain, nonatomic) NSString *avatarDesc;
@property (retain, nonatomic) NSArray *friendAvatarImgs;
@property (retain, nonatomic) NSArray *commonAvatarImgs;
@property (retain, nonatomic) NSString *friendAvatarDescWithFriends;
@property (retain, nonatomic) NSString *friendAvatarDescCommon;
@property (retain, nonatomic) NSString *giveCardId;
@property (nonatomic) int subCardType;
@property (retain, nonatomic) NSString *receiveUrl;

+ (id)mergeSocialInfo:(id)a0 withCardDynamicInfo:(id)a1;
+ (id)mergeRedEnvelopInfo:(id)a0 withCardDynamicInfo:(id)a1;
+ (id)generateCardDynamicInfoFromGiveHBCardInfo:(id)a0;
+ (BOOL)isARedEnvelopCardWithCardDynamicInfo:(id)a0 asSubCardType:(int)a1;
+ (BOOL)isARedEnvelopGiveCardWithCardDynamicInfo:(id)a0;
+ (BOOL)isARedEnvelopReceiveCardWithCardDynamicInfo:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
