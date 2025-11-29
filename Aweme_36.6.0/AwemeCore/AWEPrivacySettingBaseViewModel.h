@class NSMutableArray, NSMutableSet;
@protocol AWEPrivacySettingBaseViewModelDelegate;

@interface AWEPrivacySettingBaseViewModel : AWESettingBaseViewModel

@property (retain, nonatomic) NSMutableArray *sectionModels;
@property (retain, nonatomic) NSMutableSet *displayedItemTypes;
@property (weak, nonatomic) id<AWEPrivacySettingBaseViewModelDelegate> delegate;
@property (nonatomic) BOOL loading;

- (void)willDisplayItemModel:(id)a0;
- (id)itemModelAtIndexPath:(id)a0;
- (void)updateItemModel:(id)a0;
- (BOOL)shouldAutoBeginEditingItemModel:(id)a0;
- (void)insertSectionModel:(id)a0 atIndex:(unsigned long long)a1;
- (void)deleteSectionModelAtIndex:(unsigned long long)a0;
- (id)indexPathOfItemModel:(id)a0;
- (void)updateItemModelAtIndexPath:(id)a0;
- (void)recordDisplayItemModel:(id)a0;
- (void)addSectionModel:(id)a0;
- (void)deleteSectionModel:(id)a0;
- (BOOL)hasDisplayedItemModel:(id)a0;
- (void)requestUserSetting:(BOOL)a0 completion:(id /* block */)a1;
- (id)sectionDataArray;
- (void)setSectionDataArray:(id)a0;
- (void)beginUpdates;
- (void)endUpdates;
- (void).cxx_destruct;
- (void)setUserInteractionEnabled:(BOOL)a0;
- (id)init;

@end
