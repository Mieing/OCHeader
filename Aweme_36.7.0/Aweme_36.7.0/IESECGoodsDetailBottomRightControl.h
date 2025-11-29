@class IESECGoodsDetailBottomRightControlInfo, NSString;

@interface IESECGoodsDetailBottomRightControl : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) IESECGoodsDetailBottomRightControlInfo *smallWindow;
@property (retain, nonatomic) IESECGoodsDetailBottomRightControlInfo *shopEntry;
@property (retain, nonatomic) IESECGoodsDetailBottomRightControlInfo *backToTopBtn;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
