@class NSString;

@interface AWEFantaVVFeatureModel : NSObject <NSCoding, NSCopying>

@property (copy, nonatomic) NSString *uniqueID;
@property (nonatomic) double createTime;

- (void).cxx_destruct;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
