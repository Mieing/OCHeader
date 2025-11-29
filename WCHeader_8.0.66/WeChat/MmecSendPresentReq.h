@class MmecSendPresentReq_WishImgInfo, BaseRequest, NSString, EcsAddressInfo;

@interface MmecSendPresentReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) unsigned long long orderId;
@property (retain, nonatomic) NSString *receiveUserName;
@property (retain, nonatomic) EcsAddressInfo *addressInfo;
@property (retain, nonatomic) NSString *wishmessage;
@property (retain, nonatomic) MmecSendPresentReq_WishImgInfo *wishImgInfo;
@property (retain, nonatomic) NSString *receiveGroupId;
@property (nonatomic) unsigned int recipientType;
@property (nonatomic) unsigned long long participantCount;
@property (nonatomic) unsigned int cgiCompatibilityVersion;
@property (nonatomic) unsigned int disableReceive;
@property (nonatomic) unsigned long long merchantCoverId;
@property (nonatomic) unsigned int lotteryDrawTime;
@property (nonatomic) unsigned int payScene;

+ (void)initialize;

@end
