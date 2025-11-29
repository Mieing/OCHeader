@class NSString;

@interface BDUGPoiInfo : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *locationId;
@property (copy, nonatomic) NSString *amapId;
@property (copy, nonatomic) NSString *typeCode;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *awemeId;
@property (nonatomic) double confidence;
@property (nonatomic) double distance;
@property (copy, nonatomic) NSString *source;

+ (id)poiInfoWithDictionary:(id)a0;

- (id)initWithLocationId:(id)a0 amapId:(id)a1 typeCode:(id)a2 name:(id)a3 awemeId:(id)a4 confidence:(double)a5 distance:(double)a6 source:(id)a7;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)toJSON;

@end
