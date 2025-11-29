@class NSString;

@interface AWETransferToNewCoverEditViewControllerManager : NSObject <AWETransferToNewCoverEditViewControllerManagerProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)enablePreupload;
+ (void)transferToNewCoverEditViewControllerWithPublishViewModel:(id)a0 transitioningDelegate:(id)a1 exitCallBack:(id /* block */)a2 customDismissBlock:(id /* block */)a3 extraInfo:(id)a4;
+ (void)preloadImageTemplateUsedInfoWith:(id)a0;
+ (void)proloadFixedTemplateResources;
+ (void)appendTrackInfoWithCoverModel:(id)a0 publishModel:(id)a1 extraInfo:(id)a2;
+ (void)preloadDefaultImageTemplateInfoWithRequestParams:(id)a0 trackParams:(id)a1;
+ (void)preloadImageTemplateListInsertModelInfoWith:(id)a0;
+ (void)transferToNewCoverEditViewControllerWithPublishViewModel:(id)a0 transitioningDelegate:(id)a1 exitCallBack:(id /* block */)a2;
+ (void)transferToNewCoverEditViewControllerWithPublishViewModel:(id)a0 transitioningDelegate:(id)a1 exitCallBack:(id /* block */)a2 extraInfo:(id)a3;
+ (void)preloadRecommendImageTemplateInfoWith:(id)a0 requestParams:(id)a1 trackParams:(id)a2;


@end
