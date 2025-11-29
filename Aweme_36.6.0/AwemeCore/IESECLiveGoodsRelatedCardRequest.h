@class NSString;

@interface IESECLiveGoodsRelatedCardRequest : IESECLiveAPIBaseRequest

@property (copy, nonatomic) NSString *groupID;
@property (copy, nonatomic) NSString *authorOpenID;
@property (copy, nonatomic) NSString *entranceInfo;
@property (copy, nonatomic) NSString *containerRoomID;
@property (copy, nonatomic) NSString *containerAuthorID;
@property (copy, nonatomic) NSString *storeID;
@property (copy, nonatomic) NSString *addressInfo;
@property (copy, nonatomic) NSString *relatedInfo;

- (id)buildParams;
- (void).cxx_destruct;

@end
