@class NSMutableSet;

@interface BDPBusinessServiceCenterPreloadContext : NSObject

@property (retain, nonatomic) NSMutableSet *loadedClassSet;
@property (retain, nonatomic) NSMutableSet *unloadedClassSet;
@property (nonatomic) BOOL isHasLaunch;

- (void)bindPreloadProtocol:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
