@class NSString;

@interface AWELiveConfigNavigationControllerServiceImpl : NSObject <IESLiveConfigNavigationControllerService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)colorConfigValueForType:(long long)a0;
- (id)createConfigNavigationControllerWithType:(long long)a0;

@end
