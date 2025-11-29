@class NSArray, NSString;

@interface AWECodeGenGetCurrentMentionsResponseModel : AWEBaseResponseModel

@property (copy, nonatomic) NSArray *knowledgeListModelArray;
@property (copy, nonatomic) NSString *itemId;

+ (id)propertyToModelClassInArrayMap;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
