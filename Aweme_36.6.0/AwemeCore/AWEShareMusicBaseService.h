@class NSString;

@interface AWEShareMusicBaseService : AWEShareCommonImpl <AWEShareMusic>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)showPanelWithMusic:(id)a0 extraLogInfo:(id)a1 onViewController:(id)a2;
- (id)contextWithMusic:(id)a0;
- (id)statsShareMusicStage;

@end
