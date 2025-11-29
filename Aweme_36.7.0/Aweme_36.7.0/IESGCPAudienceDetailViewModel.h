@protocol IESGCPTrackContextProvider;

@interface IESGCPAudienceDetailViewModel : IESGCPGameDetailViewModel

@property (weak, nonatomic) id<IESGCPTrackContextProvider> parentProvider;

- (id)provideTrackContext;
- (id)initWithRouterModel:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)detailViewStyle;

@end
