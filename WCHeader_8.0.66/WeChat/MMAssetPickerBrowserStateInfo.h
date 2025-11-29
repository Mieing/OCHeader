@class NSString;

@interface MMAssetPickerBrowserStateInfo : NSObject

@property (nonatomic) BOOL selectable;
@property (nonatomic) BOOL videoCropable;
@property (nonatomic) unsigned long long imageSize;
@property (retain, nonatomic) NSString *errorInfo;
@property (nonatomic) BOOL isiCloudError;
@property (nonatomic) unsigned long long checkResult;

+ (id)gifStateInfoWithImageData:(id)a0 image:(id)a1 isSend:(BOOL)a2 needCheckValid:(BOOL)a3 maxSize:(unsigned int)a4;
+ (id)videoStateInfoWithAvAsset:(id)a0 videoPath:(id)a1 pickerScene:(int)a2 isSlowmotion:(BOOL)a3;
+ (void)reportSelectImageFailedWithFileSize:(unsigned int)a0;

- (void).cxx_destruct;

@end
