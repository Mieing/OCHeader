@class NSArray;

@interface AWEStickerCategoryFetchPageResponse : NSObject

@property (copy, nonatomic) NSArray *effectList;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) long long cursor;
@property (nonatomic) long long sortingPosition;

- (void).cxx_destruct;

@end
