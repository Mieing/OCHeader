@class NSString, UIColor;

@interface AWEStudioComposerEditPageMiniFlowNextConfig : NSObject

@property (copy, nonatomic) NSString *buttonTitle;
@property (retain, nonatomic) UIColor *buttonColor;
@property (copy, nonatomic) id /* block */ decorateNextButton;
@property (nonatomic) long long buttonStyle;

- (void).cxx_destruct;
- (id)init;

@end
