@class NSString, DUXPopover;

@interface AWELandscapeAutoRotateGuide : AWELandscapeBaseGuide <AWELandscapeGuideProtocol>

@property (retain, nonatomic) DUXPopover *autoRotateGuidPopover;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)canShow;
- (void)dismiss;
- (void).cxx_destruct;
- (long long)priority;
- (id)identifier;
- (BOOL)show;

@end
