@class IESECServiceProxy, NSString, IESECWinSortObject;
@protocol IESECWinTabService, IESECWinDataService, IESECWinPageCardService, IESECWinSortSectionControllerDelegate, IESECWinFeedService, IESECWinTabLayoutService, IESECWinCategoryService;

@interface IESECWinSortSectionController : IESECWinListKitCellController <IESECWinSortCellProtocol>

@property (retain, nonatomic) IESECServiceProxy<IESECWinTabLayoutService> *tabLayoutService;
@property (retain, nonatomic) IESECServiceProxy<IESECWinCategoryService> *categoryService;
@property (retain, nonatomic) IESECServiceProxy<IESECWinTabService> *tabService;
@property (retain, nonatomic) IESECServiceProxy<IESECWinDataService> *dataService;
@property (retain, nonatomic) IESECServiceProxy<IESECWinPageCardService> *pageCardService;
@property (retain, nonatomic) IESECServiceProxy<IESECWinFeedService> *feedService;
@property (retain, nonatomic) IESECWinSortObject *object;
@property (nonatomic) BOOL filterButtonShowed;
@property (weak, nonatomic) id<IESECWinSortSectionControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)cellForItemAtIndex:(long long)a0;
- (void)didUpdateToObject:(id)a0;
- (void)switchButtonTapped;
- (void)switchButtonShowed;
- (void)showGuideBubble:(id)a0;
- (void)filterCheckButtonTapped:(unsigned long long)a0;
- (void)filterCheckButtonShowed;
- (void)trackSortClickWithOnceKey:(id)a0;
- (id)switchButtonTrackParams;
- (id)filterButtonTrackParams;
- (long long)numberOfItems;
- (void).cxx_destruct;
- (void)setSelectedIndex:(unsigned long long)a0 animated:(BOOL)a1;
- (struct CGSize { double x0; double x1; })sizeForItemAtIndex:(long long)a0;

@end
