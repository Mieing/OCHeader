@class IESECLiveContext;
@protocol IESECLiveLynxViewChangeDelegate;

@interface IESECLiveLynxManager : NSObject <IESECLigoLynxService>

@property (retain, nonatomic) IESECLiveContext *liveContext;
@property (weak, nonatomic) id<IESECLiveLynxViewChangeDelegate> delegate;

- (id)initWithLiveContext:(id)a0;
- (id)genLynxViewWithModel:(id)a0 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void).cxx_destruct;

@end
