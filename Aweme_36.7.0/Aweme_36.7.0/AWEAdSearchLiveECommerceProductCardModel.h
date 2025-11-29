@class NSString, AWETagLabelModel, AWEURLModel;

@interface AWEAdSearchLiveECommerceProductCardModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *buttonText;
@property (copy, nonatomic) NSString *buttonBackgroundColor;
@property (copy, nonatomic) NSString *lightButtonBackgroundColor;
@property (copy, nonatomic) NSString *whiteColorText;
@property (copy, nonatomic) NSString *colorText;
@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) AWEURLModel *imageUrlModel;
@property (copy, nonatomic) NSString *imageDesc;
@property (copy, nonatomic) NSString *priceDesc;
@property (copy, nonatomic) NSString *sellNumDesc;
@property (retain, nonatomic) AWETagLabelModel *adLabel;
@property (copy, nonatomic) NSString *roomID;
@property (copy, nonatomic) NSString *anchorID;
@property (copy, nonatomic) NSString *productID;
@property (nonatomic) long long jumpType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
