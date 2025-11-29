@class NSString, NSArray, IESLLPOIPreviewContainerManager, IESLLPOIPreviewPageLogModel, NSDictionary, LLDitoPageContext;

@interface IESLLPOIDetailPhotosDynamicPreviewViewControllerConfiguration : IESLLPOIDetailPhotosPreviewBaseConfiguration

@property (copy, nonatomic) NSString *sessionID;
@property (copy, nonatomic) NSString *scene;
@property (copy, nonatomic) NSArray *photos;
@property (retain, nonatomic) IESLLPOIPreviewContainerManager *headerManager;
@property (retain, nonatomic) IESLLPOIPreviewContainerManager *bottomManager;
@property (retain, nonatomic) IESLLPOIPreviewPageLogModel *showParams;
@property (retain, nonatomic) IESLLPOIPreviewPageLogModel *slideParams;
@property (retain, nonatomic) IESLLPOIPreviewPageLogModel *closeParams;
@property (copy, nonatomic) NSDictionary *lynxParams;
@property (nonatomic) long long totalResourceCount;
@property (nonatomic) BOOL useDefaultBounce;
@property (retain, nonatomic) LLDitoPageContext *context;
@property (copy, nonatomic) NSString *uniqueId;

- (void).cxx_destruct;

@end
