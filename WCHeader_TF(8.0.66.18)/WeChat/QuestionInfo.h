@class NSString;

@interface QuestionInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned int qid;
@property (retain, nonatomic) NSString *fullText;
@property (nonatomic) unsigned int questionCnt;

+ (void)initialize;

@end
