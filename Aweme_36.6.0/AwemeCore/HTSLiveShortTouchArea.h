@class HTSLiveShortTouchInfo, NSString, HTSLiveShortTouchBubble, NSNumber, HTSLiveShortTouchBigCard;

@interface HTSLiveShortTouchArea : IESLivePBBaseMessage

@property (retain, nonatomic) NSNumber *currentTime;
@property (nonatomic) int type;
@property (nonatomic) unsigned int priority;
@property (nonatomic) long long minWebcastSdkVersion;
@property (nonatomic) int shortTouchType;
@property (retain, nonatomic) HTSLiveShortTouchInfo *shortTouchInfo;
@property (nonatomic) BOOL hasShortTouchInfo;
@property (retain, nonatomic) HTSLiveShortTouchBigCard *shortTouchBigCard;
@property (nonatomic) BOOL hasShortTouchBigCard;
@property (copy, nonatomic) NSString *containerPayload;
@property (nonatomic) int loadType;
@property (retain, nonatomic) HTSLiveShortTouchBubble *bubbleParams;
@property (nonatomic) BOOL hasBubbleParams;
@property (copy, nonatomic) NSString *name;
@property (nonatomic) int hideMode;
@property (nonatomic) int enhancedTouch;
@property (nonatomic) long long dynamicPriority;

+ (id)descriptor;

- (id)dictionary;

@end
