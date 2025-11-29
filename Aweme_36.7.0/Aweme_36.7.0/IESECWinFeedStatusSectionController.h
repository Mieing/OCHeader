@class IESECWinFeedStatusObject, IESECWinDataController, IESECServiceProxy, IESECWinContext;
@protocol IESECWinTabService, IESECWinDataService, IESECWinDataStatusService, IESECWinCategoryService, IESECWinCommonTrackService, IESECWinTabLayoutService, IESECWinSplitService;

@interface IESECWinFeedStatusSectionController : IESECWinListKitCellController {
    IESECWinFeedStatusObject *_object;
    IESECWinContext *_context;
}

@property (weak, nonatomic) IESECWinDataController *dataController;
@property (retain, nonatomic) IESECServiceProxy<IESECWinTabService> *tabService;
@property (retain, nonatomic) IESECServiceProxy<IESECWinDataService> *dataService;
@property (retain, nonatomic) IESECServiceProxy<IESECWinSplitService> *splitService;
@property (retain, nonatomic) IESECServiceProxy<IESECWinTabLayoutService> *tabLayoutService;
@property (retain, nonatomic) IESECServiceProxy<IESECWinDataStatusService> *dataStatusService;
@property (retain, nonatomic) IESECServiceProxy<IESECWinCategoryService> *categoryService;
@property (retain, nonatomic) IESECServiceProxy<IESECWinCommonTrackService> *commonTrackService;

- (id)cellForItemAtIndex:(long long)a0;
- (void)didUpdateToObject:(id)a0;
- (long long)numberOfItems;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })sizeForItemAtIndex:(long long)a0;

@end
