@class NSString;

@interface IESECDetailMediaPreviewFeature : NSObject <IESECDetailMediaPreviewFeature, IESECImagePreviewTransitionContextProvider>

@property (class, readonly, nonatomic) IESECDetailMediaPreviewFeature *shared;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)mediaPreviewViewControllerWithMediaRequest:(id)a0;
- (id)targetViewForImagePreviewController:(id)a0 atIndex:(long long)a1;
- (id)mediaPreviewViewControllerForCommentWithRequest:(id)a0;
- (id)pdpHeadPreviewViewControllerWithRequest:(id)a0;
- (id)configWithRequest:(id)a0;
- (id)createVideoPlayerViewWithVideoModel:(id)a0;
- (id)requestFromAssociatedVC:(id)a0;
- (id)init;
- (void)dealloc;

@end
