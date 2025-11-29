@class NSString, NSDictionary, IESECLiveGoodsListUpdateExtraInfo;

@interface IESECLiveGoodsListDisableRenewRequestConfig : NSObject

@property (retain, nonatomic) NSString *uniqueKey;
@property (nonatomic) long long beginRealIndex;
@property (nonatomic) long long endRealIndex;
@property (retain, nonatomic) NSDictionary *fetchParams;
@property (retain, nonatomic) IESECLiveGoodsListUpdateExtraInfo *updateExtraInfo;

- (void).cxx_destruct;

@end
