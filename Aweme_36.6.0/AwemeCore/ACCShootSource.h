@class UITouch;

@interface ACCShootSource : NSObject <NSCopying>

@property (nonatomic) long long sourceFrom;
@property (nonatomic) long long subType;
@property (nonatomic) long long sourceStage;
@property (nonatomic) BOOL enableHold;
@property (nonatomic) double holdingThreshold;
@property (nonatomic) BOOL holding;
@property (nonatomic) BOOL orignalHoldingState;
@property (retain, nonatomic) UITouch *touch;
@property (nonatomic) BOOL forceStop;
@property (nonatomic) long long completeType;

- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
