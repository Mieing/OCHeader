@class NSString, NSMutableArray, BaseResponse;

@interface VoiceTransResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) int vtcount;
@property (retain, nonatomic) NSMutableArray *vtlist;
@property (nonatomic) unsigned int interval;
@property (nonatomic) unsigned int maxPacketSize;
@property (nonatomic) unsigned int needReportResult;
@property (nonatomic) unsigned int disasterSkipVoiceTrans;
@property (nonatomic) unsigned int needSimplify;
@property (retain, nonatomic) NSString *buttonText;
@property (retain, nonatomic) NSString *cancelButtonText;

+ (void)initialize;

@end
