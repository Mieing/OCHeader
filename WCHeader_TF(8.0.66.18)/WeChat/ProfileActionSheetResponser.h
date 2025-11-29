@class NSString, WAWebViewController;

@interface ProfileActionSheetResponser : NSObject <WCActionSheetDelegate> {
    NSString *_cpuProfileFile;
}

@property (weak, nonatomic) WAWebViewController *vc;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onShareFilePath:(id)a0 inView:(id)a1;
- (void)actionSheet:(id)a0 clickedButtonAtIndex:(long long)a1;
- (void)sendFileToFileHelper;
- (void)sendViaAirDrop;
- (void)showTips:(id)a0;
- (void)showToast:(id)a0;
- (void).cxx_destruct;

@end
