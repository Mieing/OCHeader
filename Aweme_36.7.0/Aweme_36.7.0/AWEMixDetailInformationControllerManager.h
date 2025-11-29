@class NSString;

@interface AWEMixDetailInformationControllerManager : AWEShellControllerManager <AWEMixDetailInformationControllerProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)classNameArray;
- (void)updateMixInfo:(id)a0 needResetDataController:(BOOL)a1;
- (void)loadMoreFinishAfterUpdateMixInfo:(id)a0 error:(id)a1;
- (BOOL)shouldDisableScrollToEpisodeWhenUpdate;
- (BOOL)shouldShowBottomButtonWhenScrolling;

@end
