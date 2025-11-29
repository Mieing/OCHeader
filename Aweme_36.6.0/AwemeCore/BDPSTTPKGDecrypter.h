@class NSString, NSData, NSMutableData, NSError, BDPSTTPKGHeaders;
@protocol BDPSTTPKGDecompressionProtocol;

@interface BDPSTTPKGDecrypter : NSObject

@property (readonly, copy, nonatomic) NSString *mpId;
@property (nonatomic) unsigned long long pkgType;
@property (nonatomic) unsigned long long spkgVersion;
@property (retain, nonatomic) id<BDPSTTPKGDecompressionProtocol> compression;
@property (copy, nonatomic) NSData *keyData;
@property (retain, nonatomic) NSMutableData *headersBuffer;
@property (nonatomic) BOOL rc4Status;
@property (retain, nonatomic) NSMutableData *rc4Buffer;
@property (nonatomic) unsigned long long xorStatus;
@property (retain, nonatomic) NSError *error;
@property (retain, nonatomic) BDPSTTPKGHeaders *sttpkgHeaders;
@property (copy, nonatomic) id /* block */ headersCallback;
@property (copy, nonatomic) id /* block */ decryptedDataCallback;
@property (copy, nonatomic) id /* block */ errorCallback;

- (void)didError:(id)a0;
- (id)headerParse:(id)a0;
- (id)decompressionInit:(unsigned long long)a0 error:(id *)a1;
- (id)_hashData:(id)a0;
- (id)_rc4Decrypt:(id)a0;
- (id)_xor:(id)a0;
- (id)initWithMpId:(id)a0;
- (void)write:(id)a0;
- (void).cxx_destruct;
- (id)initWithURL:(id)a0;
- (id)decrypt:(id)a0;

@end
