@class AWECloudAlbumCostTimer, NSNumber;

@interface AWECloudAlbumDetailTimeTracker : NSObject

@property (retain, nonatomic) AWECloudAlbumCostTimer *timer;
@property (retain, nonatomic) NSNumber *albumId;

- (void)trackIfNeeded;
- (void).cxx_destruct;
- (void)start;

@end
