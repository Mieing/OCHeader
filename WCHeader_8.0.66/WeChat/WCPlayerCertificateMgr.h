@class NSString, NSData, NSLock;

@interface WCPlayerCertificateMgr : NSObject

@property (retain, nonatomic) NSString *certificateUrl;
@property (retain, nonatomic) NSString *cachedDir;
@property (retain, nonatomic) NSString *certificateCachedPath;
@property (retain, nonatomic) NSData *certificateData;
@property (retain, nonatomic) NSLock *lockOfCertificateFile;
@property (retain, nonatomic) NSString *errorDes;
@property (retain, nonatomic) NSLock *lockOfCompletion;
@property (copy, nonatomic) id /* block */ completion;

- (id)initWithCertificateUrl:(id)a0;
- (void)getCertificateWithCompletion:(id /* block */)a0;
- (void)getCertificateFromServerWith:(id)a0;
- (id)getCertificateLocal;
- (void)writeCertificateToLocalWithUrl:(id)a0 cerData:(id)a1;
- (void)safeExcuteCompletionBlock;
- (void).cxx_destruct;

@end
