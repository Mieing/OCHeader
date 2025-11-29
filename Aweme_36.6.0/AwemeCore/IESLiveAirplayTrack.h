@class HTSEventContext, NSString, NSArray, NSDate;
@protocol IESLiveRoomService, BDSCDeviceProtocol;

@interface IESLiveAirplayTrack : NSObject

@property (retain, nonatomic) id<IESLiveRoomService> room;
@property (retain, nonatomic) HTSEventContext *trackContext;
@property (retain, nonatomic) NSString *deviceListRequestPage;
@property (nonatomic) BOOL isCastScreen;
@property (retain, nonatomic) NSString *screencastSessionId;
@property (nonatomic) long long screencastType;
@property (copy, nonatomic) NSString *screencastTypeString;
@property (retain, nonatomic) NSString *castMode;
@property (retain, nonatomic) NSDate *startSearchTime;
@property (retain, nonatomic) NSString *castUrl;
@property (retain, nonatomic) NSString *currentCodec;
@property (nonatomic) BOOL isShield;
@property (nonatomic) long long orientation;
@property (nonatomic) BOOL isLandscapeStream;
@property (copy, nonatomic) NSString *coder;
@property (copy, nonatomic) NSString *fetchCodec;
@property (copy, nonatomic) NSString *castSource;
@property (copy, nonatomic) NSString *castClickFrom;
@property (nonatomic) BOOL isConnected;
@property (nonatomic) BOOL needPauseLiveStream;
@property (retain, nonatomic) id<BDSCDeviceProtocol> currentDevice;
@property (copy, nonatomic) NSArray *bdDeviceArray;

- (id)trackParams;
- (id)initWithRoom:(id)a0 trackContext:(id)a1;
- (void)fullLinkTrackWithEventName:(id)a0 params:(id)a1;
- (void)trackRefreshUrlButtonClickWithStreamType:(id)a0;
- (void)trackFetchUrlWithType:(id)a0 error:(id)a1 duration:(double)a2 logID:(id)a3 statusCode:(id)a4;
- (id)networkString;
- (id)castScreenType;
- (void)trackPaywallIconLick;
- (void)trackDanmakuButtonClickWithStatus:(long long)a0;
- (void).cxx_destruct;

@end
