@class IESECLiveReplayGoodsListHeaderWindowInfo, IESECLiveReplayGoodsListHeaderShopInfo, NSString;

@interface IESECLiveReplayGoodsListHeaderNavigation : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long navigationType;
@property (retain, nonatomic) IESECLiveReplayGoodsListHeaderShopInfo *shopInfo;
@property (retain, nonatomic) IESECLiveReplayGoodsListHeaderWindowInfo *windowInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)windowInfoJSONTransformer;
+ (id)shopInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
