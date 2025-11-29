@class NSString;

@interface IESECLiveReplayMessageRequest : IESECLiveAPIBaseRequest

@property (copy, nonatomic) NSString *productID;
@property (copy, nonatomic) NSString *promotionID;
@property (copy, nonatomic) NSString *shopID;
@property (copy, nonatomic) NSString *sourcePage;

- (id)buildParams;
- (void).cxx_destruct;

@end
