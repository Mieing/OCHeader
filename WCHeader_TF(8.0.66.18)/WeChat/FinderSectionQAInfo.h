@class NSMutableArray, FinderLiteAppParam;

@interface FinderSectionQAInfo : WXPBGeneratedMessage

@property (retain, nonatomic) FinderLiteAppParam *qaTabLiteApp;
@property (nonatomic) unsigned int qaTotalCount;
@property (retain, nonatomic) NSMutableArray *answerContentList;

+ (void)initialize;

@end
