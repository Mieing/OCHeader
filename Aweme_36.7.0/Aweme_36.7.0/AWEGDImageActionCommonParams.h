@class AWEGDPreviewImageDetailPage, AWEGDFoodBigImage, NSString, AWEGDDefaultAction, AWEGDVideoAction;

@interface AWEGDImageActionCommonParams : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) AWEGDPreviewImageDetailPage *previewImageDetailPage;
@property (retain, nonatomic) AWEGDDefaultAction *defaultAction;
@property (retain, nonatomic) AWEGDFoodBigImage *foodBigImage;
@property (retain, nonatomic) AWEGDVideoAction *videoAction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
