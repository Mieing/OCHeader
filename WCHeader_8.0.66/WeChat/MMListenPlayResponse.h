@class MMListenPlayResponse_PlatformInfo, NSString, MMListenPlayResponse_MMListenPlayUrl, MMListenPlayResponse_VipInfo, MMListenPlayResponse_TryInfo, NSMutableArray, BaseResponse;

@interface MMListenPlayResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSString *playUrl;
@property (nonatomic) int expireTime;
@property (nonatomic) BOOL isTry;
@property (nonatomic) BOOL isSpam;
@property (retain, nonatomic) NSMutableArray *playUrls;
@property (retain, nonatomic) NSString *replaceFeedId;
@property (retain, nonatomic) MMListenPlayResponse_VipInfo *vipInfo;
@property (nonatomic) BOOL isLimitFree;
@property (retain, nonatomic) MMListenPlayResponse_PlatformInfo *platformInfo;
@property (retain, nonatomic) NSString *unplayableMsg;
@property (retain, nonatomic) NSMutableArray *ttsPlayUrls;
@property (retain, nonatomic) NSString *tryWording;
@property (retain, nonatomic) MMListenPlayResponse_MMListenPlayUrl *encryptPlayUrl;
@property (retain, nonatomic) NSString *adWording;
@property (retain, nonatomic) MMListenPlayResponse_TryInfo *tryInfo;
@property (nonatomic) BOOL isNoCopyright;

+ (void)initialize;

@end
