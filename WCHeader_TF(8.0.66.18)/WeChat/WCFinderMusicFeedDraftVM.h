@class NSString, WCFinderFeedDraft;

@interface WCFinderMusicFeedDraftVM : WCFinderMusicFeedVM <WCFinderFeedDraftKeyExt, WCFinderDraftProtocol>

@property (retain, nonatomic) WCFinderFeedDraft *draftVM;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)feedVMWithContentVM:(id)a0 drfatVM:(id)a1;

- (id)observeKey;
- (id)draftId;
- (double)createTime;
- (unsigned long long)draftType;
- (void)onFinderFeedDraftChanged:(id)a0;
- (void)onFinderFeedDraftBindDraftId:(id)a0 newDraft:(id)a1;
- (void)onFinderFeedDraftUploadProgressChanged:(id)a0;
- (BOOL)showProgress;
- (double)uploadProgress;
- (id)defaultIconWithSize:(struct CGSize { double x0; double x1; } *)a0;
- (void).cxx_destruct;

@end
