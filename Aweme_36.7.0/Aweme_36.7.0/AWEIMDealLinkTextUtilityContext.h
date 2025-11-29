@class AWEIMMessage, NSString, UIView, AWEIMTextTemplateModel;

@interface AWEIMDealLinkTextUtilityContext : NSObject

@property (retain, nonatomic) AWEIMTextTemplateModel *templateModel;
@property (retain, nonatomic) AWEIMMessage *message;
@property (retain, nonatomic) UIView *view;
@property (nonatomic) long long style;
@property (copy, nonatomic) NSString *btmToken;
@property (nonatomic) long long urlUIType;

- (void).cxx_destruct;

@end
