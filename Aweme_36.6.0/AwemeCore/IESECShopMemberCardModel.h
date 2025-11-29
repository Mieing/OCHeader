@class IESECURLModel, NSDictionary, IESECShopMemberTextLabelItem, NSString, IESECShopMemberButton;

@interface IESECShopMemberCardModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) IESECURLModel *bgImgSingle;
@property (retain, nonatomic) IESECURLModel *bgImgDouble;
@property (retain, nonatomic) IESECShopMemberTextLabelItem *title;
@property (retain, nonatomic) IESECShopMemberTextLabelItem *subTitleSingle;
@property (retain, nonatomic) IESECShopMemberTextLabelItem *subTitleDouble;
@property (retain, nonatomic) IESECURLModel *icon;
@property (retain, nonatomic) IESECShopMemberButton *button;
@property (nonatomic) BOOL isShow;
@property (copy, nonatomic) NSDictionary *logExtra;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
