@class IESECLiveGoodsJumpTrackInfo, NSString, NSDictionary, IESECLiveEditCartResultTrackInfo, NSNumber, IESECBTMPageInfo;
@protocol IESECLiveAtomicServerActionProtocol;

@interface IESECLiveAddCartInfo : NSObject

@property (copy, nonatomic) id /* block */ addCartAnimBlock;
@property (retain, nonatomic) NSDictionary *addCartAnimParams;
@property (retain, nonatomic) NSString *successToast;
@property (retain, nonatomic) NSString *failureToast;
@property (nonatomic) BOOL hideDefaultToast;
@property (nonatomic) BOOL openGoodsListToAddCart;
@property (nonatomic) BOOL openSchemaToAddCart;
@property (nonatomic) BOOL addCartToastDynamicOrder;
@property (nonatomic) BOOL orderToAddCart;
@property (retain, nonatomic) id<IESECLiveAtomicServerActionProtocol> actionParam;
@property (retain, nonatomic) NSString *editCartRequestPath;
@property (retain, nonatomic) NSString *editCartRequestParamOrigin;
@property (retain, nonatomic) NSDictionary *skuInfo;
@property (retain, nonatomic) NSString *trackExtra;
@property (retain, nonatomic) NSString *bcmChain;
@property (retain, nonatomic) NSDictionary *cartTrackParamsOrigin;
@property (retain, nonatomic) IESECBTMPageInfo *btmPageInfo;
@property (copy, nonatomic) NSString *liveListChannel;
@property (retain, nonatomic) IESECLiveEditCartResultTrackInfo *resultTrackInfo;
@property (retain, nonatomic) IESECLiveGoodsJumpTrackInfo *jumpTrackInfo;
@property (retain, nonatomic) NSNumber *addCartOperationStartTime;

- (void).cxx_destruct;
- (id)init;

@end
