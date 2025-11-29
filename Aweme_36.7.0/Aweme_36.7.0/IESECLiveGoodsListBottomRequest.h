@class NSString, NSNumber;

@interface IESECLiveGoodsListBottomRequest : IESECLiveAPIBaseRequest

@property (copy, nonatomic) NSString *secAuthorID;
@property (copy, nonatomic) NSString *curProductID;
@property (copy, nonatomic) NSString *userActParams;
@property (copy, nonatomic) NSNumber *livePanelHeightPercent;

- (id)buildParams;
- (void).cxx_destruct;

@end
