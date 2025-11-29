@class NSArray;

@interface WCFinderBulletConfig : NSObject

@property (nonatomic) double gap;
@property (nonatomic) BOOL isLandscape;
@property (nonatomic) double playRate;
@property (nonatomic) double videoDuration;
@property (copy, nonatomic) id /* block */ touchAction;
@property (nonatomic) BOOL ignoreEmptyTouch;
@property (retain, nonatomic) NSArray *ignoreTouchAreas;
@property (nonatomic) double lineSpacing;

- (void).cxx_destruct;

@end
