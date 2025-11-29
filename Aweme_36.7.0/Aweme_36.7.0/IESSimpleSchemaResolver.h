@class NSString;

@interface IESSimpleSchemaResolver : NSObject <IESPrefetchSchemaResolver>

@property (copy, nonatomic) NSString *hostname;
@property (copy, nonatomic) NSString *key;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
