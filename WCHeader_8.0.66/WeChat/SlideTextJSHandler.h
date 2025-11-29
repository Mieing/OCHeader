@class NSString;
@protocol SlideTextDelegate;

@interface SlideTextJSHandler : WSTemplateBaseJSHandler

@property (retain, nonatomic) NSString *fullText;
@property (nonatomic) long long currentCharLength;
@property (nonatomic) long long maxCharLength;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } selectedRange;
@property (weak, nonatomic) id<SlideTextDelegate> slideTextDelegate;

- (unsigned long long)getLocalJSBusinessType;
- (BOOL)onJsApiHandlerForwardDealWithFunc:(id)a0 params:(id)a1 callbackID:(id)a2;
- (void).cxx_destruct;

@end
