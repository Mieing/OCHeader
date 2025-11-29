@class NSString;

@interface AWEPadFullPageHeaderAdapter : NSObject <AWEPadFullPageHeaderAdapter>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)weakTargetClass;

- (double)headerMarginWithView:(id)a0;
- (void)updateHeaderInfoViewLayout;
- (double)sliderContainerHeightIfLandScapeWithMargin:(double)a0;
- (double)sliderContainerHeightOffsetVerticalWithMargin:(double)a0;
- (double)sliderContainerWidthWithView:(id)a0;
- (void)performUpdateHeaderUI:(id /* block */)a0;
- (id)weakTarget;

@end
