@class NSString;

@interface FavoritesModel : NSObject <FavoritesModel, NSCopying, NSCoding>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)modelCustomPropertyMapperForConfigTag:(id)a0;
+ (id)xmlAttributePropertylist;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
