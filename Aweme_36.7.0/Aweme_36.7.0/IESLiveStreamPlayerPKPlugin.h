@class NSNumber, NSString;

@interface IESLiveStreamPlayerPKPlugin : IESLiveStreamPlayerBasePlugin <IESLiveStreamPlayerPKPluginProtocol>

@property (retain, nonatomic) NSNumber *doubleInterationDistance;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)shouldActivatePlugin;

- (id)multiLinkerDistance;
- (id)multiLinkerGridRatioFrames;
- (BOOL)isNeedUpdateMultiLinkerLayoutParam;
- (void)setIsNeedUpdateMultiLinkerLayoutParam:(BOOL)a0;
- (BOOL)isInPKMode;
- (BOOL)isInMultiLinkerMode;
- (BOOL)isSonicShareScreen;
- (void)reuseMetaSEIImmediately;
- (void)pe_bizHostDidInit;

@end
