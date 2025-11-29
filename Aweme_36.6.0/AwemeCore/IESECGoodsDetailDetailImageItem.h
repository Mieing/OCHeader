@class NSString, IESECURLModel, IESECGoodsDetailDetailImageMoreInfo;

@interface IESECGoodsDetailDetailImageItem : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) IESECURLModel *image;
@property (copy, nonatomic) NSString *picType;
@property (retain, nonatomic) IESECGoodsDetailDetailImageMoreInfo *moreInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
