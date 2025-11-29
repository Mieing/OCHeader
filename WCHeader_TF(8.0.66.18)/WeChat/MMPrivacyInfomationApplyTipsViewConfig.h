@class UIImage, NSString;

@interface MMPrivacyInfomationApplyTipsViewConfig : NSObject

@property (retain, nonatomic) UIImage *bussinessIcon;
@property (retain, nonatomic) NSString *bussinessName;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *desc;
@property (retain, nonatomic) NSString *descHint;
@property (copy, nonatomic) id /* block */ allowAction;
@property (copy, nonatomic) id /* block */ disallowAction;

- (void).cxx_destruct;

@end
