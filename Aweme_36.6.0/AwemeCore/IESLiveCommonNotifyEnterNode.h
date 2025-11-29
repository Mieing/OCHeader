@class IESLiveNotifyEffectMessageScene, NSString, NSDictionary, HTSLiveNotifyEffectMessage_DynamicConfig, NSMutableArray, HTSLiveCombinedText, IESLiveNotifyEffectMessageBackground, NSNumber, HTSLiveText;

@interface IESLiveCommonNotifyEnterNode : NSObject <IESLiveUserEnterNodeProtocol>

@property (retain, nonatomic) NSNumber *aggregateCount;
@property (retain, nonatomic) id message;
@property (retain, nonatomic) NSMutableArray *icons;
@property (retain, nonatomic) HTSLiveText *displayText;
@property (retain, nonatomic) IESLiveNotifyEffectMessageBackground *background;
@property (retain, nonatomic) HTSLiveNotifyEffectMessage_DynamicConfig *dynamicConfig;
@property (retain, nonatomic) IESLiveNotifyEffectMessageScene *scene;
@property (nonatomic) BOOL isAggregated;
@property (retain, nonatomic) HTSLiveCombinedText *combinedText;
@property (nonatomic) double displayDuration;
@property (copy, nonatomic) NSString *type;
@property (copy, nonatomic) NSString *identifier;
@property (nonatomic) int priority;
@property (nonatomic) BOOL shouldStayInPowerSaveMode;
@property (nonatomic) BOOL discarded;
@property (nonatomic) double maxWaitTime;
@property (retain, nonatomic) NSNumber *showTime;
@property (copy, nonatomic) NSString *sceneName;
@property (copy, nonatomic) NSString *subSceneName;
@property (copy, nonatomic) NSDictionary *trackInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)aggregateInfo;
- (void)aggregateCombinedTextWithNode:(id)a0;
- (void).cxx_destruct;

@end
