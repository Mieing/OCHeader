@class IESECShopProductsLynxPlayingState, NSString, IESECShopProductsPlayableTask;

@interface IESECShopProductsLynxControl : NSObject <IESECShopProductsPlayableMediaControl>

@property (retain, nonatomic) IESECShopProductsLynxPlayingState *state;
@property (readonly, nonatomic) IESECShopProductsPlayableTask *task;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)publishEventName:(id)a0 params:(id)a1;
- (void)playWithTask:(id)a0;
- (void)skipCurrentTask;
- (void)stopPlaying;
- (void).cxx_destruct;

@end
