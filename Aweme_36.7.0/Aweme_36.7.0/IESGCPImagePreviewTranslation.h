@class UIView, NSString, IESGCPImagePreviewViewController;

@interface IESGCPImagePreviewTranslation : NSObject <UIViewControllerAnimatedTransitioning>

@property (nonatomic) BOOL isBrowserMainView;
@property (weak, nonatomic) IESGCPImagePreviewViewController *previewViewController;
@property (retain, nonatomic) UIView *browserControllerView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
