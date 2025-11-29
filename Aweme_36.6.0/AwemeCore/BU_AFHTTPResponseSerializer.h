@class NSIndexSet, NSSet, NSString;

@interface BU_AFHTTPResponseSerializer : NSObject <BU_AFURLResponseSerialization>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSIndexSet *acceptableStatusCodes;
@property (copy, nonatomic) NSSet *acceptableContentTypes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)serializer;

- (id)responseObjectForResponse:(id)a0 data:(id)a1 error:(id *)a2;
- (BOOL)validateResponse:(id)a0 data:(id)a1 error:(id *)a2;
- (void).cxx_destruct;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
