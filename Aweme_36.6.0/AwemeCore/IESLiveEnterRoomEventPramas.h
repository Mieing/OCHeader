@class NSString, NSDictionary, IESLiveMonitorContext, NSMutableDictionary, NSNumber;

@interface IESLiveEnterRoomEventPramas : NSObject {
    NSMutableDictionary *_optContextParams;
    NSMutableDictionary *_optFirstShowParams;
    NSMutableDictionary *_optClickCxtParams;
    NSMutableDictionary *_optClickParams;
}

@property (copy, nonatomic) NSDictionary *contextParams;
@property (copy, nonatomic) NSDictionary *clickCxtParams;
@property (copy, nonatomic) NSDictionary *firstShowParams;
@property (copy, nonatomic) NSDictionary *clickParams;
@property (copy, nonatomic) NSString *feedType;
@property (nonatomic) int feedLabelType;
@property (nonatomic) int mainFeedLabelType;
@property (retain, nonatomic) NSString *cityName;
@property (copy, nonatomic) NSString *actionType;
@property (copy, nonatomic) NSString *drawerPage;
@property (retain, nonatomic) NSString *outerRequestID;
@property (copy, nonatomic) NSString *previousPage;
@property (retain, nonatomic) NSNumber *portalID;
@property (copy, nonatomic) NSString *originatingRoomID;
@property (copy, nonatomic) NSString *originatingAuthorID;
@property (nonatomic) unsigned long long returnType;
@property (copy, nonatomic) NSString *innerPushType;
@property (nonatomic) BOOL isFromDouPlusVideo;
@property (retain, nonatomic) NSDictionary *douPlusExtra;
@property (copy, nonatomic) NSString *douPlusExtraString;
@property (nonatomic) BOOL isFromEffectAdVideo;
@property (retain, nonatomic) NSDictionary *effectAdExtra;
@property (copy, nonatomic) NSString *effectAdExtraString;
@property (nonatomic) long long starlightRank;
@property (retain, nonatomic) NSDictionary *monitorContext;
@property (retain, nonatomic) IESLiveMonitorContext *monitor;
@property (nonatomic) long long liveAdType;
@property (copy, nonatomic) NSString *gdLabel;
@property (copy, nonatomic) NSString *videoPointType;
@property (copy, nonatomic) NSString *enterSourceExtra;
@property (copy, nonatomic) NSDictionary *sourceExtraParams;
@property (nonatomic) BOOL shouldUseDislikeNewInterface;
@property (retain, nonatomic) NSString *dislikePath;
@property (retain, nonatomic) NSString *dislikeBaseUrl;
@property (retain, nonatomic) NSString *dislikeAdType;
@property (nonatomic) double enterLiveFeedTimestamp;
@property (nonatomic) unsigned long long landscapeScene;
@property (nonatomic) BOOL isFromAD;

- (void)addParams:(id)a0 type:(unsigned long long)a1;
- (void)updateParam:(id)a0 forKey:(id)a1 type:(unsigned long long)a2;
- (void)addEventParamsWithJsonString:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
