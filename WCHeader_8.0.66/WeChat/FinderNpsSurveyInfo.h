@class NSMutableArray;

@interface FinderNpsSurveyInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned long long surveyId;
@property (retain, nonatomic) NSMutableArray *questions;
@property (nonatomic) unsigned long long firstQuestionId;
@property (nonatomic) unsigned long long taskId;

+ (void)initialize;

@end
