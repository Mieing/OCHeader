@class NSArray, NSString;

@interface AWECodeGenV1FamiliarResponse : AWEBaseResponseModel

@property (copy, nonatomic) NSArray *userListModelArray;
@property (nonatomic) int cursor;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) int hotsoonFilteredCount;
@property (nonatomic) long long hotsoonHasMore;
@property (copy, nonatomic) NSString *hotsoonText;
@property (nonatomic) long long total;
@property (nonatomic) BOOL totalAccurate;
@property (copy, nonatomic) NSArray *friendArray;
@property (copy, nonatomic) NSArray *closeFriendArray;
@property (copy, nonatomic) NSArray *reverseCloseFriendLisetArray;
@property (copy, nonatomic) NSArray *pitayaSkiiUserArray;

+ (id)propertyToModelClassInArrayMap;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
