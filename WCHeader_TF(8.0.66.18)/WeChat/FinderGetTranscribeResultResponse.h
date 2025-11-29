@class FinderTranscribe_TransResult, NSData, BaseResponse;

@interface FinderGetTranscribeResultResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) int progress;
@property (retain, nonatomic) FinderTranscribe_TransResult *transResult;
@property (nonatomic) unsigned int pollIntervalMs;
@property (retain, nonatomic) NSData *lastBuffer;

+ (void)initialize;

@end
