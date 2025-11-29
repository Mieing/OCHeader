@class NSString, AWESearchAIGCCardStatus;

@interface AWESearchAIGCDynamicCardInfo : NSObject

@property (nonatomic) BOOL isRealTime;
@property (nonatomic) BOOL isLastRound;
@property (nonatomic) BOOL isKeepAlive;
@property (copy, nonatomic) NSString *cardID;
@property (weak, nonatomic) AWESearchAIGCCardStatus *cardStatus;
@property (nonatomic) double searchStartTime;
@property (nonatomic) double requestStartTime;
@property (nonatomic) BOOL isVoicePlaying;
@property (nonatomic) double containerWidth;
@property (nonatomic) double titleCardHeight;
@property (nonatomic) BOOL enableSendSearchRecommendIntegrationToLynx;
@property (nonatomic) BOOL enableSendSearchRecommendIntegrationToLynx2;
@property (nonatomic) BOOL enableNewCustomAIGCService;
@property (copy, nonatomic) NSString *adShowType;

- (void).cxx_destruct;

@end
