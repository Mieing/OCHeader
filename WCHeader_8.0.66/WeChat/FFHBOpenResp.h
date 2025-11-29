@class NSString, RealNameInfo, NSData, InterceptWin, BaseResponse;

@interface FFHBOpenResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) unsigned int retcode;
@property (retain, nonatomic) NSString *retmsg;
@property (nonatomic) unsigned int errorType;
@property (retain, nonatomic) NSString *sendId;
@property (nonatomic) int hbStatus;
@property (nonatomic) int receiveStatus;
@property (retain, nonatomic) NSString *sendUserName;
@property (nonatomic) unsigned int amount;
@property (retain, nonatomic) RealNameInfo *realNameInfo;
@property (nonatomic) int jumpChange;
@property (retain, nonatomic) NSString *changeUrl;
@property (retain, nonatomic) NSString *changeWording;
@property (retain, nonatomic) NSString *externMess;
@property (nonatomic) int isLucky;
@property (retain, nonatomic) NSString *sendHeadImage;
@property (retain, nonatomic) NSString *sendNickName;
@property (retain, nonatomic) InterceptWin *interceptWin;
@property (retain, nonatomic) NSData *leftButtonContinue;
@property (retain, nonatomic) NSData *halfPageInfo;

+ (void)initialize;

@end
