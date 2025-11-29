@class NSData, BaseResponse;

@interface FinderTranscribeResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) unsigned int pollIntervalMs;
@property (retain, nonatomic) NSData *lastBuffer;

+ (void)initialize;

@end
