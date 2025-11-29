@class NSString;

@interface IESLiveOuterComponentProviderImpl : NSObject <IESLiveOuterComponentProvider>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isSoftAdWithLiveInnerRoom:(id)a0 trackContext:(id)a1;
- (BOOL)isEffectAdWithLiveInnerRoom:(id)a0 trackContext:(id)a1;
- (id)registeredDuringLiveComponentsForRoom:(id)a0 componentContext:(id)a1 trackContext:(id)a2;
- (id)registeredBeforeLiveComponentsForRoom:(id)a0 componentContext:(id)a1 trackContext:(id)a2;
- (id)registeredAfterLiveComponentsForRoom:(id)a0 componentContext:(id)a1 trackContext:(id)a2;
- (id)playbackComponentsWithComponentContext:(id)a0 trackContext:(id)a1;

@end
