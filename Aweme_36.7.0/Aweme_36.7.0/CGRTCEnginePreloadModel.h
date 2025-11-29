@class NSString, NSDictionary;

@interface CGRTCEnginePreloadModel : NSObject

@property (copy, nonatomic) NSString *gameId;
@property (copy, nonatomic) NSString *channel;
@property (retain, nonatomic) NSDictionary *clientLibraLabelDictionary;
@property (nonatomic) BOOL muteAudioPlayback;

- (void).cxx_destruct;

@end
