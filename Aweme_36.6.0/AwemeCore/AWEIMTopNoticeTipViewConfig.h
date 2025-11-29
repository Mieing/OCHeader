@class NSString, NSAttributedString, UIView;
@protocol IESIMTipProtocol;

@interface AWEIMTopNoticeTipViewConfig : NSObject

@property (nonatomic) long long style;
@property (retain, nonatomic) UIView *leftView;
@property (copy, nonatomic) NSAttributedString *tipAttributeText;
@property (copy, nonatomic) NSString *actionText;
@property (retain, nonatomic) UIView<IESIMTipProtocol> *duxTip;
@property (nonatomic) unsigned long long duxTipHeight;
@property (retain, nonatomic) UIView *customView;

- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0;

@end
