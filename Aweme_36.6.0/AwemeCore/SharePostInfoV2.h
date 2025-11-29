@class NSString;

@interface SharePostInfoV2 : GPBMessage

@property (copy, nonatomic) NSString *shareText;
@property (nonatomic) BOOL hasShareText;
@property (copy, nonatomic) NSString *shareType;
@property (nonatomic) BOOL hasShareType;
@property (nonatomic) int isOpenPlatform;
@property (nonatomic) BOOL hasIsOpenPlatform;
@property (copy, nonatomic) NSString *openPlatformKey;
@property (nonatomic) BOOL hasOpenPlatformKey;
@property (copy, nonatomic) NSString *shareBackupReason;
@property (nonatomic) BOOL hasShareBackupReason;
@property (nonatomic) BOOL needShareBackup;
@property (nonatomic) BOOL hasNeedShareBackup;

+ (id)descriptor;

@end
