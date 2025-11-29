@class NSString;

@interface IESFallbackSchemaResolver : NSObject <IESPrefetchSchemaResolver>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)shouldInterceptHierachicalSchema:(id)a0;
- (id)resolveFlatSchema:(id)a0;

@end
