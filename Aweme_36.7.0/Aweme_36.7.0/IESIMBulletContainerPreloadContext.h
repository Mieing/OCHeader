@class NSString;

@interface IESIMBulletContainerPreloadContext : NSObject

@property (copy, nonatomic) NSString *bulletScene;
@property (nonatomic) long long preloadScene;
@property (nonatomic) BOOL shouldSyncMainThread;
@property (copy, nonatomic) NSString *reuseIdentifier;
@property (nonatomic) double timestampStart;

- (void).cxx_destruct;

@end
