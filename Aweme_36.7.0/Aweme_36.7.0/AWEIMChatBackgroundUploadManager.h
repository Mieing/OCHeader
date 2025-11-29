@class NSString;
@protocol AWEIMNextGenerationUploadFileClientProtocol;

@interface AWEIMChatBackgroundUploadManager : NSObject <AWEIMChatBackgroundUploadInterface>

@property (retain) id<AWEIMNextGenerationUploadFileClientProtocol> unencryptedUploadClient;
@property (retain) id<AWEIMNextGenerationUploadFileClientProtocol> encryptedUploadClient;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedManager;

- (void)eventManagerDidUpdate:(id)a0;
- (void)uploadImage:(id)a0 completion:(id /* block */)a1;
- (void)uploadImageV2:(id)a0 completion:(id /* block */)a1;
- (void)uploadImageBase64String:(id)a0 encrypted:(BOOL)a1 completion:(id /* block */)a2;
- (BOOL)isAuthError:(id)a0;
- (id)cropAndCompressImage:(id)a0;
- (void)p_uploadWithContext:(id)a0 leftRetryCount:(long long)a1 encrypted:(BOOL)a2;
- (void).cxx_destruct;

@end
