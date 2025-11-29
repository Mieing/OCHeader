@class NSString;

@interface AWEIMPickerDataSourceComponent : AWEIMComponentBase <AWEIMPickerDataSourceInterface>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentDidMounted:(id)a0;
- (id)pickerConfig;
- (id)loadFirstScreenOrganizedAssetsWithFilterType:(unsigned long long)a0;
- (void)asyncLoadCameraRollOtherOrganizedSubAlbums:(id /* block */)a0;
- (void)asyncLoadOtherAllOrganizedSubAlbums:(id /* block */)a0;
- (id)pickerVC;
- (id)BPEAKey;

@end
