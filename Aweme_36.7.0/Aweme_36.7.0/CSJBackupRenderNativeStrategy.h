@class NSString, CSJCoverView;

@interface CSJBackupRenderNativeStrategy : CSJBackupRenderStrategy <CSJCoverViewDelegate>

@property (retain, nonatomic) CSJCoverView *coverView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)async_to_main_render_really;
- (void)render_really;
- (void)updateWithThemeStatus:(long long)a0;
- (id)logKeyName;
- (void)coverViewClick:(id)a0 areaCategory:(long long)a1 clickExtraInfo:(id)a2;
- (void)coverViewClickVideo:(id)a0;
- (void)coverViewClickClose:(id)a0;
- (void)coverViewClickAdLogo:(id)a0;
- (void)coverViewClickDownload:(id)a0 clickExtraInfo:(id)a1;
- (long long)playerTotalTime;
- (long long)renderType;
- (void).cxx_destruct;
- (void)render;
- (double)playerCurrentTime;

@end
