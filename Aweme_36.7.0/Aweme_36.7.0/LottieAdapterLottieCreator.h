@class NSString;

@interface LottieAdapterLottieCreator : NSObject <LottieAdapterCreator>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)createAdapter;
- (id)createAdapterWithAnimationNamed:(id)a0;
- (id)createAdapterWithAnimationNamed:(id)a0 inBundle:(id)a1;
- (id)createAdapterWithJSON:(id)a0;
- (id)createAdapterWithJSON:(id)a0 inBundle:(id)a1;
- (id)createAdapterWithFilePath:(id)a0;
- (id)createAdapterWithURL:(id)a0;

@end
