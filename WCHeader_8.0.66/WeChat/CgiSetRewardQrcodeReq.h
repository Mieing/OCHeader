@class BaseRequest, NSMutableArray, NSString;

@interface CgiSetRewardQrcodeReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSMutableArray *amtList;
@property (retain, nonatomic) NSString *desc;
@property (nonatomic) BOOL firstOpenFlag;
@property (nonatomic) BOOL modifyDefaultAmt;
@property (retain, nonatomic) NSString *photoUrl;
@property (retain, nonatomic) NSString *photoAeskey;

+ (void)initialize;

@end
