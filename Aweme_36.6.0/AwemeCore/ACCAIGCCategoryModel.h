@class NSString, NSArray;

@interface ACCAIGCCategoryModel : NSObject <NSCopying>

@property (copy, nonatomic) NSString *categoryID;
@property (copy, nonatomic) NSString *categoryName;
@property (copy, nonatomic) NSString *categoryKey;
@property (nonatomic) unsigned long long categoryType;
@property (copy, nonatomic) NSArray *effectsList;
@property (nonatomic) long long sortingPosition;
@property (nonatomic) long long cursor;
@property (nonatomic) BOOL hasMore;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
