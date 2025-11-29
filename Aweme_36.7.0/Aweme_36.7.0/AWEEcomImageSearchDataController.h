@class NSArray, NSMutableArray;

@interface AWEEcomImageSearchDataController : NSObject

@property (nonatomic) BOOL firstSectionDataReceived;
@property (retain, nonatomic) NSArray *tabItems;
@property (retain, nonatomic) NSMutableArray *sectionData;
@property (nonatomic) BOOL firstLoadSuccess;
@property (nonatomic) BOOL hasPreload;

- (id)dataStoreWithSectionId:(id)a0;
- (BOOL)isFirstSectionWithId:(id)a0;
- (id)dataStoreWithChannel:(id)a0;
- (id)dataStoreWithIndex:(long long)a0;
- (void)handleTabInfo:(id)a0;
- (id)handleResponse:(id)a0 withContext:(id)a1;
- (BOOL)needLoadMoreWithSection:(long long)a0;
- (void)showCachedModelWithSection:(long long)a0;
- (BOOL)hasSecondSection;
- (void).cxx_destruct;
- (id)init;
- (void)resetData;
- (id)modelAtIndexPath:(id)a0;

@end
