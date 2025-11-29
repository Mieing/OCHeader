@class NSString, NSDictionary, IESLiveXPlayExternalRendererInfo, NSArray, IESLiveAnchorInteractiveGameModel;

@interface IESLiveXPlayGameModel : NSObject

@property (copy, nonatomic) NSString *appId;
@property (copy, nonatomic) NSString *gameId;
@property (copy, nonatomic) NSString *gameName;
@property (copy, nonatomic) NSString *gameIcon;
@property (copy, nonatomic) NSString *channel;
@property (copy, nonatomic) NSString *exeName;
@property (nonatomic) long long orientation;
@property (nonatomic) long long pcWidthRatio;
@property (nonatomic) long long pcHeightRatio;
@property (copy, nonatomic) NSString *h5Url;
@property (copy, nonatomic) NSString *entranceSchema;
@property (nonatomic) BOOL enablePixelBuffer;
@property (nonatomic) BOOL muteAudioPlayback;
@property (copy, nonatomic) NSDictionary *gameInfo;
@property (copy, nonatomic) NSDictionary *xplayExtra;
@property (copy, nonatomic) NSDictionary *appExtra;
@property (copy, nonatomic) NSDictionary *startAppExtra;
@property (readonly, copy, nonatomic) NSString *mobileH5Url;
@property (nonatomic) BOOL enableAudioFrame;
@property (readonly, nonatomic) long long renderMode;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } screenRect;
@property (nonatomic) long long sceneType;
@property (nonatomic) BOOL enableAnchorCustomCamera;
@property (nonatomic) BOOL enableClientAudioMix;
@property (nonatomic) BOOL enablePodMergeStream;
@property (readonly, nonatomic) BOOL enableWtnPushStream;
@property (readonly, copy, nonatomic) NSString *wtnStreamID;
@property (copy, nonatomic) NSDictionary *subscribeMixInfo;
@property (retain, nonatomic) IESLiveXPlayExternalRendererInfo *externalRenderInfo;
@property (copy, nonatomic) NSArray *videoSimulcastConfig;
@property (nonatomic) BOOL isFromSwitchAction;
@property (readonly, nonatomic) BOOL supportGuide;
@property (readonly, nonatomic) BOOL isRevertLive;
@property (retain, nonatomic) IESLiveAnchorInteractiveGameModel *gameModel;
@property (nonatomic) BOOL needRtcInfo;
@property (copy, nonatomic) NSString *linkMicID;
@property (copy, nonatomic) NSString *rtcExtraInfo;
@property (copy, nonatomic) NSString *rtcLiveCoreExtraInfo;
@property (copy, nonatomic) NSString *podRtcExtraInfo;
@property (copy, nonatomic) NSDictionary *xplayRtcExtraDic;
@property (readonly, nonatomic) BOOL isWatcher;

- (BOOL)isRTCInfoValid;
- (id)initWithGameModel:(id)a0 attachingDIContext:(id)a1 xplayExtra:(id)a2 appExtra:(id)a3;
- (void)updateGameModelAudioFrame:(BOOL)a0 muteAudioPlayback:(BOOL)a1 enablePixelBuffer:(BOOL)a2;
- (void).cxx_destruct;

@end
