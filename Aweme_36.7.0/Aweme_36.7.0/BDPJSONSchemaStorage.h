@class NSMutableDictionary;

@interface BDPJSONSchemaStorage : NSObject <NSCopying, NSMutableCopying> {
    NSMutableDictionary *_mapping;
}

+ (id)storageWithSchema:(id)a0;
+ (id)scopeURIMappingFromSchema:(id)a0;
+ (id)storageWithSchemasArray:(id)a0;
+ (id)storage;

- (id)storageByAddingSchema:(id)a0;
- (id)schemaForURI:(id)a0;
- (BOOL)addMapping:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)initWithMapping:(id)a0;
- (id)init;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
