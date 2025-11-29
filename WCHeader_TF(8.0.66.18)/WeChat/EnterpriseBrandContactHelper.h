@class NSString;
@protocol EnterpriseBrandContactHelperDelegate;

@interface EnterpriseBrandContactHelper : MMObject <WCActionSheetDelegate, IEnterpriseBrandContactMgrExt, PBMessageObserverDelegate> {
    NSString *_contextBrandUserName;
    unsigned int _contextScene;
    unsigned int _useScene;
}

@property (weak, nonatomic) id<EnterpriseBrandContactHelperDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)initWithScene:(unsigned int)a0;
- (void)disableSubBrand:(id)a0;
- (void)confirmDisableSubBrand:(id)a0;
- (void)exposeWeWork:(id)a0 scene:(unsigned int)a1;
- (void)openWeWork:(id)a0 withNavController:(id)a1;
- (void)confirmWeWorkDownloadWithActionSheet;
- (void)confirmWeWorkDownloadWithAlert;
- (void)openWeWorkDownload;
- (void)openWeWorkApp;
- (void)reportWeWork:(unsigned int)a0;
- (void)reportWeWorkBannerNew:(unsigned int)a0;
- (void)reportImmediatelyType:(unsigned int)a0 mainAttr:(id)a1 operation:(unsigned int)a2 scene:(unsigned int)a3 flag:(unsigned long long)a4;
- (void)handleReportImmediatelyType:(id)a0;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (void)actionSheet:(id)a0 clickedButtonAtIndex:(long long)a1;
- (void)onEnterpriseBrandSyncToSvrCompleted:(id)a0 extParams:(id)a1;
- (void).cxx_destruct;

@end
