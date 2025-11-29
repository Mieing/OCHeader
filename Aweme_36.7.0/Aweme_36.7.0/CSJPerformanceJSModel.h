@class NSString, NSArray;

@interface CSJPerformanceJSModel : NSObject <BUYYModel, NSSecureCoding, CSJModelSerialization>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *URL;
@property (copy, nonatomic) NSArray *executeTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)modelCustomPropertyMapper;
+ (id)fromDictionary:(id)a0;

- (BOOL)modelCustomTransformFromDictionary:(id)a0;
- (void).cxx_destruct;
- (id)toDictionary;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
