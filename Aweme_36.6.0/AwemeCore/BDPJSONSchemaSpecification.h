@class NSURL, NSSet, NSString;

@interface BDPJSONSchemaSpecification : NSObject

@property (retain, nonatomic) NSURL *defaultMetaschemaURI;
@property (copy, nonatomic) NSSet *supportedMetaschemaURIs;
@property (copy, nonatomic) NSSet *unsupportedMetaschemaURIs;
@property (copy, nonatomic) NSSet *keywords;
@property (readonly, nonatomic) unsigned long long version;
@property (readonly, copy, nonatomic) NSString *idKeyword;

+ (id)draft7;
+ (id)draft7Keywords;
+ (id)draft4Keywords;
+ (id)draft6Keywords;

- (void).cxx_destruct;
- (id)initWithVersion:(unsigned long long)a0;

@end
