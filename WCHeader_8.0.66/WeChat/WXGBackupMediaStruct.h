@class NSString;

@interface WXGBackupMediaStruct : NSObject

@property (nonatomic) long long createTime;
@property (nonatomic) long long msgSvrID;
@property (nonatomic) unsigned long long mediaSize;
@property (retain, nonatomic) NSString *mediaPath;
@property (retain, nonatomic) NSString *mediaID;
@property (nonatomic) int mediaType;
@property (retain, nonatomic) NSString *md5;
@property (retain, nonatomic) NSString *mediaCdnUrl;
@property (nonatomic) unsigned int mediaCdnType;
@property (nonatomic) unsigned long long mediaCdnSize;
@property (retain, nonatomic) NSString *mediaAesKey;

- (void).cxx_destruct;

@end
