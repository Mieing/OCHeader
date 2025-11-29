@class NSArray;

@interface RxCollectionViewCompositionalLayoutConfiguration : NSObject <NSCopying>

@property (nonatomic) long long scrollDirection;
@property (nonatomic) double interSectionSpacing;
@property (copy, nonatomic) NSArray *boundarySupplementaryItems;
@property (nonatomic) long long contentInsetsReference;

+ (id)defaultConfiguration;

- (id)initWithScrollDirection:(long long)a0 interSectionSpacing:(double)a1 boundarySupplementaryItems:(id)a2 contentInsetsReference:(long long)a3;
- (void).cxx_destruct;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (long long)differencesFromConfiguration:(id)a0;

@end
