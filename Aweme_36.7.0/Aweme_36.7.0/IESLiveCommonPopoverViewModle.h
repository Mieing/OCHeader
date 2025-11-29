@class NSString, UIView;

@interface IESLiveCommonPopoverViewModle : NSObject

@property (nonatomic) long long showtype;
@property (nonatomic) long long arrowDirection;
@property (weak, nonatomic) UIView *pointingView;
@property (weak, nonatomic) UIView *containerView;
@property (nonatomic) double offsetForArrowToContainer;
@property (nonatomic) double offsetForArrowToPointingView;
@property (nonatomic) double spaceForArrowToPointingView;
@property (copy, nonatomic) NSString *schemaUrl;

- (void).cxx_destruct;

@end
