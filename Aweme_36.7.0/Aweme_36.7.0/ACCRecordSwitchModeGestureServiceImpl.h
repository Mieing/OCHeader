@class NSString, NSDictionary, ACCGroupedPredicate, AWEVideoPublishViewModel;
@protocol IESServiceProvider;

@interface ACCRecordSwitchModeGestureServiceImpl : NSObject <ACCRecordSwitchModeGestureService>

@property (retain, nonatomic) AWEVideoPublishViewModel *publishModel;
@property (retain, nonatomic) NSDictionary *switchMethodMap;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } gestureResponseArea;
@property (weak, nonatomic) id<IESServiceProvider> serviceProvider;
@property (readonly, nonatomic) ACCGroupedPredicate *disableSwipeGesturePredicate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithPublishModel:(id)a0;
- (void)swipeToLeftMode;
- (void)swipeToRightMode;
- (id)createLeftSwipeGes;
- (id)createRightSwipeGes;
- (id)containerMode;
- (void).cxx_destruct;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;

@end
