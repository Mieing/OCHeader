@class NewLifePrefetchConf, NSString, NSData, NewLifeTagRelatedStream, BaseResponse, NewLifeUserTagStream, NewLifePostGuideInfo, NewLifeSearchStreamResult, NSMutableArray, NewLifePostEducationPage, NewLifeTagFoldedStream;

@interface NewLifeStreamResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSMutableArray *object;
@property (retain, nonatomic) NSData *lastBuffer;
@property (nonatomic) unsigned int continueFlag;
@property (retain, nonatomic) NSMutableArray *newlifeTabList;
@property (retain, nonatomic) NewLifePrefetchConf *prefetchConf;
@property (retain, nonatomic) NSString *debugMessage;
@property (retain, nonatomic) NewLifeSearchStreamResult *searchResult;
@property (retain, nonatomic) NewLifePostGuideInfo *topBarPostGuide;
@property (retain, nonatomic) NewLifePostEducationPage *postEducationPage;
@property (nonatomic) unsigned int streamShowType;
@property (retain, nonatomic) NewLifeTagFoldedStream *tagFoldedStream;
@property (retain, nonatomic) NewLifeTagRelatedStream *tagRelatededStream;
@property (retain, nonatomic) NewLifeUserTagStream *userTagStream;

+ (void)initialize;

@end
