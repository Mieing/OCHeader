@class NSString, NSMutableDictionary;
@protocol MJMaterialLoadingStatusViewModel;

@interface MJMaterialLoadingStatusCoordinator : NSObject

@property (weak, nonatomic) id<MJMaterialLoadingStatusViewModel> viewModel;
@property (retain, nonatomic) NSMutableDictionary *loadingViews;
@property (copy, nonatomic) NSString *lastSelectedID;

- (id)initWithViewModel:(id)a0;
- (void)didSelectWithID:(id)a0 forView:(id)a1 completionHandler:(id /* block */)a2;
- (void)updateLoadingStyleWithID:(id)a0 forView:(id)a1;
- (void)removeLoadingStyleWithID:(id)a0 forView:(id)a1;
- (void)attachLoadingVieWithID:(id)a0 forView:(id)a1;
- (void)setupLoadingViewWithID:(id)a0 forView:(id)a1 completionHandler:(id /* block */)a2;
- (void)freeLoadingStyleWithID:(id)a0 forView:(id)a1;
- (void).cxx_destruct;

@end
