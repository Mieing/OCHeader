@class NSString, NSData, NSMutableArray;

@interface GCCertificateData : NSObject

@property (retain, nonatomic) NSString *md5;
@property (retain, nonatomic) NSString *issuer;
@property (retain, nonatomic) NSString *subject;
@property (retain, nonatomic) NSData *certificateData;
@property (retain, nonatomic) NSString *x509desc;
@property (retain, nonatomic) NSMutableArray *urlArray;

- (id)init;
- (void).cxx_destruct;

@end
