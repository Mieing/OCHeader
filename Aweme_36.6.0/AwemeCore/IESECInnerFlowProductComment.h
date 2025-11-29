@class NSArray, IESECInnerFlowProductCommentButton;

@interface IESECInnerFlowProductComment : IESECBaseApiModel

@property (copy, nonatomic) NSArray *productComments;
@property (copy, nonatomic) NSArray *storeComments;
@property (copy, nonatomic) IESECInnerFlowProductCommentButton *productCommentButton;
@property (copy, nonatomic) IESECInnerFlowProductCommentButton *storeCommentButton;
@property (nonatomic) long long count;
@property (nonatomic) BOOL showPreview;

+ (id)productCommentsJSONTransformer;
+ (id)storeCommentsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
