@class IESLiveBackgroundView, NSTimer, NSDictionary, UIImage, NSString, HTSLiveRoom;
@protocol IESLivePlayerProtocol;

@interface IESLiveDynamicBackgroundUpdater : NSObject <IESLiveDynamicBackgroundUpdaterService>

@property (readonly, weak, nonatomic) id<IESLivePlayerProtocol> player;
@property (readonly, nonatomic) NSTimer *timer;
@property (readonly, nonatomic) HTSLiveRoom *roomModel;
@property (readonly, copy, nonatomic) NSDictionary *backgroundCategory;
@property (retain, nonatomic) IESLiveBackgroundView *backgroundView;
@property (retain, nonatomic) UIImage *updateImage;
@property (nonatomic) BOOL inPauseState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateWithRoomModel:(id)a0 defaultBackgroundImage:(id)a1;
- (BOOL)startWithPlayer:(id)a0;
- (BOOL)subscribeUpdateWithBackgroundViewIfNeeded:(id)a0;
- (BOOL)isRoomSupport:(struct CGSize { double x0; double x1; })a0;
- (void)updateLivePlayerBackground;
- (void)generateBackgroundImage:(id /* block */)a0;
- (void)updateDefaultBackgroundImage:(id)a0;
- (void).cxx_destruct;
- (void)stop;
- (void)resumeUpdate;
- (void)pauseUpdate;
- (void)reset;
- (void)dealloc;
- (id)currentBackgroundImage;
- (BOOL)hasRendered;

@end
