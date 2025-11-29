@class NSString;

@interface TTAccountCommonModel : NSObject <NSSecureCoding, NSCoding, TTAModelProtocol, BDModelCustom>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)tta_modelWithJSON:(id)a0;
+ (unsigned long long)modelCustomMappingOptions;

- (id)toOriginalDictionary;
- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (id)toDictionary;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
