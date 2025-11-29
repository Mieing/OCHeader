@class NSString;

@interface FacebookContactInfoAssist : PluginContactInfoAssist <IMMFacebookMgrExt>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithContact:(id)a0 delegate:(id)a1;
- (void)reloadInstalledTableViewData;
- (id)getPluginIntro;
- (void)showBindView;
- (void)onBindFacebookFinish:(unsigned int)a0;
- (void)onUnBindFacebookFinish:(unsigned int)a0;

@end
