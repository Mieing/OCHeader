@class NSString;

@interface IESECMediaPreviewFeature : NSObject <IESECMediaPreviewFeature>

@property (class, readonly, nonatomic) IESECMediaPreviewFeature *shared;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)mediaPreviewViewControllerWithMediaRequest:(id)a0;
- (id)mediaPreviewVCForCommentWithMediaRequest:(id)a0;
- (void)reloadData:(id)a0 mediaRequest:(id)a1;
- (id)createVideoPlayerViewWithVideoModel:(id)a0;
- (id)createVideoPlayerViewWithVideoModel:(id)a0 needCookie:(BOOL)a1;
- (id)init;
- (void)dealloc;

@end
