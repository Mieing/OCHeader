@class NSArray, AWECodeGenExtraModel, AWECodeGenCommentUserAvatarModel, AWECodeGenCommentTranslateConfigModel;

@interface AWECodeGenV1CommentListReplyResponse : AWEBaseResponseModel

@property (copy, nonatomic) NSArray *commentsModelArray;
@property (nonatomic) long long cursor;
@property (nonatomic) long long hasMore;
@property (nonatomic) long long total;
@property (retain, nonatomic) AWECodeGenCommentUserAvatarModel *userAvatarSchemaModel;
@property (retain, nonatomic) AWECodeGenExtraModel *extraModel;
@property (retain, nonatomic) AWECodeGenCommentTranslateConfigModel *translateConfigModel;

+ (id)propertyToModelClassInArrayMap;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
