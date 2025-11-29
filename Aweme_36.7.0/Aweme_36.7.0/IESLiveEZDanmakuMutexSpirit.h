@class NSString;

@interface IESLiveEZDanmakuMutexSpirit : IESLiveEZDanmakuSpirit <IESLiveEZDanmakuSpiritMutexProtocol>

@property (nonatomic) BOOL activated;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } targetRect;
@property (nonatomic) double moveDistance;
@property (nonatomic) BOOL reverseDirection;
@property (nonatomic) double speedMultiple;
@property (nonatomic) double targetAlphaScale;
@property (nonatomic) double targetSizeScale;
@property (nonatomic) double leaveDuration;
@property (nonatomic) double baseSpeed;
@property (nonatomic) double verticalOffset;
@property (nonatomic) BOOL verticalOffsetDown;
@property (nonatomic) long long relativeIndex;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
