@class NSString, EncryptionInfo, UDRExtInfo;

@interface UDRBugFixCDNMessage : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *projectId;
@property (retain, nonatomic) NSString *resourceName;
@property (nonatomic) unsigned int localResourceVersion;
@property (nonatomic) unsigned int newResourceVersion;
@property (nonatomic) unsigned int newResourceSize;
@property (retain, nonatomic) NSString *newResourceMd5;
@property (retain, nonatomic) NSString *newResourceUrl;
@property (nonatomic) unsigned int diffAlgo;
@property (nonatomic) unsigned int diffSize;
@property (retain, nonatomic) NSString *diffMd5;
@property (retain, nonatomic) NSString *diffUrl;
@property (retain, nonatomic) UDRExtInfo *extInfo;
@property (nonatomic) unsigned int resourceStoreType;
@property (retain, nonatomic) EncryptionInfo *diffEncryptionInfo;
@property (retain, nonatomic) EncryptionInfo *resourceEncryptionInfo;

+ (void)initialize;

@end
