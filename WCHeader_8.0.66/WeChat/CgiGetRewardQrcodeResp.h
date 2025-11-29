@class NSString, NoticeItem, RealNameInfo, NSMutableArray, BaseResponse;

@interface CgiGetRewardQrcodeResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) unsigned int retcode;
@property (retain, nonatomic) NSString *retmsg;
@property (nonatomic) BOOL emptyFlag;
@property (retain, nonatomic) NSString *photoUrl;
@property (retain, nonatomic) NSString *photoAeskey;
@property (retain, nonatomic) NSString *word;
@property (nonatomic) unsigned int iconLength;
@property (retain, nonatomic) NSString *desc;
@property (retain, nonatomic) NSString *trueName;
@property (retain, nonatomic) NSMutableArray *amtList;
@property (retain, nonatomic) NSString *buttonUrl;
@property (retain, nonatomic) NSString *buttonWording;
@property (nonatomic) unsigned int maxAmt;
@property (nonatomic) unsigned int photoWidth;
@property (retain, nonatomic) RealNameInfo *realNameInfo;
@property (retain, nonatomic) NoticeItem *noticeItem;
@property (retain, nonatomic) NSString *rewardPhotoUrlV2;

+ (void)initialize;

@end
