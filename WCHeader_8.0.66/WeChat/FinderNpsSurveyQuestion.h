@class NSString, NSMutableArray;

@interface FinderNpsSurveyQuestion : WXPBGeneratedMessage

@property (nonatomic) unsigned long long questionId;
@property (retain, nonatomic) NSString *questionTitle;
@property (retain, nonatomic) NSMutableArray *answers;
@property (nonatomic) unsigned int style;
@property (nonatomic) unsigned int questionType;

+ (void)initialize;

@end
