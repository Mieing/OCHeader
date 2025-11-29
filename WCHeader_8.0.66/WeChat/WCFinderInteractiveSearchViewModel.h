@class WCFinderStreamLoadingState, NSString, WCFinderCustomCGI, WCFinderFeedArray;

@interface WCFinderInteractiveSearchViewModel : NSObject <WCFinderDataItemExt, WCFinderFeedArrayDelegate>

@property (retain, nonatomic) NSString *lastKeyword;
@property (retain, nonatomic) WCFinderCustomCGI *lastCGI;
@property (retain, nonatomic) WCFinderStreamLoadingState *loadingState;
@property (nonatomic) int tabType;
@property (nonatomic) int subTabType;
@property (nonatomic) int selectTabType;
@property (retain, nonatomic) WCFinderFeedArray *feedArray;
@property (readonly, nonatomic) int commentScene;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFeedArray:(id)a0 tabType:(int)a1 subTabType:(int)a2 selectTabType:(int)a3;
- (id)init;
- (void)onFinderDataItemCancelFav:(id)a0;
- (void)delFeedByContentVMTid:(id)a0;
- (void)search:(id)a0;
- (void)_search:(id)a0 firstPage:(BOOL)a1;
- (void)onFeedArray:(id)a0 insertContentVMS:(id)a1 removeContentVMS:(id)a2;
- (void)requestNextPage;
- (void)delContentVM:(id)a0;
- (id)makeListViewModel;
- (void).cxx_destruct;

@end
