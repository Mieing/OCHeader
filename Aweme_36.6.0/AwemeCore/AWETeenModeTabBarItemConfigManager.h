@class NSString;

@interface AWETeenModeTabBarItemConfigManager : NSObject <AWETeenModeTabBarItemConfigCallProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)channel:(id)a0 showBackgroundImagesWithProgress:(double)a1;

@end
