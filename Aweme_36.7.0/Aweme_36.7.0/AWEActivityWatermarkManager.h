@class NSString, NSFileManager, NSArray;

@interface AWEActivityWatermarkManager : NSObject

@property (copy, nonatomic) NSString *watermarkCompressPath;
@property (copy, nonatomic) NSString *watermarkUncompressPath;
@property (retain, nonatomic) NSFileManager *fileManager;
@property (nonatomic, getter=isActivityWatermarkAvailable) BOOL activityWatermarkAvailable;
@property (copy, nonatomic) NSArray *watermarkImageArray;
@property (copy, nonatomic) NSArray *activityStickerIDArray;

+ (id)sharedInstance;

- (BOOL)needAddActivityEndWatermark;
- (void)downloadActivityWatermark;
- (BOOL)needDownloadActivityWatermark;
- (BOOL)uncompressActivityWaterMarkZip;
- (void)removeAllWatermarkResources;
- (id)activityWaterMark;
- (id)activityEndWatermarkTitle;
- (id)activityEndWatermarkSubTitle;
- (void).cxx_destruct;
- (id)init;

@end
