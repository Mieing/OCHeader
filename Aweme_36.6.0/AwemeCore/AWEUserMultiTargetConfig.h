@class NSString;

@interface AWEUserMultiTargetConfig : NSObject <AWEUserMultiTargetConfigProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEUserMultiTargetConfigProtocolClass;
+ (id)shared;

- (void)loginButtonUIConfig:(id)a0;
- (void)updateCheckBoxColor:(id)a0;
- (BOOL)needBlockLoginButtonLottie;
- (BOOL)loginButtonIconAutoColor;
- (void)loginButtonMarkLayoutForDS:(id)a0;
- (id)loginButtonLottieName:(BOOL)a0;
- (id)loginButtonTitleWithLoginStyle:(unsigned long long)a0;
- (void)adjustCarrierTopView:(id)a0 containerView:(id)a1 logoView:(id)a2;
- (BOOL)isForceFullScreenPanel;
- (id)configLoginTitleWithLoginStyle:(unsigned long long)a0 extraParams:(id)a1;
- (id)subTitleConfigWithStyle:(unsigned long long)a0 extraParams:(id)a1;
- (id)aAWEUserMultiTargetConfigProtocol;

@end
