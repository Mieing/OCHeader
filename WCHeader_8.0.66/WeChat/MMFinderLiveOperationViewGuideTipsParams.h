@class NSString, NSArray, UIView;

@interface MMFinderLiveOperationViewGuideTipsParams : NSObject

@property (retain, nonatomic) NSString *title;
@property (weak, nonatomic) UIView *target;
@property (nonatomic) long long triangleOrientation;
@property (retain, nonatomic) NSArray *dependentTypes;
@property (nonatomic) double duration;
@property (copy, nonatomic) id /* block */ onRemoved;
@property (nonatomic) BOOL removeWhenTouchOthers;

- (void).cxx_destruct;

@end
