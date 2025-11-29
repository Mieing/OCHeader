@class AWECommentIntentionComponentModel;

@interface AWEPostCommentDiggResponse : AWEBaseApiModel

@property (retain, nonatomic) AWECommentIntentionComponentModel *commentIntentionComponent;
@property (nonatomic) BOOL canShowCommentCapsule;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
