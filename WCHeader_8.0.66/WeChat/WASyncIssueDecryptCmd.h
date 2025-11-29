@class NSString;

@interface WASyncIssueDecryptCmd : WASyncBaseCmd

@property (copy, nonatomic) NSString *decryptKey;
@property (nonatomic) unsigned int appVersion;
@property (copy, nonatomic) NSString *decryptMd5;
@property (nonatomic) unsigned long long encryptType;

- (id)description;
- (void).cxx_destruct;

@end
