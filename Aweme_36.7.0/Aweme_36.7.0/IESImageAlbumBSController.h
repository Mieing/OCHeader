@class NSString;

@interface IESImageAlbumBSController : NSObject

@property (copy, nonatomic) NSString *targetSelectedGear;
@property (copy, nonatomic) NSString *imageSelectedGear;
@property (nonatomic) long long networkSpeed;

+ (id)sharedInstance;

- (id)selectModelAndUpdateConfigWithBSConfigModel:(id)a0 BSAutoBitrateModel:(id)a1;
- (void).cxx_destruct;

@end
