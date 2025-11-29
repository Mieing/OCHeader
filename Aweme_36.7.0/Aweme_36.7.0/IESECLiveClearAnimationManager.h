@class IESECLiveContext;
@protocol IESECLiveClearAnimationDelegate;

@interface IESECLiveClearAnimationManager : NSObject

@property (nonatomic) long long referenceCount;
@property (retain, nonatomic) IESECLiveContext *liveContext;
@property (weak, nonatomic) id<IESECLiveClearAnimationDelegate> delegate;

- (id)initWithDelegate:(id)a0 liveContext:(id)a1;
- (void)handleFullScreen:(id)a0;
- (void)handleHalfScreen;
- (void)handleNormalScreen;
- (void)handleQuitGoodsDetail;
- (void)handleEnterGoodsDetail;
- (void).cxx_destruct;
- (void)dealloc;

@end
