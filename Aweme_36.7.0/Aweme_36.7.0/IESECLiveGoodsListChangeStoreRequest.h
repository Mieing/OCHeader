@class NSString;

@interface IESECLiveGoodsListChangeStoreRequest : IESECLiveAPIBaseRequest

@property (copy, nonatomic) NSString *storeID;
@property (copy, nonatomic) NSString *addressInfo;

- (id)buildParams;
- (void).cxx_destruct;

@end
