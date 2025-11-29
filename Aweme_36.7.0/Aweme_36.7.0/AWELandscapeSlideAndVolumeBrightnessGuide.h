@class NSString, AWELandScapeGuideView;

@interface AWELandscapeSlideAndVolumeBrightnessGuide : AWELandscapeBaseGuide <AWELandscapeGuideProtocol>

@property (retain, nonatomic) AWELandScapeGuideView *guideView;
@property (nonatomic) BOOL canSlide;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)canShow;
- (id)initWithTargetView:(id)a0 canSlid:(BOOL)a1 pageContext:(id)a2;
- (BOOL)canShowSlideGuide;
- (void)dismiss;
- (void).cxx_destruct;
- (long long)priority;
- (id)identifier;
- (BOOL)show;

@end
