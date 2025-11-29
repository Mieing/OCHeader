@class NSString, IESECGoodsDetailHeaderBgStyle;

@interface IESECGoodsDetailHeaderContentCellStyle : MTLModel <MTLJSONSerializing>

@property (nonatomic) double scaling;
@property (retain, nonatomic) IESECGoodsDetailHeaderBgStyle *bgStyle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
