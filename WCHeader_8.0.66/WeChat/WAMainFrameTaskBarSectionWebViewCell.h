@interface WAMainFrameTaskBarSectionWebViewCell : WAMainFrameTaskBarSectionOtherViewCell

- (void)initView;
- (void)updateWithListInfo:(id)a0;
- (id)defaultImage;
- (void)onLoadImageOK:(id)a0;
- (BOOL)shouldListenSnapshotUpdate;

@end
