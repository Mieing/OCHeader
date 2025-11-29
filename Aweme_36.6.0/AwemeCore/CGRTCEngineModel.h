@class NSString;

@interface CGRTCEngineModel : NSObject

@property (nonatomic) long long engineType;
@property (copy, nonatomic) NSString *rtcAppId;
@property (copy, nonatomic) NSString *rtcABLabel;
@property (nonatomic) BOOL enableRTCMulti;
@property (nonatomic) BOOL muteAudioPlayback;
@property (nonatomic) BOOL useVeGame;
@property (nonatomic) BOOL enableRTCExternalVideoRender;

- (void).cxx_destruct;

@end
