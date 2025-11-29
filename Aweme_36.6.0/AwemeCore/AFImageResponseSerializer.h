@interface AFImageResponseSerializer : AFHTTPResponseSerializer

@property (nonatomic) double imageScale;
@property (nonatomic) BOOL automaticallyInflatesResponseImage;

- (id)responseObjectForResponse:(id)a0 data:(id)a1 error:(id *)a2;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
