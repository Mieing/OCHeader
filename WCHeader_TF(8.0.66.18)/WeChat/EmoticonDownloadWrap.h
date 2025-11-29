@class NSString;

@interface EmoticonDownloadWrap : MMObject

@property (retain, nonatomic) NSString *md5;
@property (retain, nonatomic) NSString *aesKey;
@property (retain, nonatomic) NSString *cdnUrl;
@property (retain, nonatomic) NSString *encryptUrl;
@property (retain, nonatomic) NSString *externMd5;
@property (retain, nonatomic) NSString *externUrl;
@property (retain, nonatomic) NSString *tpUrl;
@property (retain, nonatomic) NSString *authKey;

- (void).cxx_destruct;

@end
