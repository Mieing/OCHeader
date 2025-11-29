@class NSArray;

@interface BDPLaunchAppSceneConfig : NSObject

@property (nonatomic) BOOL canLaunchApp;
@property (nonatomic) BOOL canDownloadApp;
@property (copy, nonatomic) NSArray *launchAllowList;
@property (copy, nonatomic) NSArray *launchGrayList;
@property (copy, nonatomic) NSArray *downloadAllowList;
@property (copy, nonatomic) NSArray *downloadGrayList;

+ (id)modelCustomPropertyMapper;
+ (void)bootstrapLaunch;

- (BOOL)canLaunchAppInScene:(id)a0;
- (BOOL)canDownloadAppInScene:(id)a0;
- (void).cxx_destruct;

@end
