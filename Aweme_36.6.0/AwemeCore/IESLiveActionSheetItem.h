@class NSString, UIFont, UIColor;

@interface IESLiveActionSheetItem : IESLiveDynamicModel

@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) UIFont *titleFont;
@property (retain, nonatomic) UIColor *titleColor;
@property (nonatomic) long long titleStyle;
@property (copy, nonatomic) id /* block */ handler;
@property (nonatomic) BOOL disabled;
@property (copy, nonatomic) id /* block */ onDisplay;
@property (copy, nonatomic) id /* block */ onStartPrepareAsyncDisplay;
@property (nonatomic) BOOL dismissBlocked;

+ (id)itemWithTitle:(id)a0 handler:(id /* block */)a1;

- (void).cxx_destruct;

@end
