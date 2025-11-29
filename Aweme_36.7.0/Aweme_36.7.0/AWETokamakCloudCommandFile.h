@class NSString;

@interface AWETokamakCloudCommandFile : NSObject <AWECustomCommandHandler>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)createInstance;
+ (id)cloudCommandIdentifier;

- (void)uploadCommandResultSuccessedWithParams:(id)a0;
- (void)uploadCommandResultFailedWithParams:(id)a0 error:(id)a1;
- (void)excuteCommandWithParams:(id)a0 completion:(id /* block */)a1;
- (void)createFile:(id)a0 completion:(id /* block */)a1;
- (void)createBinaryFileByBase64:(id)a0 completion:(id /* block */)a1;
- (void)deleteFile:(id)a0 completion:(id /* block */)a1;

@end
