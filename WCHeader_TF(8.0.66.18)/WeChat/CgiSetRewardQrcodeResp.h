@class NSString, NSMutableArray, BaseResponse;

@interface CgiSetRewardQrcodeResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) unsigned int retcode;
@property (retain, nonatomic) NSString *retmsg;
@property (retain, nonatomic) NSString *photoUrl;
@property (retain, nonatomic) NSString *photoAeskey;
@property (nonatomic) unsigned int iconLength;
@property (retain, nonatomic) NSMutableArray *amtList;
@property (retain, nonatomic) NSString *desc;
@property (nonatomic) unsigned int photoWidth;
@property (retain, nonatomic) NSString *rewardPhotoUrlV2;

+ (void)initialize;

@end
