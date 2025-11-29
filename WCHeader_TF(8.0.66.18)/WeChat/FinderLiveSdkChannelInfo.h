@interface FinderLiveSdkChannelInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned int audienceMode;
@property (nonatomic) unsigned int enableP2P;
@property (nonatomic) unsigned int audienceP2PSwitch;

+ (void)initialize;

- (void)setAudienceP2PSwitch:(unsigned int)a0;
- (unsigned int)audienceP2PSwitch;
- (void)setEnableP2P:(unsigned int)a0;
- (unsigned int)enableP2P;
- (void)setAudienceMode:(unsigned int)a0;
- (unsigned int)audienceMode;

@end
