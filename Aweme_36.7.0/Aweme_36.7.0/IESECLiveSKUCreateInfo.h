@class IESECLiveGoodsBaseModel, NSString, IESECLiveContext, NSDictionary, IESECLiveGoodsJumpTrackInfo, NSNumber;

@interface IESECLiveSKUCreateInfo : NSObject

@property (copy, nonatomic) id /* block */ addSKUViewBlock;
@property (nonatomic) long long enterFromType;
@property (nonatomic) long long sceneType;
@property (nonatomic) BOOL isAddToCart;
@property (nonatomic) struct CGSize { double width; double height; } wholeSize;
@property (retain, nonatomic) NSNumber *panelHeightPercent;
@property (retain, nonatomic) NSString *maskBgColor;
@property (retain, nonatomic) IESECLiveContext *liveContext;
@property (retain, nonatomic) IESECLiveGoodsBaseModel *goodsModel;
@property (retain, nonatomic) NSString *ecomEntranceFormStr;
@property (retain, nonatomic) NSString *liveListChannel;
@property (retain, nonatomic) NSString *skuFrom;
@property (copy, nonatomic) NSString *sourceBTMToken;
@property (retain, nonatomic) NSDictionary *ultimateBuySKUOrderParams;
@property (nonatomic) long long ultimateBuyAB;
@property (retain, nonatomic) NSString *creativeID;
@property (nonatomic) BOOL forceYataSku;
@property (copy, nonatomic) NSString *bizIdentifier;
@property (retain, nonatomic) NSString *detailURL;
@property (retain, nonatomic) NSDictionary *orderParams;
@property (copy, nonatomic) NSString *skuSchemaForDiff;
@property (copy, nonatomic) NSString *ultimateOrderSchemaForDiff;
@property (retain, nonatomic) IESECLiveGoodsJumpTrackInfo *jumpTrackInfo;
@property (retain, nonatomic) NSString *warehouseListID;
@property (retain, nonatomic) NSNumber *liveShopMode;

- (void).cxx_destruct;
- (id)init;

@end
