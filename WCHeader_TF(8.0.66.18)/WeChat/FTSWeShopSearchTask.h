@class FTSWeShopDB, NSArray, NSString;
@protocol FTSWeShopSearchTaskDelegate;

@interface FTSWeShopSearchTask : NSObject

@property (retain, nonatomic) FTSWeShopDB *db;
@property (nonatomic) unsigned long long status;
@property (nonatomic, getter=isCancelled) BOOL cancelled;
@property (copy, nonatomic) NSArray *resultItems;
@property (readonly, nonatomic) unsigned long long type;
@property (readonly, copy, nonatomic) NSString *searchText;
@property (readonly, nonatomic) unsigned long long limit;
@property (weak, nonatomic) id<FTSWeShopSearchTaskDelegate> delegate;

- (void)dealloc;
- (id)initWithType:(unsigned long long)a0 searchText:(id)a1 limit:(unsigned long long)a2 db:(id)a3;
- (void)asyncSearch;
- (void)cancelSearch;
- (BOOL)isCompleted;
- (BOOL)isRunning;
- (BOOL)isCanceling;
- (BOOL)hasSearchDone;
- (BOOL)isHomeSearch;
- (void).cxx_destruct;

@end
