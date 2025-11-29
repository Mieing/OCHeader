@class HTSLiveCombineType, NSMutableDictionary, HTSLiveCardDisplayInfo, HTSLiveAnimConfig, NSNumber;

@interface HTSLiveBottomRightCardArea : IESLivePBBaseMessage

@property (retain, nonatomic) NSNumber *displayTime;
@property (retain, nonatomic) NSNumber *delayShowTime;
@property (nonatomic) BOOL isEnterRoomScene;
@property (retain, nonatomic) NSMutableDictionary *extraInfo;
@property (nonatomic) int type;
@property (nonatomic) unsigned int priority;
@property (nonatomic) int toolbarType;
@property (retain, nonatomic) HTSLiveCombineType *combineType;
@property (nonatomic) BOOL hasCombineType;
@property (retain, nonatomic) HTSLiveCardDisplayInfo *cardDisplayInfo;
@property (nonatomic) BOOL hasCardDisplayInfo;
@property (retain, nonatomic) HTSLiveAnimConfig *animConfig;
@property (nonatomic) BOOL hasAnimConfig;
@property (nonatomic) BOOL isPreloading;
@property (nonatomic) int mockType;

+ (id)descriptor;

- (id)dictionary;

@end
