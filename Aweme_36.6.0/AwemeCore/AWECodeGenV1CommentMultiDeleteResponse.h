@class NSArray, AWECodeGenCommentUserGuideModel;

@interface AWECodeGenV1CommentMultiDeleteResponse : AWEBaseResponseModel

@property (copy, nonatomic) NSArray *deleteResultModelArray;
@property (copy, nonatomic) NSArray *blockResultModelArray;
@property (nonatomic) BOOL controlCommentCheck;
@property (retain, nonatomic) AWECodeGenCommentUserGuideModel *userGuideModel;

+ (id)propertyToModelClassInArrayMap;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
