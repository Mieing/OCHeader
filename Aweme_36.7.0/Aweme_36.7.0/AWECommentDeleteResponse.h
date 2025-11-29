@class AWECommentUserGuideModel;

@interface AWECommentDeleteResponse : AWEBaseApiModel

@property (nonatomic) BOOL controlCommentCheck;
@property (retain, nonatomic) AWECommentUserGuideModel *guideModel;

+ (id)guideModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
