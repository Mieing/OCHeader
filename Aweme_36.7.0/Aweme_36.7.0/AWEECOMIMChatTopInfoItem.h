@class NSString, NSArray, AWEECOMIMChatRichTextModel, NSDictionary, AWEECOMIMGoodsShowPriceModel, AWEECOMIMNetworkImp;

@interface AWEECOMIMChatTopInfoItem : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *imgUrlString;
@property (retain, nonatomic) AWEECOMIMChatRichTextModel *title;
@property (retain, nonatomic) AWEECOMIMChatRichTextModel *content;
@property (copy, nonatomic) NSArray *buttonArr;
@property (copy, nonatomic) NSArray *rightArr;
@property (nonatomic) unsigned long long type;
@property (copy, nonatomic) NSDictionary *ext;
@property (copy, nonatomic) NSString *dataId;
@property (copy, nonatomic) NSString *roomId;
@property (copy, nonatomic) NSString *itemId;
@property (copy, nonatomic) NSString *btmCid;
@property (copy, nonatomic) NSString *sceneID;
@property (readonly, copy, nonatomic) NSString *securitySceneCode;
@property (readonly, copy, nonatomic) NSString *skuOrderID;
@property (copy, nonatomic) NSArray *importantMarketingLabels;
@property (readonly, copy, nonatomic) NSArray *showSellPointLabels;
@property (copy, nonatomic) AWEECOMIMGoodsShowPriceModel *showPrice;
@property (copy, nonatomic) NSDictionary *viewTrackInfo;
@property (weak, nonatomic) AWEECOMIMNetworkImp *networkImp;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)buttonArrJSONTransformer;
+ (id)showSellPointLabelsJSONTransformer;
+ (id)showPriceJSONTransformer;
+ (id)importantMarketingLabelsJSONTransformer;
+ (id)rightArrJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

@end
