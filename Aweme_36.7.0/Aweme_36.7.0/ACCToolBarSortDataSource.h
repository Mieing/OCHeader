@class NSArray, NSDictionary, NSString, AWEVideoPublishViewModel, ACCToolBarContainerConfig;

@interface ACCToolBarSortDataSource : NSObject <ACCBarItemSortDataSource>

@property (retain, nonatomic) ACCToolBarContainerConfig *config;
@property (nonatomic) unsigned long long page;
@property (weak, nonatomic) AWEVideoPublishViewModel *publishModel;
@property (copy, nonatomic) NSArray *recordList;
@property (copy, nonatomic) NSArray *editList;
@property (copy, nonatomic) NSDictionary *mapEdit;
@property (copy, nonatomic) NSDictionary *mapRecord;
@property (nonatomic) BOOL isEdit;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithPage:(unsigned long long)a0 publishModel:(id)a1 config:(id)a2;
- (id)barItemSortArray;
- (id)moreBarItemSortArray;
- (void)setupEditToolBarList;
- (void)setupRecordToolBarList;
- (id)settingsToList:(id)a0 isEdit:(BOOL)a1;
- (id)defaultSortArrayRecord;
- (id)defaultSortArrayEdit;
- (void)addRecordDurationIfNeeded:(id)a0;
- (unsigned long long)findRecordSettingsAboveItemIndex:(id)a0;
- (id)barItemSortArrayWithPage:(unsigned long long)a0;
- (unsigned long long)findRecorderDivisionItemIndex:(id)a0;
- (void).cxx_destruct;

@end
