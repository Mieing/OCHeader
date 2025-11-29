@class NSString, NSMutableArray;

@interface FinderReportNpsSurveyInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *feedId;
@property (retain, nonatomic) NSString *taskId;
@property (retain, nonatomic) NSString *surveyId;
@property (nonatomic) unsigned int shownCount;
@property (retain, nonatomic) NSMutableArray *answerList;
@property (retain, nonatomic) NSString *showTimestamp;
@property (retain, nonatomic) NSString *selectTimestamp;
@property (retain, nonatomic) NSString *startShowTimestamp;
@property (retain, nonatomic) NSString *endShowTimestamp;

+ (id)modelCustomPropertyMapperForConfigTag:(id)a0;
+ (void)initialize;

@end
