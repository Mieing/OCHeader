@class IESLLGDVideoAction, IESLLGDDefaultAction, IESLLGDPreviewImageDetailPage, IESLLGDFoodBigImage, NSString;

@interface IESLLGDImageActionCommonParams : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) IESLLGDPreviewImageDetailPage *previewImageDetailPage;
@property (retain, nonatomic) IESLLGDDefaultAction *defaultAction;
@property (retain, nonatomic) IESLLGDFoodBigImage *foodBigImage;
@property (retain, nonatomic) IESLLGDVideoAction *videoAction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
