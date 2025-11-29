@class AVPlayer;

@interface BDASplashEffectUtils : NSObject

@property (retain, nonatomic) AVPlayer *audioPlayer;
@property (nonatomic) unsigned long long detectOptions;

+ (id)sharedInstance;

- (void)startEffectWithType:(unsigned long long)a0;
- (id)initPrivate;
- (void).cxx_destruct;

@end
