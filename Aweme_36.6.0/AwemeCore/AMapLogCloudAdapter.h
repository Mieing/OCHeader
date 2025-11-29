@class NSDictionary;

@interface AMapLogCloudAdapter : AMapCloudConfig

@property (readonly, nonatomic) NSDictionary *cloudConfigConvertDic;

- (BOOL)logAble;
- (BOOL)mobileUploadAble;
- (BOOL)debugAndInfoWriteAble;
- (BOOL)debugAndInfoUploadAble;

@end
