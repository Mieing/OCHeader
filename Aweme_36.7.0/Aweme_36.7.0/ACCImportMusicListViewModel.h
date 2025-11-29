@interface ACCImportMusicListViewModel : ACCMusicListViewModel

- (id)musicSelectedFrom;
- (BOOL)contextMenuEnabled:(id)a0;
- (BOOL)enableStreamDownload;
- (id)contextMenuActionsWithItem:(id)a0;
- (void)didTriggerMenu:(id)a0 withItem:(id)a1;
- (id)title;
- (id)identifier;

@end
