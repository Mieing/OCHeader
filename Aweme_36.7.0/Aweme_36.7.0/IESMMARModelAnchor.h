@class NSString;

@interface IESMMARModelAnchor : ARAnchor <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *modelName;

- (id)initWithTransform:(struct { void /* unknown type, empty encoding */ x0[4]; })a0 modelName:(id)a1;
- (void).cxx_destruct;
- (id)description;
- (id)name;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
