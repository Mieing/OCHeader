@class UIViewController, UIView;
@protocol MinimizeTaskContainerInfoDelegate;

@interface MinimizeTaskContainerInfo : MMObject

@property (weak, nonatomic) id<MinimizeTaskContainerInfoDelegate> delegate;
@property (nonatomic) long long containerGroupType;
@property (weak, nonatomic) UIView *weakContentView;
@property (weak, nonatomic) UIView *customHandleLongpressView;
@property (nonatomic) struct CGSize { double width; double height; } containerSizeInAbsorbView;
@property (nonatomic) struct CGSize { double width; double height; } containerSizeInList;
@property (nonatomic) BOOL recieveTouches;
@property (weak, nonatomic) UIViewController *relatedVC;
@property (nonatomic) BOOL isAlwaysShowInForground;
@property (weak, nonatomic) UIView *weakCloseButton;
@property (nonatomic) double closeButtonPaddingRight;
@property (nonatomic) BOOL pinchSizeChange;
@property (nonatomic) BOOL hitTestDirectlyToView;
@property (copy, nonatomic) id /* block */ positionModificationBlock;

+ (BOOL)canAddMultiTaskWithGroup:(long long)a0;

- (id)init;
- (BOOL)canAddMultiTask;
- (void).cxx_destruct;

@end
