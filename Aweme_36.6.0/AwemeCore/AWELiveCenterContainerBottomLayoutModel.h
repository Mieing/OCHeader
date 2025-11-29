@class UIView;

@interface AWELiveCenterContainerBottomLayoutModel : NSObject

@property (weak, nonatomic) UIView *topView;
@property (weak, nonatomic) UIView *bottomView;
@property (nonatomic) double offset;
@property (nonatomic) unsigned long long type;
@property (nonatomic) BOOL isTopLayout;

- (void).cxx_destruct;

@end
