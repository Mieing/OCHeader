@interface TIMXPaginationModel : NSObject <NSCopying>

@property (nonatomic) long long pageIndex;
@property (nonatomic) long long pageSize;
@property (nonatomic) long long pageCount;

- (id)initWithPageIndex:(long long)a0 pageSize:(long long)a1 pageCount:(long long)a2;
- (id)copyWithPageIndex:(long long)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
