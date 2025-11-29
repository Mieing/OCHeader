@class HTSLiveSourceInfo, NSMutableDictionary;

@interface HTSEventContext : HTSEventBuilder {
    HTSEventContext *_parentContext;
}

@property (retain, nonatomic) HTSLiveSourceInfo *sourceInfo;
@property (retain, nonatomic) NSMutableDictionary *attributesHash;
@property (retain, nonatomic) NSMutableDictionary *contextInfoHash;

+ (id)constructTrackContextWithModelParams:(id)a0 params:(id)a1;
+ (id)contextWithParams:(id)a0;
+ (id)contextWithEnterFrom:(id)a0 enterMethod:(id)a1;
+ (id)liveContext;
+ (id)contextFromRoom:(id)a0;
+ (id)liveTakeDetailPageContextWithRoom:(id)a0;
+ (id)liveDetailPageContextWithRoom:(id)a0;

- (id)logExtra;
- (id)enterFrom;
- (id)enterMethod;
- (id)adID;
- (id)currentThemeName;
- (void)addContextParams:(id)a0 withKey:(id)a1;
- (id)adExtra;
- (id)monitorContext;
- (id)createEventBuilder;
- (id)addedAttirbutes;
- (id)createChildContext;
- (id)makeEvent:(id /* block */)a0;
- (void)removeContextParamsByKey:(id)a0;
- (id)roomType;
- (id)dislikeAdType;
- (void)addAttributeWithFormatRoom:(id)a0;
- (id)fromUserID;
- (id)fromSecUid;
- (void)setSegueTracker:(id)a0 forKey:(id)a1;
- (id)buildEnterRoomSourcePage;
- (id)segueTrackerForKey:(id)a0;
- (BOOL)isPaidLive;
- (void)addCommomAttributesForVSLiveRoom:(id)a0;
- (id)enterSourceExtra;
- (id)adChannel;
- (BOOL)isAnchorWithRoom:(id)a0;
- (id)makeEventWithLiveRoomModel:(id)a0 block:(id /* block */)a1;
- (id)dislikeBaseUrl;
- (id)dislikePath;
- (id)aggrcardsExtra;
- (BOOL)autoLinkMicFromCityEntrance;
- (void)addMonitorValue:(id)a0 forKey:(id)a1;
- (void)removeMonitorValueForKey:(id)a0;
- (void)addMonitorContextFromDic:(id)a0;
- (BOOL)isEnableSwipe;
- (id)applySource;
- (void)updateOrientation;
- (void)constructTrackContextWithModel:(id)a0;
- (void)addCommomAttributeWithKey:(id)a0 value:(id)a1;
- (id)fromUserType;
- (id)forkableParams;
- (id)throwRoomId;
- (BOOL)autoLinkMicNormal;
- (BOOL)isStrongReachMode;
- (id)buildQuerySource;
- (id)autoLinkMicAction;
- (id)jointAnchorID;
- (id)forkLiveContext;
- (void)updateIsFullScreen;
- (void)addVSAttributesFromParams:(id)a0;
- (void)addCommomAttributesForVSVideoRoom:(id)a0;
- (id)vsEnterFrom;
- (id)vsEnterMethod;
- (id)requestID;
- (id)debugInfo;
- (void).cxx_destruct;
- (id)scenario;
- (id)build;
- (id)actionType;
- (id)addAttribute:(id)a0;
- (id)isPortrait;
- (BOOL)isAd;
- (id)videoID;
- (id)applyType;
- (id)userType:(id)a0;
- (id)creativeID;
- (id)addAttribute:(id)a0 value:(id)a1;

@end
