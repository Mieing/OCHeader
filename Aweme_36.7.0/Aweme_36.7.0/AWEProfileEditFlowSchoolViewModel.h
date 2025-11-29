@class NSArray, NSString, AWESchoolInfoModel, NSError, NSObject, AWEListDataController;
@protocol AWESchoolSearchDataControllerProtocol, AWESchoolNearestDataControllerProtocol;

@interface AWEProfileEditFlowSchoolViewModel : AWEProfileEditFlowStepViewModel

@property (retain, nonatomic) AWEListDataController *schoolListDataController;
@property (retain, nonatomic) AWEListDataController<AWESchoolSearchDataControllerProtocol> *schoolSearchDataController;
@property (retain, nonatomic) NSObject<AWESchoolNearestDataControllerProtocol> *schoolNearestDataController;
@property (nonatomic) BOOL hasMoreSchools;
@property (nonatomic) BOOL hasMoreSearchSchools;
@property (nonatomic) BOOL keywordChangedSinceLastSearch;
@property (copy, nonatomic) NSArray *nearbySchools;
@property (copy, nonatomic) NSArray *allSchools;
@property (copy, nonatomic) NSArray *searchSchools;
@property (nonatomic) BOOL searchRequestOnAir;
@property (nonatomic) BOOL allSchoolRequestOnAir;
@property (nonatomic) BOOL nearbyRequestOnAir;
@property (retain, nonatomic) NSError *searchError;
@property (retain, nonatomic) NSError *allSchoolError;
@property (retain, nonatomic) AWESchoolInfoModel *selectedSchool;
@property (copy, nonatomic) NSString *searchKeyword;

- (BOOL)hasLocationPermission;
- (id)trackFlowType;
- (Class)stepViewClass;
- (void)fetchSchoolsWithCompletion:(id /* block */)a0;
- (void)fetchNearbySchoolsWithCompletion:(id /* block */)a0;
- (void)loadMoreSearchSchoolWithCompletion:(id /* block */)a0;
- (void)loadMoreSchoolsWithCompletion:(id /* block */)a0;
- (void)p_startSearching;
- (BOOL)p_needsSubmitChanges;
- (void)fetchSearchSchoolsWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (id)impressionEvent;
- (id)init;
- (void)finishWithCompletion:(id /* block */)a0;

@end
