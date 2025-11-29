@class EncryptMetaData, NSString, ExtInfo, NSMutableArray;

@interface OneResourceDescription : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *projectId;
@property (retain, nonatomic) NSString *resourceName;
@property (nonatomic) unsigned int resourceVersion;
@property (nonatomic) unsigned int resourceSize;
@property (retain, nonatomic) NSString *md5;
@property (retain, nonatomic) NSString *url;
@property (nonatomic) unsigned int createTime;
@property (retain, nonatomic) EncryptMetaData *encryptMetaData;
@property (retain, nonatomic) ExtInfo *extInfo;
@property (retain, nonatomic) NSMutableArray *versionMetaDataList;
@property (retain, nonatomic) NSMutableArray *fallbackMetaDataList;

+ (void)initialize;

@end
