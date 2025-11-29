@class NSString, IESECURLModel;

@interface IESECGoodsDetailDetailImageMoreInfo : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) IESECURLModel *originImage;
@property (copy, nonatomic) NSString *title;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
