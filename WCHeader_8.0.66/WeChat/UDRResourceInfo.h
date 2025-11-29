@class NSString, UDRExtInfo;

@interface UDRResourceInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *projectId;
@property (retain, nonatomic) NSString *resourceName;
@property (nonatomic) unsigned int resourceVersion;
@property (nonatomic) unsigned int resourceSize;
@property (retain, nonatomic) NSString *md5;
@property (retain, nonatomic) NSString *url;
@property (nonatomic) unsigned int createTime;
@property (retain, nonatomic) UDRExtInfo *extInfo;

+ (void)initialize;

@end
