@class MMListenAudioBaseResponse, BaseResponse;

@interface MMListenTingReportResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) unsigned int reportTimeGap;
@property (retain, nonatomic) MMListenAudioBaseResponse *audioBaseResponse;

+ (void)initialize;

@end
