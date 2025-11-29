@class NSString, NSNumber;

@interface BDUGByteDanceUnit : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *code;
@property (copy, nonatomic) NSString *asciiName;
@property (copy, nonatomic) NSNumber *geoNameID;
@property (copy, nonatomic) NSString *localID;
@property (copy, nonatomic) NSString *name;

+ (id)unitWithDictionary:(id)a0;

- (id)initWithCode:(id)a0 asciiName:(id)a1 geoNameID:(id)a2 localID:(id)a3 name:(id)a4;
- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)toJSON;

@end
