@interface AWEFavoriteTools : NSObject

+ (id)tabIdentifierWithModel:(id)a0;
+ (id)tabNameWithModel:(id)a0;
+ (BOOL)findType:(unsigned long long)a0 inTableItemModel:(id)a1;
+ (id)favoriteTabNameByType:(unsigned long long)a0;
+ (id)primaryTabNameByType:(unsigned long long)a0;
+ (id)primaryTabIdentifierByType:(unsigned long long)a0;
+ (id)favoriteTabIdentifierByType:(unsigned long long)a0;

@end
