@class NSString, NSMutableArray;

@interface FinderReportNpsSurveySingleAnswer : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *questionId;
@property (retain, nonatomic) NSString *answerId;
@property (retain, nonatomic) NSString *answerTxt;
@property (retain, nonatomic) NSMutableArray *multiAnswerIds;

+ (id)modelCustomPropertyMapperForConfigTag:(id)a0;
+ (void)initialize;

@end
