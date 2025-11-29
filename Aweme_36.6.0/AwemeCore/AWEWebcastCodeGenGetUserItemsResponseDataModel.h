@class NSArray, NSString;

@interface AWEWebcastCodeGenGetUserItemsResponseDataModel : AWEBaseDataModel

@property (copy, nonatomic) NSArray *itemListModelArray;
@property (nonatomic) BOOL hasMore;
@property (copy, nonatomic) NSString *cursor;
@property (nonatomic) BOOL hasAnchorPermission;
@property (nonatomic) BOOL enableBind;

+ (id)propertyToModelClassInArrayMap;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
