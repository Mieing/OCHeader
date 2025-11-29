@class IESECMultiTextWithIconElement, NSString;

@interface IESECGoodsDetailNavigationDataModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) IESECMultiTextWithIconElement *darkElement;
@property (retain, nonatomic) IESECMultiTextWithIconElement *lightElement;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
