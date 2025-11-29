@class NSSet, NSString, NSMutableSet, NSMutableArray, NSObject;
@protocol AWEUserRecommendTableDataSourceDelegate, AWEUserRecommendDataControllerProtocol;

@interface AWEUserRecommendTableDataSource : NSObject <AWEUserRecommendTableDataSourceProtocol, NSCopying>

@property (retain, nonatomic) NSObject<AWEUserRecommendDataControllerProtocol> *dataController;
@property (retain, nonatomic) NSMutableArray *mutableModels;
@property (retain, nonatomic) NSMutableSet *allUserIDs;
@property (nonatomic) long long dataState;
@property (nonatomic) long long dataStateBeforeLoadingData;
@property (nonatomic) BOOL hasFetchedData;
@property (weak, nonatomic) id<AWEUserRecommendTableDataSourceDelegate> delegate;
@property (nonatomic) BOOL wasClosed;
@property (nonatomic) BOOL isMateRecommend;
@property (copy, nonatomic) NSSet *userIDsToFilter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)loadMoreWithCompletion:(id /* block */)a0;
- (void)removeAllModels;
- (void)removeModels:(id)a0;
- (BOOL)insertModel:(id)a0 atIndex:(unsigned long long)a1;
- (void)setUserIDsToFilter:(id)a0 filterExisting:(BOOL)a1;
- (void)removeModel:(id)a0;
- (void)removeModelAtIndex:(unsigned long long)a0;
- (void)refreshWithNetworkTag:(unsigned long long)a0 completion:(id /* block */)a1;
- (BOOL)addModels:(id)a0;
- (id)initWithDataController:(id)a0;
- (void)p_checkEmpty;
- (id)p_cellModelFromUser:(id)a0;
- (BOOL)p_isDuplicateUser:(id)a0;
- (void)p_checkNonEmpty;
- (void)p_removeUser:(id)a0;
- (void)clearDataController;
- (BOOL)containsUserID:(id)a0;
- (void)removeModelsAtIndexes:(id)a0;
- (long long)indexOfModelCellType:(long long)a0;
- (long long)indexOfUserID:(id)a0;
- (BOOL)insertModels:(id)a0 atIndexes:(id)a1;
- (void)removeLastModel;
- (void)removeModelsInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (id)models;
- (void).cxx_destruct;
- (BOOL)addModel:(id)a0;
- (void)reset;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)refreshWithCompletion:(id /* block */)a0;
- (BOOL)isLoadingData;

@end
