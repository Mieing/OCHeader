@class NSString, IESLLifeURLModel;
@protocol IESLLFuseURLModel;

@interface IESLLPOICoverImageModel : IESLLifeBaseApiModel <IESLLFusePOICoverImageModel>

@property (readonly, nonatomic) id<IESLLFuseURLModel> f_imageLarge;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) IESLLifeURLModel *imageLarge;
@property (retain, nonatomic) IESLLifeURLModel *imageThumb;
@property (retain, nonatomic) IESLLifeURLModel *imageSmall;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
