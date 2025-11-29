@class BDSimPlayerConfiguration, BDSimPlayerConfig, NSObject;
@protocol BDSimPlayerBizConfiguring, IESVideoPlayerProtocol;

@interface BDSimPlayerCreator : NSObject

@property (retain, nonatomic) BDSimPlayerConfiguration *playerConfigration;
@property (retain, nonatomic) id<BDSimPlayerBizConfiguring> bizConfig;
@property (retain, nonatomic) BDSimPlayerConfig *configuration;
@property (retain, nonatomic) NSObject<IESVideoPlayerProtocol> *playerController;

+ (id)createPlayerWithConfiguration:(id)a0;

- (void)setupPlayerConfig;
- (void).cxx_destruct;
- (id)initWithConfiguration:(id)a0;
- (void)setupPlayer;
- (void)setupConfig;

@end
