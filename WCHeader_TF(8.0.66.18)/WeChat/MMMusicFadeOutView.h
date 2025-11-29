@class NSString, MMMusicFadeOutLayer;

@interface MMMusicFadeOutView : UIView <MMMusicFadeOutItem>

@property (retain, nonatomic) MMMusicFadeOutLayer *gradientMaskLayer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
