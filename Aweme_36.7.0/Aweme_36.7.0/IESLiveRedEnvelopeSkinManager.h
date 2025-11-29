@class BoxListResponse_ResponseData, IESLiveRedEnvelopeSkinModel, IESLiveRedEnvelopeSmallSkinModel;
@protocol IESLiveWebImageService;

@interface IESLiveRedEnvelopeSkinManager : NSObject

@property (retain, nonatomic) IESLiveRedEnvelopeSkinModel *skinModel;
@property (retain, nonatomic) IESLiveRedEnvelopeSmallSkinModel *smallSkinModel;
@property (retain, nonatomic) id<IESLiveWebImageService> webImageService;
@property (retain, nonatomic) BoxListResponse_ResponseData *currentShowingRedEnvelope;
@property (retain, nonatomic) BoxListResponse_ResponseData *currentShowingSmallRedEnvelope;
@property (copy, nonatomic) id /* block */ didUpdate;

- (void)setupObserver;
- (void)updateCurrentShowingRedEnvelope:(id)a0;
- (void)updateCurrentShowingSmallRedEnvelope:(id)a0;
- (id)enterBackgroundImageUrl:(id)a0;
- (void)p_DressListStorageDidUpdate;
- (void)updateSmallModel:(id)a0;
- (id)getWebDecoder:(id)a0;
- (void)fetchResourceImmediately:(id)a0;
- (void)updateCurrentShowingRedEnvelopeAfterGrab:(id)a0;
- (void)p_DressListStorageDidUpdateHandler:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)updateModel:(id)a0;

@end
