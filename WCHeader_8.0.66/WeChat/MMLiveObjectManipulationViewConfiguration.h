@class UIColor;
@protocol MMLiveObjectManipulationViewCornerAction;

@interface MMLiveObjectManipulationViewConfiguration : NSObject <NSCopying>

@property (nonatomic) double minimumScale;
@property (nonatomic) double maximumScale;
@property (nonatomic) BOOL cancelOutOfBoundManipulations;
@property (nonatomic) BOOL enableTap;
@property (nonatomic) double cardinalRotationSnapAngle;
@property (nonatomic) double minimumHitAreaRatioRelativeToParent;
@property (nonatomic) double minimumBorderDimensionRatioRelativeToParent;
@property (nonatomic) double borderOutset;
@property (nonatomic) double borderWidth;
@property (retain, nonatomic) UIColor *borderColor;
@property (nonatomic) double borderCornerRadius;
@property (nonatomic) BOOL enableRotation;
@property (nonatomic) BOOL enableScaling;
@property (retain, nonatomic) id<MMLiveObjectManipulationViewCornerAction> topLeftCornerAction;
@property (retain, nonatomic) id<MMLiveObjectManipulationViewCornerAction> topRightCornerAction;
@property (retain, nonatomic) id<MMLiveObjectManipulationViewCornerAction> bottomLeftCornerAction;
@property (retain, nonatomic) id<MMLiveObjectManipulationViewCornerAction> bottomRightCornerAction;
@property (retain, nonatomic) id<MMLiveObjectManipulationViewCornerAction> topLeftCornerActionInAccessibilityMode;
@property (retain, nonatomic) id<MMLiveObjectManipulationViewCornerAction> topRightCornerActionInAccessibilityMode;
@property (retain, nonatomic) id<MMLiveObjectManipulationViewCornerAction> bottomLeftCornerActionInAccessibilityMode;
@property (retain, nonatomic) id<MMLiveObjectManipulationViewCornerAction> bottomRightCornerActionInAccessibilityMode;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
