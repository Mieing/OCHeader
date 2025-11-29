@class AWEStoryProgressContainerConfig, AWESearchAlbumProgressConfig;

@interface AWESearchImageProgressComponentModel : NSObject

@property (retain, nonatomic) AWEStoryProgressContainerConfig *containerConfig;
@property (retain, nonatomic) AWESearchAlbumProgressConfig *progressConfig;
@property (nonatomic) long long totalCount;
@property (nonatomic) long long currentIndex;
@property (nonatomic) double updateDuration;
@property (nonatomic) double currentProcess;

- (void).cxx_destruct;

@end
