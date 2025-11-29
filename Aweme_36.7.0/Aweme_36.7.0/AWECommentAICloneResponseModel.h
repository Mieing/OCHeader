@class AWECommentAICloneDataModel;

@interface AWECommentAICloneResponseModel : AWEBaseApiModel

@property (retain, nonatomic) AWECommentAICloneDataModel *dataModel;

+ (id)dataModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
