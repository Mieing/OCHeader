@interface MMFinderLiveConnectMicUserBackWidgetObj : WCPIPAttachWidgetObj

- (void)refresh;
- (void)refreshWithCompletion:(id /* block */)a0;
- (id)getSnapshotUserBackImage;
- (id)getSnapshotUserBackImageForceUpdate:(BOOL)a0;
- (void)getSnapshotUserBackImageAsync:(id /* block */)a0;
- (id)transferUserBackImgToCIImage:(id)a0;

@end
