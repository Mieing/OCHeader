@class NSString, NSDictionary, NSArray, NSMutableDictionary;
@protocol IESLiveXPlayRTCInfoProtocol;

@interface IESLiveInteractXPlayModel : NSObject <IESLiveXPlayModelProtocol>

@property (copy, nonatomic) NSString *gameId;
@property (copy, nonatomic) NSString *channel;
@property (nonatomic) unsigned long long displayWidth;
@property (nonatomic) unsigned long long displayHeight;
@property (nonatomic) long long originX;
@property (nonatomic) long long originY;
@property (nonatomic) BOOL enableRTCMulti;
@property (nonatomic) BOOL muteAudioPlayback;
@property (nonatomic) BOOL enablePixelBuffer;
@property (nonatomic) BOOL enableAudioFrame;
@property (nonatomic) BOOL enableExternalRenderer;
@property (nonatomic) BOOL enableFrameSEIData;
@property (nonatomic) BOOL enablePureDetect;
@property (copy, nonatomic) NSDictionary *appExtra;
@property (copy, nonatomic) NSDictionary *xPlayExtra;
@property (copy, nonatomic) NSString *pushStreamMode;
@property (copy, nonatomic) NSString *pushAudioStreamMode;
@property (copy, nonatomic) NSString *startAppParamInject;
@property (nonatomic) long long sceneType;
@property (nonatomic) BOOL enableMultiCloudPlayers;
@property (copy, nonatomic) NSArray *cloudPlayerNames;
@property (copy, nonatomic) NSArray *videoSimulcast;
@property (retain, nonatomic) id<IESLiveXPlayRTCInfoProtocol> appRTCInfo;
@property (copy, nonatomic) NSDictionary *ueRTCInfo;
@property (copy, nonatomic) NSDictionary *forwardInfo;
@property (retain, nonatomic) NSMutableDictionary *ueInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithGameId:(id)a0 channel:(id)a1;
- (void).cxx_destruct;

@end
