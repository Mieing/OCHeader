@class NSString;

@interface AWEShareToStoryModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *shareToStoryType;
@property (nonatomic) BOOL isOpenPlatform;
@property (copy, nonatomic) NSString *openPlatformKey;
@property (copy, nonatomic) NSString *shareText;
@property (retain, nonatomic) NSString *shareAwemeBackupReason;
@property (nonatomic) BOOL needShareBackup;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
