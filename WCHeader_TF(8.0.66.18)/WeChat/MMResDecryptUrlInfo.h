@class NSString;

@interface MMResDecryptUrlInfo : MMObject

@property (retain, nonatomic) NSString *resUrl;
@property (retain, nonatomic) NSString *version;
@property (retain, nonatomic) NSString *aesKey;
@property (retain, nonatomic) NSString *md5;
@property (retain, nonatomic) NSString *originalMd5;
@property (retain, nonatomic) NSString *originalSha1;

- (void).cxx_destruct;

@end
