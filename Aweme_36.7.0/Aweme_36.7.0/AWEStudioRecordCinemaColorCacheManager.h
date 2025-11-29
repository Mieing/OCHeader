@class NSArray, UIImage;

@interface AWEStudioRecordCinemaColorCacheManager : NSObject

@property (retain, nonatomic) NSArray *threeColors;
@property (retain, nonatomic) UIImage *blurImage;

+ (id)shared;

- (void)p_synchronize;
- (void)p_recover;
- (void).cxx_destruct;
- (id)init;
- (void)applicationDidEnterBackground:(id)a0;

@end
