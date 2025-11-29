@class AWECodeGenCommentUserGuideModel;

@interface AWECodeGenV1CommentDeleteResponse : AWEBaseResponseModel

@property (nonatomic) BOOL controlCommentCheck;
@property (retain, nonatomic) AWECodeGenCommentUserGuideModel *userGuideModel;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
