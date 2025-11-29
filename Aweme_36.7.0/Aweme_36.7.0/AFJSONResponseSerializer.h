@interface AFJSONResponseSerializer : AFHTTPResponseSerializer

@property (nonatomic) unsigned long long readingOptions;
@property (nonatomic) BOOL removesKeysWithNullValues;

+ (id)serializerWithReadingOptions:(unsigned long long)a0;
+ (id)serializer;

- (id)responseObjectForResponse:(id)a0 data:(id)a1 error:(id *)a2;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
