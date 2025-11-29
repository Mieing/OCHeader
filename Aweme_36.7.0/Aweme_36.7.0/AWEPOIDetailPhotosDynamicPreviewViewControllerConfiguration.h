@class DitoPageContext, NSString, NSArray, NSDictionary, AWEPOIPreviewContainerManager, AWEPOIPreviewPageLogModel;

@interface AWEPOIDetailPhotosDynamicPreviewViewControllerConfiguration : AWEPOIDetailPhotosPreviewBaseConfiguration

@property (copy, nonatomic) NSString *sessionID;
@property (copy, nonatomic) NSString *scene;
@property (copy, nonatomic) NSArray *photos;
@property (retain, nonatomic) AWEPOIPreviewContainerManager *headerManager;
@property (retain, nonatomic) AWEPOIPreviewContainerManager *bottomManager;
@property (retain, nonatomic) AWEPOIPreviewPageLogModel *showParams;
@property (retain, nonatomic) AWEPOIPreviewPageLogModel *slideParams;
@property (retain, nonatomic) AWEPOIPreviewPageLogModel *closeParams;
@property (copy, nonatomic) NSDictionary *lynxParams;
@property (nonatomic) long long totalResourceCount;
@property (nonatomic) BOOL useDefaultBounce;
@property (retain, nonatomic) DitoPageContext *context;
@property (copy, nonatomic) NSString *uniqueId;

- (void).cxx_destruct;

@end
