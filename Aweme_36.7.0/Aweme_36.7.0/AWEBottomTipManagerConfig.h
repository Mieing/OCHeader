@class NSString, NSArray, UIView;

@interface AWEBottomTipManagerConfig : NSObject

@property (retain, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *tips;
@property (nonatomic) BOOL enableShowMultiAvatars;
@property (copy, nonatomic) NSString *tagText;
@property (copy, nonatomic) NSString *confirmTips;
@property (copy, nonatomic) NSString *trackEvent;
@property (retain, nonatomic) NSArray *list;
@property (retain, nonatomic) UIView *view;
@property (copy, nonatomic) id /* block */ tapAction;
@property (copy, nonatomic) id /* block */ confirmAction;
@property (copy, nonatomic) id /* block */ dimissed;
@property (copy, nonatomic) id /* block */ willToastShowAction;
@property (nonatomic) BOOL shouldUseTabBarHeightToLayout;

- (void).cxx_destruct;

@end
