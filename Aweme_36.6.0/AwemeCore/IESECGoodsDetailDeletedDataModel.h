@class NSString, IESECTextWithIconElement;

@interface IESECGoodsDetailDeletedDataModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) IESECTextWithIconElement *deletedTip;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
