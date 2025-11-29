@class IESLiveDressResourceWebP, NSString, IESLiveDressResourceParallax, HTSLiveProfileSkinConfig;

@interface IESLiveProfileSkinDressResource : NSObject <IESLiveDressResourceProtocol>

@property (retain, nonatomic) HTSLiveProfileSkinConfig *dressConfig;
@property (copy, nonatomic) NSString *configVersion;
@property (retain, nonatomic) IESLiveDressResourceWebP *borderBeginWebP;
@property (retain, nonatomic) IESLiveDressResourceWebP *borderLoopWebP;
@property (retain, nonatomic) IESLiveDressResourceWebP *profileCloseWebP;
@property (copy, nonatomic) NSString *webPMD5;
@property (retain, nonatomic) IESLiveDressResourceParallax *parallax;
@property (copy, nonatomic) NSString *parallaxMD5;
@property (retain, nonatomic) IESLiveDressResourceParallax *topOverlayParallax;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isResourceComplete;
- (BOOL)hasEffectResource;
- (void).cxx_destruct;

@end
