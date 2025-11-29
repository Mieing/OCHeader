@class IESECLiveGoodsListPageModel;

@interface IESECLiveGoodsListResponseInfo : NSObject

@property (nonatomic) double fetchBeginTime;
@property (nonatomic) double fetchEndTime;
@property (retain, nonatomic) IESECLiveGoodsListPageModel *pageModel;
@property (nonatomic) double pureNetworkDuration;
@property (nonatomic) BOOL success;

- (void).cxx_destruct;

@end
