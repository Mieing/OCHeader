@class NSString, NSDictionary;

@interface BDVideoUploadInfo : NSObject

@property (copy, nonatomic) NSString *aigcMeta;
@property (copy, nonatomic) NSString *vid;
@property (copy, nonatomic) NSString *mid;
@property (copy, nonatomic) NSString *oid;
@property (copy, nonatomic) NSString *md5;
@property (copy, nonatomic) NSDictionary *videoMetaInfo;
@property (copy, nonatomic) NSDictionary *encryptionInfo;
@property (copy, nonatomic) NSString *coverURI;
@property (copy, nonatomic) NSString *callbackArgs;
@property (copy, nonatomic) NSDictionary *userInfo;

- (void).cxx_destruct;

@end
