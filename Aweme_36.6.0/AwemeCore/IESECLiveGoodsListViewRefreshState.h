@class NSArray, IESECLiveGoodsListViewRefreshInfo, IESECLiveGoodsListPageModel, NSError;

@interface IESECLiveGoodsListViewRefreshState : NSObject

@property (retain, nonatomic) IESECLiveGoodsListViewRefreshInfo *refreshInfo;
@property (retain, nonatomic) IESECLiveGoodsListPageModel *listModel;
@property (nonatomic) long long selectedIndex;
@property (retain, nonatomic) NSArray *items;
@property (nonatomic) BOOL hasPreviousPage;
@property (nonatomic) BOOL hasNextPage;
@property (retain, nonatomic) NSError *error;

- (void).cxx_destruct;

@end
