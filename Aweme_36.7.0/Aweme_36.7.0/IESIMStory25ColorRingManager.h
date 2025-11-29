@class NSString;
@protocol AFDColorRingFacadeProtocol;

@interface IESIMStory25ColorRingManager : NSObject <IESIMStory25ColorRingProtocol>

@property (retain, nonatomic) id<AFDColorRingFacadeProtocol> colorRingFacade;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (double)ringAvatarRatio;
- (BOOL)shouldShowColorRing;
- (void)setTransitionStartView:(id)a0;
- (void)setDidTapBlock:(id /* block */)a0;
- (void)setDidUpdateStatusBlock:(id /* block */)a0;
- (void)trackColorRingShow;
- (id)getColorRingSceneWithImScene:(long long)a0;
- (id)getColorRingView;
- (id)initWithUid:(id)a0 imScene:(long long)a1;
- (void).cxx_destruct;
- (void)prepareForReuse;

@end
