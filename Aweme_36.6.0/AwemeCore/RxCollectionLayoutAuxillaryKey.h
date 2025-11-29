@class NSString;

@interface RxCollectionLayoutAuxillaryKey : NSObject <NSCopying>

@property (readonly, nonatomic) BOOL isSupplementary;
@property (readonly, nonatomic) long long auxillaryKind;
@property (readonly, nonatomic) long long index;
@property (readonly, copy, nonatomic) NSString *elementKind;

- (void).cxx_destruct;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithElementKind:(id)a0 index:(long long)a1 auxillaryKind:(long long)a2 isSupplementary:(BOOL)a3;

@end
