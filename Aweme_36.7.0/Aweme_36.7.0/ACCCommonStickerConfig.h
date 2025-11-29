@class NSValue, NSNumber;

@interface ACCCommonStickerConfig : ACCStickerConfig

@property (nonatomic) long long preferredContainerFeature;
@property (nonatomic) long long supportedGestureType;
@property (retain, nonatomic) NSValue *gestureInvalidFrameValue;
@property (copy, nonatomic) id /* block */ isInDeleteStateCallback;
@property (retain, nonatomic) NSNumber *editable;
@property (retain, nonatomic) NSNumber *deleteable;
@property (nonatomic) BOOL hasTimeline;
@property (nonatomic) BOOL limitedSafeArea;
@property (nonatomic) BOOL limitedInMediaArea;
@property (nonatomic) BOOL limitedSafeAreaAfterChangingCanvas;
@property (nonatomic) BOOL hastInMediaArea;
@property (nonatomic) unsigned long long fromXiangSuType;

+ (Class)bubbleClass;
+ (Class)bubbleClass;

- (id)deleteConfig;
- (BOOL)hasDeleteFeature;
- (void).cxx_destruct;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
