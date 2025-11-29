@class NSArray, ALMOwnPlayerTTSInfoConfig;

@interface ALMOwnPlayerTTSInfoConfigContainer : NSObject

@property (readonly, nonatomic) ALMOwnPlayerTTSInfoConfig *videoConfig;
@property (readonly, nonatomic) NSArray *audioConfigs;

- (id)initWithVideoConfig:(id)a0 audioConfigs:(id)a1;
- (void).cxx_destruct;

@end
