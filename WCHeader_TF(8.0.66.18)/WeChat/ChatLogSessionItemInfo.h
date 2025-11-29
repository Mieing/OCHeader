@class NSString;

@interface ChatLogSessionItemInfo : NSObject <PBCoding>

@property (copy, nonatomic) NSString *session;
@property (copy, nonatomic) NSString *username;
@property (nonatomic) unsigned long long msgCount;
@property (nonatomic) unsigned long long msgEstimateSize;
@property (nonatomic) unsigned int msgOldestTime;
@property (nonatomic) unsigned int msgNewestTime;
@property (nonatomic) unsigned int sessionType;
@property (nonatomic) unsigned long long resSize;
@property (nonatomic) unsigned long long imageSize;
@property (nonatomic) unsigned long long videoSize;
@property (nonatomic) unsigned long long appFileSize;
@property (nonatomic) unsigned long long otherFileSize;
@property (nonatomic) unsigned int lastMsgTime;
@property (nonatomic) unsigned long long thumbFileSize;
@property (nonatomic) unsigned long long thumbFileCount;
@property (nonatomic) unsigned long long audioFileSize;
@property (nonatomic) unsigned long long audioFileCount;
@property (nonatomic) unsigned long long videoThumbSize;
@property (nonatomic) unsigned long long videoThumbCount;
@property (nonatomic) unsigned long long videoFileCount;
@property (nonatomic) unsigned long long imageThumbSize;
@property (nonatomic) unsigned long long imageThumbCount;
@property (nonatomic) unsigned long long imageFileCount;
@property (nonatomic) unsigned long long appThumbSize;
@property (nonatomic) unsigned long long appThumbCount;
@property (nonatomic) unsigned long long recordFileCount;
@property (nonatomic) unsigned long long fileFileCount;
@property (nonatomic) unsigned long long rawImageSize;
@property (nonatomic) unsigned long long rawImageCount;
@property (nonatomic) unsigned long long rawVideoSize;
@property (nonatomic) unsigned long long rawVideoCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_session;
+ (void)PBArrayAdd_username;
+ (void)PBArrayAdd_msgCount;
+ (void)PBArrayAdd_msgEstimateSize;
+ (void)PBArrayAdd_msgOldestTime;
+ (void)PBArrayAdd_msgNewestTime;
+ (void)PBArrayAdd_sessionType;
+ (void)PBArrayAdd_resSize;
+ (void)PBArrayAdd_imageSize;
+ (void)PBArrayAdd_videoSize;
+ (void)PBArrayAdd_appFileSize;
+ (void)PBArrayAdd_otherFileSize;
+ (void)PBArrayAdd_lastMsgTime;
+ (void)PBArrayAdd_thumbFileSize;
+ (void)PBArrayAdd_thumbFileCount;
+ (void)PBArrayAdd_audioFileSize;
+ (void)PBArrayAdd_audioFileCount;
+ (void)PBArrayAdd_videoThumbSize;
+ (void)PBArrayAdd_videoThumbCount;
+ (void)PBArrayAdd_videoFileCount;
+ (void)PBArrayAdd_imageThumbSize;
+ (void)PBArrayAdd_imageThumbCount;
+ (void)PBArrayAdd_imageFileCount;
+ (void)PBArrayAdd_appThumbSize;
+ (void)PBArrayAdd_appThumbCount;
+ (void)PBArrayAdd_recordFileCount;
+ (void)PBArrayAdd_fileFileCount;
+ (void)PBArrayAdd_rawImageSize;
+ (void)PBArrayAdd_rawImageCount;
+ (void)PBArrayAdd_rawVideoSize;
+ (void)PBArrayAdd_rawVideoCount;
+ (void)initialize;

- (id)getPBPropertyTable;
- (void).cxx_destruct;

@end
