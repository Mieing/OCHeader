@class NSString, AWEDTOFusionCoverImgModel, AWEDTOAigcLoraCoverImgModel, AWEDTOAigcTemplateCoverImg;

@interface AWEDTOCoverImgModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) AWEDTOAigcTemplateCoverImg *aigcTemplateCoverImg;
@property (retain, nonatomic) AWEDTOAigcLoraCoverImgModel *aigcLoraCoverImgModel;
@property (retain, nonatomic) AWEDTOFusionCoverImgModel *fusionCoverImgInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)aigcTemplateCoverImgJSONTransformer;
+ (id)aigcLoraCoverImgModelJSONTransformer;
+ (id)fusionCoverImgInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
