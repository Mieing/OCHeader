@class AWEGuestLikeListContainerViewModel, AWEGuestLikeListDataController, AWEGuestHomePageContext;

@interface AWEGuestLikeListSectionViewModel : AWEBaseListSectionViewModel

@property (weak, nonatomic) AWEGuestLikeListContainerViewModel *parentVM;
@property (retain, nonatomic) AWEGuestHomePageContext *pageContext;
@property (readonly, nonatomic) AWEGuestLikeListDataController *dataController;

+ (id)viewModelWithModelsArray:(id)a0 pageContext:(id)a1 parentVM:(id)a2;

- (void)updateDataController;
- (void).cxx_destruct;
- (void)setup;
- (id)dataController;

@end
