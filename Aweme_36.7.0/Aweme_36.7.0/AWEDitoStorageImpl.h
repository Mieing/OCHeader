@class NSString;

@interface AWEDitoStorageImpl : NSObject <DitoStorageProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)ditoStorageSetObject:(id)a0 forKey:(id)a1;
- (id)ditoStorageObjectForKey:(id)a0;

@end
