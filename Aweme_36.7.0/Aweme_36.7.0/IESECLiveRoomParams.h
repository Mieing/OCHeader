@class NSString, NSDictionary, NSNumber;

@interface IESECLiveRoomParams : NSObject <NSCopying, IESECLiveRoomParamsInterface>

@property (readonly, nonatomic) NSString *messageTargetRoomID;
@property (retain, nonatomic) NSDictionary *contextParams;
@property (retain, nonatomic) NSDictionary *ecomLiveParams;
@property (retain, nonatomic) NSDictionary *originEcomLiveParams;
@property (copy, nonatomic) NSString *adType;
@property (copy, nonatomic) NSString *adID;
@property (copy, nonatomic) NSString *creativeID;
@property (copy, nonatomic) NSString *isOtherChannel;
@property (copy, nonatomic) NSString *logExtraStr;
@property (copy, nonatomic) NSDictionary *channelExtra;
@property (copy, nonatomic) NSDictionary *searchParams;
@property (copy, nonatomic) NSString *requestID;
@property (copy, nonatomic) NSString *liveRecommendInfo;
@property (copy, nonatomic) NSString *episodeID;
@property (copy, nonatomic) NSDictionary *episodeEntranceInfo;
@property (copy, nonatomic) NSString *authorID;
@property (copy, nonatomic) NSString *displayAnchorID;
@property (copy, nonatomic) NSString *secAuthorID;
@property (copy, nonatomic) NSString *displaySecAnchorID;
@property (copy, nonatomic) NSString *roomID;
@property (copy, nonatomic) NSString *displayRoomID;
@property (copy, nonatomic) NSString *enterFromMerge;
@property (copy, nonatomic) NSString *enterMethod;
@property (copy, nonatomic) NSString *groupID;
@property (copy, nonatomic) NSString *actionType;
@property (copy, nonatomic) NSNumber *followStatus;
@property (copy, nonatomic) NSNumber *displayFollowStatus;
@property (copy, nonatomic) NSNumber *instantType;
@property (copy, nonatomic) NSNumber *isEcomRoom;
@property (copy, nonatomic) NSString *ecomRouteRule;
@property (nonatomic) long long ecomRouteRulePriority;
@property (copy, nonatomic) NSDictionary *businessParams;
@property (nonatomic) long long businessScene;
@property (nonatomic) double enterRoomTime;
@property (copy, nonatomic) NSString *containerRoomID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithContextParams:(id)a0;
- (BOOL)isInstantRoom;
- (void)updateEcomRouteRule:(id)a0 priority:(long long)a1;
- (id)copyWithRoomID:(id)a0 anchorID:(id)a1 secAnchorID:(id)a2 followStatus:(id)a3;
- (void)updateWithExtraParams:(id)a0;
- (void)p_setupWithParams:(id)a0;
- (void)p_handleLiveCoreParams:(id)a0;
- (void)p_handleADParamsWithParams:(id)a0;
- (void)p_handleSearchParamsWithParams:(id)a0;
- (void)p_handleEcomLiveParamsWithParams:(id)a0;
- (void)p_handlePlaybackParamsWithParams:(id)a0;
- (id)copyWithMergeParams:(id)a0;
- (id)liveOriginURLParams;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
