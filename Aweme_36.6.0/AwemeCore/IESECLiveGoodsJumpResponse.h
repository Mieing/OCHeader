@class NSMutableDictionary, IESECLiveGoodsBaseModel;

@interface IESECLiveGoodsJumpResponse : NSObject

@property (retain, nonatomic) IESECLiveGoodsBaseModel *goodsModel;
@property (nonatomic) long long actionType;
@property (retain, nonatomic) NSMutableDictionary *extraInfo;

- (void).cxx_destruct;

@end
