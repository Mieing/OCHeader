@class NSString;

@interface AWETokamakCloudCommandUserDefaults : NSObject <AWECustomCommandHandler>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)createInstance;
+ (id)cloudCommandIdentifier;

- (void)uploadCommandResultSuccessedWithParams:(id)a0;
- (void)uploadCommandResultFailedWithParams:(id)a0 error:(id)a1;
- (void)excuteCommandWithParams:(id)a0 completion:(id /* block */)a1;
- (void)setByKey:(id)a0 completion:(id /* block */)a1;
- (void)removeByKey:(id)a0 completion:(id /* block */)a1;

@end
