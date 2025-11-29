@class NSString;

@interface BDECRabbiFlyLoadingView : UIView <BDECRabbiFlyILoadingView>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)startAnimation;
- (void)stopAnimation;

@end
