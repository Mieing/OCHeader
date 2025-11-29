@class NSString, IESECCommentSurveyModelV2, NSArray, IESECCommentIconActionModel, NSDictionary, IESECCommentToastDataModel, IESECCommentLynxCellDataModel, IESECCommentSliceCellDataModel, NSNumber;

@interface IESECGoodsCommentsListMixedResponse : IESECBaseApiModel

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
@property (retain, nonatomic) IESECCommentSliceCellDataModel *tabInfo;
@property (retain, nonatomic) NSNumber *meaninglessCount;
@property (copy, nonatomic) NSDictionary *extraInfo;
@property (copy, nonatomic) NSString *slogan;
@property (retain, nonatomic) NSArray *statModelArray;
@property (retain, nonatomic) NSArray *tagModelArray;
@property (retain, nonatomic) NSArray *skuModelArray;
@property (retain, nonatomic) NSArray *extendTagArray;
@property (copy, nonatomic) NSString *productName;
@property (nonatomic) BOOL isAllCommentSectionSelected;
@property (retain, nonatomic) IESECCommentToastDataModel *toastData;

+ (id)commentListJSONTransformer;
+ (id)tabInfoJSONTransformer;
+ (id)skuModelArrayJSONTransformer;
+ (id)npsSurveyJSONTransformer;
+ (id)aiInfoJSONTransformer;
+ (id)npsInfoJSONTransformer;
+ (id)statModelArrayJSONTransformer;
+ (id)tagModelArrayJSONTransformer;
+ (id)extendTagArrayJSONTransformer;
+ (id)toastDataJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (id)init;

@end
