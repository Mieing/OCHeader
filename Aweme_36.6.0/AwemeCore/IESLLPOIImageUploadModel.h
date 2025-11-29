@class NSString, IESLLPOICoverImageModel;
@protocol IESLLFusePOICoverImageModel;

@interface IESLLPOIImageUploadModel : IESLLifeBaseApiModel <IESLLFusePOIImageUploadModel>

@property (readonly, nonatomic) id<IESLLFusePOICoverImageModel> f_coverImage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL show;
@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) IESLLPOICoverImageModel *coverImage;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
