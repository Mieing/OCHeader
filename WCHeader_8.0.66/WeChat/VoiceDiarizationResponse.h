@class NSString, BaseResponse;

@interface VoiceDiarizationResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSString *diarizationResultText;
@property (nonatomic) unsigned int endFlag;
@property (nonatomic) unsigned int numSpeakers;
@property (nonatomic) unsigned int interval;

+ (void)initialize;

@end
