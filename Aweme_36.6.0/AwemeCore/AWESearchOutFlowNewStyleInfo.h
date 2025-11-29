@class NSString, AWESearchOutFlowIconModel, NSArray, AWEAdSearchLiveECommerceProductCardModel, AWETagLabelModel;

@interface AWESearchOutFlowNewStyleInfo : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *buttonText;
@property (retain, nonatomic) AWESearchOutFlowIconModel *buttonIcon;
@property (retain, nonatomic) NSArray *productInfo;
@property (copy, nonatomic) NSString *clickButtonText;
@property (copy, nonatomic) NSString *source;
@property (copy, nonatomic) NSString *descriptionString;
@property (nonatomic) BOOL videoCutType;
@property (retain, nonatomic) AWEAdSearchLiveECommerceProductCardModel *searchLiveProductCard;
@property (retain, nonatomic) NSArray *searchLiveProductCardList;
@property (retain, nonatomic) AWETagLabelModel *label;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)productInfoJSONTransformer;
+ (id)searchLiveProductCardListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
