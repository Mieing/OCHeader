@class UIColor, NSString;

@interface IESECCollectionViewLayoutAttributes : UICollectionViewLayoutAttributes

@property (retain, nonatomic) UIColor *backgroundColor;
@property (copy, nonatomic) NSString *backgroundImage;
@property (copy, nonatomic) NSString *borderRadius;
@property (nonatomic) long long contentMode;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqualToAttributes:(id)a0;

@end
