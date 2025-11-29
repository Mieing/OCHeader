@class NSString, WCFinderInteractiveSearchStore, NSMutableArray;
@protocol WCFinderInteractiveSearchViewModelDelegate;

@interface WCFinderInteractiveSearchListViewModel : NSObject <WCFinderInteractiveSearchStoreExt>

@property (retain, nonatomic) NSString *dataScene;
@property (retain, nonatomic) WCFinderInteractiveSearchStore *store;
@property (retain, nonatomic) NSMutableArray *contentVMS;
@property (readonly, nonatomic) int commentScene;
@property (weak, nonatomic) id<WCFinderInteractiveSearchViewModelDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithStore:(id)a0 dataScene:(id)a1;
- (BOOL)isLoading;
- (BOOL)hasMore;
- (BOOL)isError;
- (void)requestNextPage;
- (void)delContentVM:(id)a0;
- (long long)contentIndexOfTid:(id)a0;
- (void)onStoeAppendData:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)insertDataItems:(id)a0;
- (void).cxx_destruct;

@end
