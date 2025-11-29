@class NSString;

@interface BU_AFJSONRequestSerializer : BU_AFHTTPRequestSerializer <BUADJsonRequestSerializerProtocol>

@property (nonatomic) unsigned long long writingOptions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) unsigned long long cachePolicy;
@property (nonatomic) double timeoutInterval;
@property (nonatomic) BOOL allowsCellularAccess;

+ (id)serializerWithWritingOptions:(unsigned long long)a0;
+ (id)serializer;

- (id)requestBySerializingRequest:(id)a0 withParameters:(id)a1 error:(id *)a2;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
