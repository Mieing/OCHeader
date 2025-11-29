@class NSString;

@interface AWEIMDouyinRedPacketCoverModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *coverId;
@property (copy, nonatomic) NSString *selectedDesc;
@property (copy, nonatomic) NSString *amount;
@property (copy, nonatomic) NSString *coverDesc;
@property (copy, nonatomic) NSString *selectedTips;
@property (copy, nonatomic) NSString *imageAddr;
@property (copy, nonatomic) NSString *videoAddr;
@property (copy, nonatomic) NSString *auUid;
@property (copy, nonatomic) NSString *auSecUid;
@property (copy, nonatomic) NSString *auAvatar;
@property (copy, nonatomic) NSString *auName;
@property (nonatomic) BOOL isAllowRecv;
@property (nonatomic) long long auditStatus;
@property (nonatomic) long long coverChannel;
@property (nonatomic) long long coverType;
@property (copy, nonatomic) NSString *expriedTime;
@property (nonatomic) long long followStatus;
@property (nonatomic) BOOL isBrandCover;
@property (copy, nonatomic) NSString *effectKey;
@property (copy, nonatomic) NSString *coverSubTitle;
@property (copy, nonatomic) NSString *coverStickerId;
@property (nonatomic) BOOL isCache;
@property (nonatomic) double cacheTime;
@property (copy, nonatomic) NSString *btnAddr;
@property (copy, nonatomic) NSString *btnDesc;
@property (copy, nonatomic) NSString *btnBubble;
@property (readonly, copy, nonatomic) NSString *coverName;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
