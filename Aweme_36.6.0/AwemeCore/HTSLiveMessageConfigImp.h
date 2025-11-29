@class NSDictionary, NSString, NSNumber;

@interface HTSLiveMessageConfigImp : NSObject <IESLiveMessageConfig>

@property (nonatomic) BOOL enableWS;
@property (nonatomic) BOOL enableExtraFrontier;
@property (nonatomic) BOOL enableZstdDict;
@property (nonatomic) BOOL enableWRDS;
@property (nonatomic) BOOL useUnifiedChannel;
@property (nonatomic) long long businessService;
@property (nonatomic) long long businessMethod;
@property (retain, nonatomic) NSDictionary *customParams;
@property (retain, nonatomic) NSDictionary *customHeaders;
@property (copy, nonatomic) NSString *websocketUrl;
@property (nonatomic) BOOL websocketFirst;
@property (copy, nonatomic) NSString *httpUrl;
@property (nonatomic) BOOL httpFirstFetchEnabled;
@property (nonatomic) BOOL needFetchHistoryMessage;
@property (nonatomic) BOOL needSkipFetchTopMessage;
@property (nonatomic) BOOL isAnchor;
@property (retain, nonatomic) NSNumber *roomID;
@property (retain, nonatomic) NSString *subRoomID;
@property (retain, nonatomic) NSString *subChannelID;
@property (copy) NSString *identityString;
@property (copy, nonatomic) NSString *livePlatformSource;
@property (retain, nonatomic) NSNumber *systemType;
@property (nonatomic) long long liveRoomScene;
@property (nonatomic) unsigned long long decoderSceneType;
@property (nonatomic) long long episodeStage;
@property (nonatomic) BOOL forceSerialDecode;
@property (nonatomic) double shortLinkFallbackDelay;
@property (nonatomic) double shortLinkFallbackDelayMax;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)getLiveSceneStringFromLiveRoomScene;
- (void).cxx_destruct;
- (id)init;

@end
