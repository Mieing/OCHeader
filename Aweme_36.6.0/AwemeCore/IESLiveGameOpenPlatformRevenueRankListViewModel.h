@class IESLiveGameOpenPlatformRevenueRankListHeaderModel, NSArray;

@interface IESLiveGameOpenPlatformRevenueRankListViewModel : NSObject

@property (retain, nonatomic) IESLiveGameOpenPlatformRevenueRankListHeaderModel *headerModel;
@property (copy, nonatomic) NSArray *cellModels;

- (id)createCellModelsWithRankInfos:(id)a0;
- (void)reloadWithRankListArray:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
