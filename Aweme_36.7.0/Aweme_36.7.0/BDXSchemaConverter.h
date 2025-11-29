@class NSURL, NSMutableArray, NSString;

@interface BDXSchemaConverter : NSObject <BDSchemaInterceptorProtocol>

@property (retain, nonatomic) NSMutableArray *interceptorList;
@property (readonly, nonatomic) NSURL *replacedURL;
@property (readonly, nonatomic) NSURL *resolvedURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)converterWithInterceptor:(id)a0;

- (long long)__getSchemaType:(id)a0;
- (void)decorateSchemaWithAnniePro:(id)a0;
- (id)__resolveToBulletSchema:(id)a0 type:(long long)a1;
- (void).cxx_destruct;
- (BOOL)convert:(id)a0;

@end
