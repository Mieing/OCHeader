@class NSString, NSMutableDictionary;

@interface IESIMEncryptImageDisplayService : HTSService <IESIMEncryptImageDisplayServiceProtocol>

@property (retain, nonatomic) NSMutableDictionary *mediaDecrypterCache;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)requestLocalEncryptCoverImageWithResource:(id)a0 completion:(id /* block */)a1;
- (void)requestLocalEncryptOriginalImageWithResource:(id)a0 completion:(id /* block */)a1;
- (void)requestEncryptCoverImageWithResource:(id)a0 completion:(id /* block */)a1;
- (void)decryptVideoFileAtPath:(id)a0 targetPath:(id)a1 decryptionKey:(id)a2 completion:(id /* block */)a3;
- (void)requestVideoPlayInfoWithTosKey:(id)a0 completion:(id /* block */)a1;
- (id)videoIdFromTosKey:(id)a0;
- (void)requestEncryptOriginalImageWithResource:(id)a0 completion:(id /* block */)a1;
- (void)requestEncryptImageWithResource:(id)a0 fileType:(int)a1 urlString:(id)a2 needNetwork:(BOOL)a3 completion:(id /* block */)a4;
- (id)chatAlbumImageQueue;
- (void).cxx_destruct;

@end
