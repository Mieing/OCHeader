@class FinderNpsSurveyInfo, BaseResponse;

@interface FinderGetNpsSurveyResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) FinderNpsSurveyInfo *surveyInfo;

+ (void)initialize;

@end
