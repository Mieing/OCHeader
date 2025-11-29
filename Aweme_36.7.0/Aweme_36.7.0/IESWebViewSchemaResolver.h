@class NSString, IESSimpleSchemaResolver;

@interface IESWebViewSchemaResolver : NSObject <IESPrefetchSchemaResolver>

@property (retain, nonatomic) IESSimpleSchemaResolver *simpleResolver;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
