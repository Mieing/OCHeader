@class NSString, AWEURLModel;
@protocol IESLLFuseURLModel;

@interface AWEPOICoverImageModel : AWEBaseApiModel <IESLLFusePOICoverImageModel>

@property (readonly, nonatomic) id<IESLLFuseURLModel> f_imageLarge;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) AWEURLModel *imageLarge;
@property (retain, nonatomic) AWEURLModel *imageThumb;
@property (retain, nonatomic) AWEURLModel *imageSmall;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
