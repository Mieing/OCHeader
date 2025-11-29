@class NSString;

@interface AWELiveDFAnimationServiceImpl : NSObject <IESLiveDFAnimationService> {
    BOOL _enableImplicitAnimation;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)createAvatorScale:(float)a0;
- (id)createAvatorAlpha:(float)a0 uiSimplify:(unsigned long long)a1;
- (void)DF_AddDiggAnimToView:(id)a0 controlPoints:(id)a1 switchAvator:(BOOL)a2 uiSimplifyLevel:(unsigned long long)a3 completion:(id /* block */)a4 avatorBlock:(id /* block */)a5;
- (void)DF_playAvatorIconChangeAnimBorderLayer:(id)a0 avatorLayer:(id)a1 iconLayer:(id)a2 beginTime:(float)a3 uiSimplify:(unsigned long long)a4;
- (id)init;

@end
