@interface AFPropertyListRequestSerializer : AFHTTPRequestSerializer

@property (nonatomic) unsigned long long format;
@property (nonatomic) unsigned long long writeOptions;

+ (id)serializerWithFormat:(unsigned long long)a0 writeOptions:(unsigned long long)a1;
+ (id)serializer;

- (id)requestBySerializingRequest:(id)a0 withParameters:(id)a1 error:(id *)a2;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
