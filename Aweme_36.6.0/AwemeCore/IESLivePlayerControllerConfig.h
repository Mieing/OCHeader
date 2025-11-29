@class IESLivePlayerTrackerConfig, NSString, IESLivePlayerClarityStrategyInfo, NSNumber;

@interface IESLivePlayerControllerConfig : NSObject <IESLivePlayerControllerConfigProtocol>

@property (retain) NSString *roomIDStr;
@property (retain, nonatomic) NSString *anchorIDStr;
@property (retain, nonatomic) NSNumber *roomID;
@property (retain, nonatomic) NSNumber *anchorID;
@property (retain, nonatomic) IESLivePlayerTrackerConfig *trackerConfig;
@property (retain, nonatomic) NSString *streamData;
@property (retain, nonatomic) NSString *streamURL;
@property (nonatomic) BOOL prepareForReuse;
@property (nonatomic) long long scaleType;
@property (copy, nonatomic) NSString *sdkKey;
@property (retain, nonatomic) IESLivePlayerClarityStrategyInfo *clarityStrategyInfo;
@property (nonatomic) BOOL muted;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)defaultConfig;

- (id)initWithRoomID:(id)a0;
- (id)stainedTrackInfo;
- (id)initWithTrackConfig:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
