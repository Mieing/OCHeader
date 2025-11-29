@class NSString;

@interface AWEStudioSelectMusicViewControllerBuilder : NSObject <ACCSelectMusicViewControllerBuilderProtocol, AWEStudioInterfaceMusicViewControllerBuilderProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)createTransitionDelegate;
- (id)createInsetsLabel;
- (id)createProgressViewWithType:(long long)a0 title:(id)a1;

@end
