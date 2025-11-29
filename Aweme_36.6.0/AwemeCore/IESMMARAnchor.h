@class ARAnchor, NSString, NSUUID;

@interface IESMMARAnchor : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) ARAnchor *arAnchor;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSUUID *identifier;
@property (readonly, nonatomic) struct { void /* unknown type, empty encoding */ x0[4]; } transform;

+ (id)anchorWithARAnchor:(id)a0;

- (id)initWithARAnchor:(id)a0;
- (id)initWithTransform:(struct { void /* unknown type, empty encoding */ x0[4]; })a0 name:(id)a1;
- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithTransform:(struct { void /* unknown type, empty encoding */ x0[4]; })a0;

@end
