@class NSArray, IESECCommentLynxCellDataModel, IESECCommentSurveyModelV2;

@interface IESECCommentShowResponse : IESECBaseApiModel

@property (nonatomic) BOOL hasMore;
@property (copy, nonatomic) NSArray *comments;
@property (retain, nonatomic) IESECCommentSurveyModelV2 *surveyV2;
@property (retain, nonatomic) IESECCommentLynxCellDataModel *npsInfo;

+ (id)commentsJSONTransformer;
+ (id)surveyV2JSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
