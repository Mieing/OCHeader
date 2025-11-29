@interface AFJSONRequestSerializer : AFHTTPRequestSerializer

@property (nonatomic) unsigned long long writingOptions;

+ (id)serializerWithWritingOptions:(unsigned long long)a0;
+ (id)serializer;

- (id)requestBySerializingRequest:(id)a0 withParameters:(id)a1 error:(id *)a2;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
