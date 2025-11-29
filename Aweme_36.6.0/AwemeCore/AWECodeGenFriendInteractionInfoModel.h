@class NSArray;

@interface AWECodeGenFriendInteractionInfoModel : AWEBaseDataModel

@property (copy, nonatomic) NSArray *diggListModelArray;
@property (copy, nonatomic) NSArray *commentListModelArray;
@property (nonatomic) BOOL commentHasMore;
@property (nonatomic) long long commentCursor;

+ (id)propertyToModelClassInArrayMap;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
