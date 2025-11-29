@class UIFont, NSString, UIColor, UIImage, NSArray;
@protocol AWEIMSwipeActionTransitioning;

@interface AWEIMSwipeAction : NSObject

@property (retain, nonatomic) NSString *identifier;
@property (nonatomic) long long style;
@property (retain, nonatomic) id<AWEIMSwipeActionTransitioning> transitionDelegate;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) UIFont *font;
@property (retain, nonatomic) UIColor *textColor;
@property (retain, nonatomic) UIColor *highlightedTextColor;
@property (retain, nonatomic) UIImage *image;
@property (retain, nonatomic) UIImage *highlightedImage;
@property (retain, nonatomic) UIColor *backgroundColor;
@property (retain, nonatomic) UIColor *highlightedBackgroundColor;
@property (nonatomic) BOOL notHidesWhenSelected;
@property (copy, nonatomic) id /* block */ handler;
@property (nonatomic) BOOL needReConfirm;
@property (copy, nonatomic) NSArray *reConfirmActions;
@property (retain, nonatomic) NSString *reconfirmTitle;
@property (retain, nonatomic) UIFont *reconfirmFont;
@property (retain, nonatomic) UIColor *reconfirmTextColor;
@property (retain, nonatomic) UIColor *reconfirmHighlightedTextColor;
@property (copy, nonatomic) id /* block */ reconfirmStatusChangeBlock;
@property (copy, nonatomic) id /* block */ completionHandler;

+ (id)actionWithStyle:(long long)a0 title:(id)a1 font:(id)a2 textColor:(id)a3 backgroundColor:(id)a4 handler:(id /* block */)a5;

- (void).cxx_destruct;

@end
