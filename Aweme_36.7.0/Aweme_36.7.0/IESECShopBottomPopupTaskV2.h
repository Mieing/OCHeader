@class NSString, IESECShopTKTabBizExtraInfo;

@interface IESECShopBottomPopupTaskV2 : IESECShopPopupTask

@property (copy, nonatomic) NSString *cacheKey;
@property (retain, nonatomic) IESECShopTKTabBizExtraInfo *extraInfo;
@property (nonatomic) unsigned long long index;

- (void).cxx_destruct;

@end
