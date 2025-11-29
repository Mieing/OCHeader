@class NSString, NSArray, UIView;

@interface AWEIMShowNewStyleShareToastContextModel : NSObject <AWEIMShowNewStyleShareToastContextProtocol>

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *tips;
@property (copy, nonatomic) NSString *tagText;
@property (copy, nonatomic) NSArray *shareModels;
@property (retain, nonatomic) UIView *containerView;
@property (copy, nonatomic) NSString *confirmTips;
@property (copy, nonatomic) NSString *trackEvent;
@property (copy, nonatomic) id /* block */ tapAction;
@property (copy, nonatomic) id /* block */ confirmAction;
@property (copy, nonatomic) id /* block */ dismissed;
@property (copy, nonatomic) id /* block */ willToastShowAction;
@property (copy, nonatomic) NSString *hint;
@property (nonatomic) unsigned long long tipType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
