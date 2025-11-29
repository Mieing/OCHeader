@class NSNumber, NSString, NSDictionary, NSArray, NSMutableDictionary, NSMutableArray, MMKV;

@interface AWEPadSkyLightListDataController : AWEListDataController

@property (copy, nonatomic) NSString *urlPath;
@property (retain, nonatomic) NSDictionary *sectionIDToSectionClzMap;
@property (retain, nonatomic) NSDictionary *sectionIDToModelClzMap;
@property (retain, nonatomic) NSDictionary *sectionIDToCellClzMap;
@property (retain, nonatomic) NSArray *sectionIDArray;
@property (retain, nonatomic) NSArray *cardSectionIDArray;
@property (retain, nonatomic) NSMutableDictionary *sectionModels;
@property (retain, nonatomic) NSMutableArray *cardSectionViewModels;
@property (retain, nonatomic) MMKV *mmkv;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *capsuleText;
@property (retain, nonatomic) NSNumber *userAge;
@property (retain, nonatomic) NSNumber *userGender;

- (void)loadMoreWithCompletion:(id /* block */)a0;
- (void)initFetchWithCompletion:(id /* block */)a0;
- (void)fetchSkyLightDataWithCompletion:(id /* block */)a0;
- (void)handleNewSkyLightData:(id)a0;
- (void)buildSectionAndCellControllerWithSectionID:(id)a0 rawData:(id)a1;
- (void)buildSectionsWithSectionID:(id)a0 rawData:(id)a1;
- (id)buildCellControllersWithSectionID:(id)a0 rawData:(id)a1;
- (id)initWithPath:(id)a0;
- (void).cxx_destruct;
- (void)refreshWithCompletion:(id /* block */)a0;

@end
