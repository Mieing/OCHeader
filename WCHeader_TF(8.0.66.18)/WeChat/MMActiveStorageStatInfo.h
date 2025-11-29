@class NSString;

@interface MMActiveStorageStatInfo : NSObject <PBCoding>

@property (nonatomic) unsigned long long videoThumbSize;
@property (nonatomic) unsigned long long videoThumbCount;
@property (nonatomic) unsigned long long videoSize;
@property (nonatomic) unsigned long long videoCount;
@property (nonatomic) unsigned long long audioSize;
@property (nonatomic) unsigned long long audioCount;
@property (nonatomic) unsigned long long imageThumbSize;
@property (nonatomic) unsigned long long imageThumbCount;
@property (nonatomic) unsigned long long imageSize;
@property (nonatomic) unsigned long long imageCount;
@property (nonatomic) unsigned long long appThumbSize;
@property (nonatomic) unsigned long long appThumbCount;
@property (nonatomic) unsigned long long appFileSize;
@property (nonatomic) unsigned long long appFileCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_videoThumbSize;
+ (void)PBArrayAdd_videoThumbCount;
+ (void)PBArrayAdd_videoSize;
+ (void)PBArrayAdd_videoCount;
+ (void)PBArrayAdd_audioSize;
+ (void)PBArrayAdd_audioCount;
+ (void)PBArrayAdd_imageThumbSize;
+ (void)PBArrayAdd_imageThumbCount;
+ (void)PBArrayAdd_imageSize;
+ (void)PBArrayAdd_imageCount;
+ (void)PBArrayAdd_appThumbSize;
+ (void)PBArrayAdd_appThumbCount;
+ (void)PBArrayAdd_appFileSize;
+ (void)PBArrayAdd_appFileCount;
+ (void)initialize;

@end
