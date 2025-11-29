@class AWEBaseDataController, AWEPadListReusableViewBaseController;
@protocol AWEVideoHallFeedDataControllerProtocol, AWEPLVFocusedCellControllerProtocol;

@interface AWEPLVAutoPlaySectionViewModel : AWEPLVConstantSectionViewModel

@property (retain, nonatomic) AWEBaseDataController<AWEVideoHallFeedDataControllerProtocol> *dataController;
@property (weak, nonatomic) AWEPadListReusableViewBaseController<AWEPLVFocusedCellControllerProtocol> *forceFocusedCell;
@property (weak, nonatomic) AWEPadListReusableViewBaseController<AWEPLVFocusedCellControllerProtocol> *currentFocusedCell;

+ (id)viewModelWithModelsArray:(id)a0;

- (void)initFetch;
- (void)loadMoreWithParams:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;

@end
