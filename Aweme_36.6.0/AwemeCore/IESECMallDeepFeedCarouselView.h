@protocol IESECMallDeepFeedCarouselViewDelegate;

@interface IESECMallDeepFeedCarouselView : IESECContentCarouselView

@property (weak, nonatomic) id<IESECMallDeepFeedCarouselViewDelegate> delegate;

- (void)addVideoPlayerToFirstCell:(id)a0;
- (void)setEnterProductDetailBlock:(id /* block */)a0;
- (void)setHasVideoPlayer:(BOOL)a0;
- (void)setTrailerContentView:(id)a0 withRefreshingBlock:(id /* block */)a1;
- (Class)collectionIdentifierClass;
- (Class)cellIdentifierClass;

@end
