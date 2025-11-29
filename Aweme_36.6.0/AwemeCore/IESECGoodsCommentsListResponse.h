@class IESECCommentSurveyModelV2, NSArray, NSString, IESECCommentLynxCellDataModel, NSDictionary, NSNumber, IESECCommentIconActionModel;

@interface IESECGoodsCommentsListResponse : IESECBaseApiModel

@property (nonatomic) BOOL hasMore;
@property (retain, nonatomic) NSNumber *totalCount;
@property (copy, nonatomic) NSArray *commentList;
@property (copy, nonatomic) NSString *noticeDesc;
@property (retain, nonatomic) NSNumber *noticePosition;
@property (retain, nonatomic) IESECCommentIconActionModel *noticeIconAction;
@property (nonatomic) BOOL isCache;
@property (retain, nonatomic) IESECCommentSurveyModelV2 *npsSurvey;
@property (retain, nonatomic) IESECCommentLynxCellDataModel *aiInfo;
@property (retain, nonatomic) IESECCommentLynxCellDataModel *npsInfo;
@property (retain, nonatomic) NSNumber *meaninglessCount;
@property (copy, nonatomic) NSDictionary *extraInfo;
@property (copy, nonatomic) NSString *slogan;

+ (id)commentListJSONTransformer;
+ (id)npsSurveyJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
