@class NSArray, NSString;

@interface WCMomentsAnimatedFireworksManager : MMUserService <MMServiceProtocol>

@property (copy, nonatomic) NSArray *animationFireworkImages;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onServiceMemoryWarning;
- (id)createAnimatedFireworkView;
- (void)loadAnimatedFireworkImagesIfNeeded;
- (void)clearAnimatedFireworkImages;
- (void).cxx_destruct;

@end
