@interface MMAlbumAuthorizationReportObject : NSObject

@property (nonatomic) int scene;
@property (nonatomic) BOOL clickSetting;
@property (nonatomic) BOOL clickChoosePart;
@property (nonatomic) BOOL clickBanner;
@property (nonatomic) BOOL clickAddPhoto;
@property (nonatomic) long long addPhotoCount;
@property (nonatomic) unsigned int exception;

+ (unsigned int)getAuthorizationStatus;
+ (void)reportiOS14OnceIfNeeded;

- (void)report;

@end
