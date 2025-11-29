@class NSString;

@interface AWEShareHotspotService : AWEShareCommonImpl <AWEShareHotspot>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)showPanelWithParams:(id)a0 headerImage:(id)a1 snapshotImage:(id)a2 roundedOffset:(double)a3 onViewController:(id)a4;
- (void)showPanelWithHotSearch:(id)a0 onViewController:(id)a1;

@end
