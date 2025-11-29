@class NSString;

@interface AWEIMPanelButtonViewModel : AWEIMPanelViewModel

@property (copy, nonatomic) NSString *primaryTitle;
@property (copy, nonatomic) NSString *secondaryTitle;
@property (copy, nonatomic) id /* block */ primaryAction;
@property (copy, nonatomic) id /* block */ secondaryAction;

+ (id)defaultViewModel;

- (void).cxx_destruct;
- (id)init;

@end
