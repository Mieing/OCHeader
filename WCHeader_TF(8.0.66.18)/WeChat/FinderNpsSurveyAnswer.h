@class NSString;

@interface FinderNpsSurveyAnswer : WXPBGeneratedMessage

@property (nonatomic) unsigned long long answerId;
@property (retain, nonatomic) NSString *answerTitle;
@property (nonatomic) unsigned int answerIcon;
@property (nonatomic) unsigned int style;
@property (nonatomic) BOOL defaultHighlighted;
@property (nonatomic) unsigned int actionType;
@property (nonatomic) unsigned long long nextQuestionId;
@property (nonatomic) BOOL withInputText;
@property (retain, nonatomic) NSString *textPlaceholder;

+ (void)initialize;

@end
