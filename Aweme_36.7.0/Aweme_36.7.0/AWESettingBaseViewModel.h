@class NSString, NSArray;
@protocol AWESettingBaseViewModelDelegate, AWESettingBaseViewModelBizAbilityProtocol, AWEUserSettingBigFontAdapterProtocol;

@interface AWESettingBaseViewModel : NSObject <AWESettingViewModelProtocol, AWESettingMethodProtocol>

@property (copy, nonatomic) NSString *traceEnterFrom;
@property (nonatomic) long long colorStyle;
@property (readonly, nonatomic) id<AWEUserSettingBigFontAdapterProtocol> fontAdapter;
@property (weak, nonatomic) id<AWESettingBaseViewModelDelegate> controllerDelegate;
@property (retain, nonatomic) id<AWESettingBaseViewModelBizAbilityProtocol> bizAbilityImpl;
@property (retain, nonatomic) NSArray *sectionDataArray;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)itemModelWithType:(long long)a0;
- (void)updateFontAdapter:(id)a0;
- (void)refreshAllCells;
- (void)viewDidDisapper;
- (id)itemModelIndexWithType:(long long)a0;
- (id)sectionModelWithType:(long long)a0;
- (void)insertItemModelWithType:(long long)a0 toPath:(id)a1;
- (void)insertSectionModel:(id)a0 toIndex:(long long)a1;
- (void)removeItemModelWithTypeIfNeed:(long long)a0;
- (void)removeSectionModelWithTypeIfNeed:(long long)a0;
- (void)refreshallCellsWithoutDidLoad;
- (id)sectionDataArray;
- (void)viewDidAppear;
- (void).cxx_destruct;
- (void)viewWillAppear;
- (void)viewDidLoad;

@end
