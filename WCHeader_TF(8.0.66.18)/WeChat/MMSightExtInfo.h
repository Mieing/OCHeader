@class NSString;

@interface MMSightExtInfo : WXPBGeneratedMessage

@property (nonatomic) BOOL needRemuxingOnSend;
@property (nonatomic) BOOL localCaptureVideo;
@property (nonatomic) int trycount;
@property (nonatomic) int fromscene;
@property (retain, nonatomic) NSString *videoStatus;
@property (nonatomic) BOOL finishPreSendProcess;
@property (retain, nonatomic) NSString *appid;
@property (nonatomic) BOOL isFromSkipCompress;
@property (retain, nonatomic) NSString *sendSightAppId;
@property (nonatomic) BOOL templateVideo;

+ (void)initialize;

@end
