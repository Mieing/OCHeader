@class IESECServiceProxy;
@protocol IESECWinTabService, IESECWinFeedService;

@interface IESECWinProductCellController : IESECWinGoodsSectionController

@property (retain, nonatomic) IESECServiceProxy<IESECWinTabService> *tabService;
@property (retain, nonatomic) IESECServiceProxy<IESECWinFeedService> *feedService;

+ (Class)cellModelClass;
+ (Class)cellClass;

- (void)configCell;
- (double)heightForModel:(id)a0 itemWidth:(double)a1 bffItemData:(id)a2;
- (void)willDisplayWithSource:(unsigned long long)a0 extraParams:(id)a1;
- (void)didEndDisplayWithSource:(unsigned long long)a0 extraParams:(id)a1;
- (void).cxx_destruct;

@end
