@class FinderTranscribe_TransResult, FinderTranscribe_AddVoiceReq;

@interface FinderTranscribeReport_VoiceInfo : WXPBGeneratedMessage

@property (retain, nonatomic) FinderTranscribe_AddVoiceReq *addVoiceReq;
@property (retain, nonatomic) FinderTranscribe_TransResult *asrTransResult;

+ (void)initialize;

@end
