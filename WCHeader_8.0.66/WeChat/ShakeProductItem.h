@class NSString;

@interface ShakeProductItem : NSObject <PBCoding, NSCoding, NSCopying>

@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *thumbUrl;
@property (retain, nonatomic) NSString *productId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_title;
+ (void)PBArrayAdd_thumbUrl;
+ (void)PBArrayAdd_productId;
+ (void)initialize;

- (id)getPBPropertyTable;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;

@end
