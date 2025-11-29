@class AWENearbyLifeDualRoomProductInfo, AWENearbyFeedDualAnchorInfo, NSString, AWENearbyLifeDualProductInfo;

@interface AWENearbyLifeDualLiveRoomInfo : AWEBaseApiModel

@property (nonatomic) BOOL disableFever;
@property (copy, nonatomic) AWENearbyFeedDualAnchorInfo *anchorInfo;
@property (retain, nonatomic) AWENearbyLifeDualRoomProductInfo *subtitleInfo;
@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) AWENearbyLifeDualProductInfo *productInfo;
@property (nonatomic) long long liveTitleStyle;
@property (nonatomic) long long titleLimitLine;

+ (BOOL)automaticallyDefaultMapping;
+ (id)anchorInfoJSONTransformer;
+ (id)productInfoJSONTransformer;
+ (id)roomProductInfoJSONTransformer;

- (void).cxx_destruct;

@end
