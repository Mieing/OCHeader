@protocol IESLiveRoomService;

@interface IESLiveGiftAnimationSuperResolutionConfig : NSObject

@property (retain, nonatomic) id<IESLiveRoomService> room;
@property (readonly, nonatomic) BOOL enableBMF;
@property (readonly, nonatomic) BOOL useBMF20;

- (unsigned long long)superResolutionTriggerTypeWithEffectID:(id)a0 triggerBySelf:(BOOL)a1;
- (void).cxx_destruct;
- (id)initWithRoom:(id)a0;

@end
