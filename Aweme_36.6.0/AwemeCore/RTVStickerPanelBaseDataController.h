@class NSString, NSMutableDictionary, RTVStickerPanelStickerViewModel;
@protocol RTVStickerPanelBaseDataControllerDelegate, RxInjector, RTVStickerManagerInterface;

@interface RTVStickerPanelBaseDataController : NSObject <RTVStickerPanelDataControllerSubclassInterface, RTVStickerPanelDataControllerPrivateInterface>

@property (readonly, nonatomic) NSMutableDictionary *viewModelCache;
@property (retain) RTVStickerPanelStickerViewModel *selectedViewModel;
@property (copy) NSString *willSelectStickerID;
@property (retain, nonatomic) id<RTVStickerManagerInterface> stickerManager;
@property (readonly, weak, nonatomic) id<RxInjector> injector;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<RTVStickerPanelBaseDataControllerDelegate> delegate;

- (id)selectedSticker;
- (void)rxAwakeFromPropertyInjection;
- (id)tryToSelectStickerWithID:(id)a0;
- (BOOL)deselectStickerID:(id)a0;
- (id)cancelTryToSelectStickerIDPrevious:(id)a0;
- (id)viewModelWithStickerID:(id)a0;
- (id)viewModelWithSticker:(id)a0;
- (id)tryToSelectSticker:(id)a0;
- (void)willSelectSticker:(id)a0;
- (id)createViewModelWithSticker:(id)a0;
- (id)__tryToSelectSticker:(id)a0 disableDelegateDispatch:(BOOL)a1;
- (id)updateViewModel:(id /* block */)a0 forStickerID:(id)a1;
- (id)__updateSelectedViewModel:(id)a0 disableDelegateDispatch:(BOOL)a1;
- (id)__updateSelectedViewModel:(id)a0;
- (id)shouldSelectSticker:(id)a0;
- (void)updateViewModel:(id /* block */)a0 forSticker:(id)a1;
- (void)appendViewModel:(id)a0;
- (id)updateSelectedStickerViewModel:(id)a0;
- (void).cxx_destruct;

@end
