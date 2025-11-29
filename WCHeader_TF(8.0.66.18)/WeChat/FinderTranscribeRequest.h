@class BaseRequest, NSString, FinderTranscribe_AddVoiceReq, NSMutableArray;

@interface FinderTranscribeRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) FinderTranscribe_AddVoiceReq *addVoiceReq;
@property (nonatomic) BOOL enableMinorLangTrans;
@property (retain, nonatomic) NSMutableArray *minorLangList;
@property (retain, nonatomic) NSString *finderUsername;

+ (void)initialize;

@end
