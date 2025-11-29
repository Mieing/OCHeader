@class NSString, UIView;

@interface AWELivePipSettingModel : NSObject

@property (copy, nonatomic) NSString *content;
@property (nonatomic) BOOL isOn;
@property (copy, nonatomic) id /* block */ changeSwitch;
@property (retain, nonatomic) UIView *rightView;

- (void).cxx_destruct;

@end
