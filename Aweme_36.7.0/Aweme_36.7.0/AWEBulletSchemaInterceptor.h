@class NSString;

@interface AWEBulletSchemaInterceptor : NSObject <BDXSchemaInterceptor>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)xSchema:(Class)a0 getAppendedQueryItemsWithSchema:(id)a1;

@end
