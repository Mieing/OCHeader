@class AWEIMMessage, NSString, UIView, AWEIMTextTemplateModel;
@protocol IESIMTextHighlightProtocol;

@interface AWEIMTextUtilsContext : NSObject

@property (retain, nonatomic) AWEIMTextTemplateModel *templateModel;
@property (retain, nonatomic) id<IESIMTextHighlightProtocol> highlight;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } textRange;
@property (retain, nonatomic) AWEIMMessage *message;
@property (retain, nonatomic) UIView *view;
@property (copy, nonatomic) NSString *btmToken;
@property (nonatomic) long long urlUIType;
@property (nonatomic) long long style;

- (void).cxx_destruct;

@end
