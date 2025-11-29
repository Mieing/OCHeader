@class ChatMsgConfig, AutoOpenConfig, NSString, GiftMsgConfig;

@interface GetFeaturedPublicScreenSettingResponse_ResponseData : IESLivePBBaseMessage

@property (nonatomic) long long featuredPublicScreenStatus;
@property (retain, nonatomic) AutoOpenConfig *autoOpenConf;
@property (nonatomic) BOOL hasAutoOpenConf;
@property (retain, nonatomic) GiftMsgConfig *giftMsgConf;
@property (nonatomic) BOOL hasGiftMsgConf;
@property (retain, nonatomic) ChatMsgConfig *chatMsgConf;
@property (nonatomic) BOOL hasChatMsgConf;
@property (nonatomic) long long mode;
@property (copy, nonatomic) NSString *recommendDescribe;
@property (copy, nonatomic) NSString *customDescribe;
@property (nonatomic) long long maxDescribeLen;
@property (nonatomic) BOOL disableGiftSetting;

+ (id)descriptor;

@end
