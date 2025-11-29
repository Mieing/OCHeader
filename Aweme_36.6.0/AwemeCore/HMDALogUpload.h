@class NSString;

@interface HMDALogUpload : NSObject <AWECloudCommandProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)createInstance;
+ (void)load;

- (void)excuteCommand:(id)a0 completion:(id /* block */)a1;
- (void)_uploadLogFileDict:(id)a0 commandModel:(id)a1 originFilesCount:(long long)a2 completion:(id /* block */)a3 userBlock:(id /* block */)a4;

@end
