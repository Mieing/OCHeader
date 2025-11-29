@class NSArray, AWESettingItemModel;

@interface AWEGlobalManageDiskViewModel : AWESettingBaseViewModel {
    NSArray *_sectionDataArray;
}

@property (retain, nonatomic) AWESettingItemModel *tempFileSettingItem;
@property (retain, nonatomic) AWESettingItemModel *resourceFileSettingItem;
@property (retain, nonatomic) AWESettingItemModel *draftFileSettingItem;

- (void)updateDraftCacheDisplay;
- (void)updateSizeOfTempFileWithCompletion:(id /* block */)a0;
- (void)updateSizeOfResourceFileWithCompletion:(id /* block */)a0;
- (void)updateSizeOfDraftFileWithCompletion:(id /* block */)a0;
- (id)sectionDataArray;
- (void)setSectionDataArray:(id)a0;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)dealloc;

@end
