@protocol IESGCPTrackContextProvider;

@interface IESGCPVideoAudienceDetailViewModel : IESGCPGameDetailViewModel

@property (weak, nonatomic) id<IESGCPTrackContextProvider> parentProvider;

- (id)provideTrackContext;
- (id)initWithRouterModel:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)detailViewStyle;

@end
