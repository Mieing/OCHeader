@class NSString, NSData, TPLock;

@interface TPCertificateMgr : NSObject

@property (retain, nonatomic) NSString *certificateUrl;
@property (retain, nonatomic) NSString *cachedDir;
@property (retain, nonatomic) NSString *certificateCachedPath;
@property (retain, nonatomic) NSData *certificateData;
@property (retain, nonatomic) TPLock *lockOfCertificateFile;
@property (retain, nonatomic) TPLock *lockOfCompletion;
@property (copy, nonatomic) id /* block */ completion;

- (id)initWithCertificateUrl:(id)a0 cacheDir:(id)a1;
- (void)getCertificateWithCompletion:(id /* block */)a0;
- (void)getCertificateFromServerWith:(id)a0;
- (id)getCertificateFromLocalWith:(id)a0;
- (void)writeCertificateToLocalWithUrl:(id)a0 cerData:(id)a1;
- (void)tryToExcuteBlock:(id /* block */)a0 withCerData:(id)a1;
- (void)clearCompletionBlockSafely;
- (void).cxx_destruct;

@end
