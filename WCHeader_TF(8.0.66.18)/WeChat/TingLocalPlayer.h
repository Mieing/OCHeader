@class NSString, MsgFileDetailLogicController;

@interface TingLocalPlayer : TingAudioPlayer

@property (retain, nonatomic) NSString *filePath;
@property (retain, nonatomic) MsgFileDetailLogicController *msgFileLogicController;

- (id)audioInfo;
- (BOOL)isPlayRateSupported;
- (void).cxx_destruct;

@end
