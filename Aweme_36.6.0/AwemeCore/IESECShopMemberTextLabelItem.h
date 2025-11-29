@class NSString, IESECURLModel;

@interface IESECShopMemberTextLabelItem : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *text;
@property (nonatomic) long long textSize;
@property (nonatomic) long long fontWeight;
@property (copy, nonatomic) NSString *textColor;
@property (retain, nonatomic) IESECURLModel *bgImg;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
