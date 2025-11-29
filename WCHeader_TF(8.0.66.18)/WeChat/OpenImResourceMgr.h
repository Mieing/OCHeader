@class NSString, NSMutableDictionary, OpenImResourceStorage;

@interface OpenImResourceMgr : NSObject <IMMLanguageMgrExt, PBMessageObserverDelegate> {
    NSMutableDictionary *m_TypeResource;
    OpenImResourceStorage *m_resourceStorage;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)resourcePathType;
+ (BOOL)isWeWorkOpenIm:(id)a0;

- (id)init;
- (void)dealloc;
- (id)tryLoadOpenImTypeResource:(id)a0;
- (BOOL)checkOpenImTypeResourceLanguageIsEqual:(id)a0;
- (void)saveOpenImTypeResource;
- (BOOL)checkOpenImResourceReady:(id)a0 wordings:(id)a1 checkTime:(BOOL)a2;
- (BOOL)checkOpenImResourceReady:(id)a0 subType:(unsigned int)a1 wordings:(id)a2 checkTime:(BOOL)a3;
- (BOOL)tryUpdateOpenImResource:(id)a0 wordings:(id)a1;
- (BOOL)tryUpdateOpenImResource:(id)a0 subType:(unsigned int)a1 wordings:(id)a2;
- (BOOL)tryUpdateOpenImResource:(id)a0 wordings:(id)a1 checkTime:(BOOL)a2;
- (BOOL)tryUpdateOpenImResource:(id)a0 subType:(unsigned int)a1 wordings:(id)a2 checkTime:(BOOL)a3;
- (id)GetOpenImAppidResource:(id)a0 subType:(unsigned int)a1;
- (id)openimAcctType:(id)a0;
- (id)openimAcctType:(id)a0 subType:(unsigned int)a1;
- (unsigned int)openimFuncFlag:(id)a0 subType:(unsigned int)a1;
- (id)openimName:(id)a0 subType:(unsigned int)a1;
- (id)openimIconURL:(id)a0 subType:(unsigned int)a1;
- (id)openimIntroURL:(id)a0 subType:(unsigned int)a1;
- (id)openimCustomHeader:(id)a0 subType:(unsigned int)a1;
- (id)openimFuncTip:(id)a0 subType:(unsigned int)a1;
- (id)openimDescIconUrl:(id)a0 subType:(unsigned int)a1;
- (id)openimContactListName:(id)a0;
- (id)openimContactListIconUrl:(id)a0;
- (id)openimCardName:(id)a0;
- (id)openimWording:(id)a0 Appid:(id)a1;
- (id)openimWording:(id)a0 Appid:(id)a1 subType:(unsigned int)a2;
- (id)openimWordingQuanPin:(id)a0 Appid:(id)a1;
- (id)openimWordingQuanPin:(id)a0 Appid:(id)a1 subType:(unsigned int)a2;
- (id)openimWordingShortPY:(id)a0 Appid:(id)a1;
- (id)openimWordingShortPY:(id)a0 Appid:(id)a1 subType:(unsigned int)a2;
- (BOOL)updateOpenImResourceFromServer:(id)a0 subType:(unsigned int)a1 wordings:(id)a2;
- (BOOL)doUpdateOpenImResourceFromServer:(id)a0 subType:(unsigned int)a1 wordings:(id)a2 checkTime:(BOOL)a3;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (id)getWeWorkOpenImAcctType;
- (void).cxx_destruct;

@end
