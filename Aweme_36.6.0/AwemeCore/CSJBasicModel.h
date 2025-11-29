@class NSString;

@interface CSJBasicModel : NSObject <BUYYModel, NSSecureCoding, CSJModelSerialization>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)fromDictionary:(id)a0;

- (id)toDictionary;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
