@class NSArray, NSString, AWECodeGenCommentModel, AWECodeGenLifeStoryModel;

@interface AWECodeGenStoryNoticeModel : AWEBaseDataModel

@property (retain, nonatomic) AWECodeGenLifeStoryModel *storyModel;
@property (copy, nonatomic) NSArray *fromUserModelArray;
@property (copy, nonatomic) NSString *content;
@property (nonatomic) int mergeCount;
@property (nonatomic) BOOL isExpired;
@property (retain, nonatomic) AWECodeGenCommentModel *commentModel;

+ (id)propertyToModelClassInArrayMap;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
