@class NSString, AWELiteActivityPopupPrimaryTextModel, AWELiteActivityPopupMiddleBlockModel;

@interface AWELiteActivityPopupBodyModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *topSmallText;
@property (copy, nonatomic) NSString *middleText;
@property (retain, nonatomic) AWELiteActivityPopupPrimaryTextModel *primaryText;
@property (retain, nonatomic) AWELiteActivityPopupMiddleBlockModel *middleBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)primaryTextJSONTransformer;
+ (id)middleBlockJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
