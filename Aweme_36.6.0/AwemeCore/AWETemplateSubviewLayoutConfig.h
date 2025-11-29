@class UIView;

@interface AWETemplateSubviewLayoutConfig : NSObject

@property (weak, nonatomic) UIView *rightView;
@property (nonatomic) double rightMargin;
@property (nonatomic) float rightPriority;
@property (weak, nonatomic) UIView *leftView;
@property (nonatomic) double leftMargin;
@property (nonatomic) float leftPriority;

- (void).cxx_destruct;

@end
