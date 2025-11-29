@class NSString, EncryptMetaData, ExtInfo;

@interface ResourceVersionMetaData : WXPBGeneratedMessage

@property (nonatomic) unsigned int compressAlgorithm;
@property (nonatomic) unsigned int priority;
@property (nonatomic) unsigned int resourceSize;
@property (retain, nonatomic) NSString *md5;
@property (retain, nonatomic) NSString *url;
@property (nonatomic) unsigned int createTime;
@property (retain, nonatomic) EncryptMetaData *encryptMetaData;
@property (retain, nonatomic) ExtInfo *extInfo;

+ (void)initialize;

@end
