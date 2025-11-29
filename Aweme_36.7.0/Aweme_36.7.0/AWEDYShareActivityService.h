@class NSString;

@interface AWEDYShareActivityService : AWEShareCommonImpl <AWEShareActivity>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)showPanelWithActivityModel:(id)a0;

@end
