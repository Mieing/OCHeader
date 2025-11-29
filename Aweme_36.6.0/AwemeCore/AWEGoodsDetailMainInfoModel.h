@class NSString, AWEGDImageVOModel;

@interface AWEGoodsDetailMainInfoModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) AWEGDImageVOModel *imageVO;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
