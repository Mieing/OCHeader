@class NSString;

@interface AWEIMAlbumAssetCacheKey : NSObject <NSCopying>

@property (nonatomic) BOOL ascending;
@property (nonatomic) unsigned long long resourceType;
@property (nonatomic) long long sortStyle;
@property (copy, nonatomic) NSString *collectionLocalizedTitle;

+ (id)keyWithAscending:(BOOL)a0 type:(unsigned long long)a1 sortStyle:(long long)a2 localizedTitle:(id)a3;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
