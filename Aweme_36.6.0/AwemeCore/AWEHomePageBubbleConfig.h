@class UIColor, UIFont, UIBlurEffect, UIImage;

@interface AWEHomePageBubbleConfig : NSObject

@property (nonatomic) BOOL needOptimize;
@property (retain, nonatomic) UIColor *darkBGColor;
@property (retain, nonatomic) UIColor *lightBGColor;
@property (retain, nonatomic) UIColor *darkTextColor;
@property (retain, nonatomic) UIColor *lightTextColor;
@property (retain, nonatomic) UIImage *darkPlaceHolder;
@property (retain, nonatomic) UIImage *lightPlaceHolder;
@property (retain, nonatomic) UIFont *textFont;
@property (retain, nonatomic) UIBlurEffect *darkBlurEffect;
@property (retain, nonatomic) UIBlurEffect *lightBlurEffect;
@property (retain, nonatomic) UIColor *darkLineColor;
@property (retain, nonatomic) UIColor *lightLineColor;
@property (retain, nonatomic) UIColor *darkLinkColor;
@property (retain, nonatomic) UIColor *lightLinkColor;

- (void).cxx_destruct;

@end
