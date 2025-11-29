@class NSString, NSDictionary, NSArray, NSMutableArray;
@protocol XPlayResolution;

@interface CGConfiguration : XPlayConfiguration

@property (retain, nonatomic) NSMutableArray *_supportResolutions;
@property (copy, nonatomic) NSString *realGameId;
@property (copy, nonatomic) NSString *token;
@property (nonatomic) long long frameWidth;
@property (nonatomic) long long frameHeight;
@property (copy, nonatomic) NSString *enironment;
@property (nonatomic) BOOL useNativeKeyboard;
@property (copy, nonatomic) NSString *rtcAppId;
@property (nonatomic) long long gamePlayType;
@property (copy, nonatomic) NSString *roomId;
@property (copy, nonatomic) NSString *podId;
@property (copy, nonatomic) NSString *rtcUserId;
@property (copy, nonatomic) NSString *rtcBusinessId;
@property (copy, nonatomic) NSString *rtcABLabel;
@property (copy, nonatomic) NSString *llamaABLabel;
@property (copy, nonatomic) NSString *mergeStreamToken;
@property (copy, nonatomic) NSString *veGameGameId;
@property (copy, nonatomic) NSString *veGameExtra;
@property (copy, nonatomic) NSDictionary *llamaConfig;
@property (copy, nonatomic) NSString *podDc;
@property (copy, nonatomic) NSString *planId;
@property (copy, nonatomic) NSString *productId;
@property (copy, nonatomic) NSString *podDeviceModel;
@property (copy, nonatomic) NSString *podGPUInfo;
@property (nonatomic) BOOL useProtobufUp;
@property (nonatomic) BOOL useVeGame;
@property (nonatomic) BOOL useSeiPB;
@property (nonatomic) BOOL useMessageSDK;
@property (nonatomic) BOOL isPodReconnect;
@property (copy, nonatomic) NSString *instanceResponseString;
@property (nonatomic) struct CGSize { double width; double height; } normlizedGameSize;
@property (nonatomic) struct CGSize { double width; double height; } rtcVideoSize;
@property (copy, nonatomic) NSString *podUserId;
@property (copy, nonatomic) NSString *matchPodUserId;
@property (nonatomic) BOOL customMsgUseDataChannel;
@property (copy, nonatomic) NSArray *cloudPlayerInfos;
@property (retain, nonatomic) id<XPlayResolution> currentResolution;
@property (retain, nonatomic) id<XPlayResolution> currentAvailableResolution;

- (double)getEvenValue:(double)a0;
- (void)setupNormlizedGameSize;
- (BOOL)examineConfiguration;
- (BOOL)configurationSetWithDictionary:(id)a0;
- (id)debugInfo;
- (void).cxx_destruct;

@end
