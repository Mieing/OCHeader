@class WCFinderInteractiveSearchStore, NSArray, NSString, WCFinderInteractiveSearchSection, WCFinderCustomCGI;
@protocol WCFinderInteractiveSearchViewModelDelegate;

@interface WCFinderInteractiveSearchViewModel : NSObject <WCFinderInteractiveSearchStoreExt, WCFinderDataItemExt>

@property (retain, nonatomic) WCFinderInteractiveSearchStore *store;
@property (retain, nonatomic) NSArray *sections;
@property (retain, nonatomic) WCFinderInteractiveSearchSection *feedSection;
@property (retain, nonatomic) NSString *lastKeyword;
@property (retain, nonatomic) WCFinderCustomCGI *lastCGI;
@property (retain, nonatomic) NSString *dataScene;
@property (nonatomic) int tabType;
@property (nonatomic) int subTabType;
@property (nonatomic) int selectTabType;
@property (weak, nonatomic) id<WCFinderInteractiveSearchViewModelDelegate> delegate;
@property (readonly, nonatomic) unsigned long long loadState;
@property (readonly, nonatomic) int commentScene;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDataScene:(id)a0 tabType:(int)a1 subTabType:(int)a2 selectTabType:(int)a3;
- (id)init;
- (void)onFinderDataItemCancelFav:(id)a0;
- (void)delFeedByContentVMTid:(id)a0;
- (void)search:(id)a0;
- (void)requestNextPage;
- (void)notifyChanged;
- (id)listViewModelDataScene:(id)a0;
- (void)onStoeAppendData:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void).cxx_destruct;

@end
