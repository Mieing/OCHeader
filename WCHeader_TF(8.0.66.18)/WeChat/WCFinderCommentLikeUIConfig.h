@class UIColor;

@interface WCFinderCommentLikeUIConfig : NSObject

@property (retain, nonatomic) UIColor *normalColor;
@property (retain, nonatomic) UIColor *likedColor;
@property (retain, nonatomic) UIColor *closedColor;

+ (id)defaultConfig;
+ (void)checkConfig:(id)a0;

- (void).cxx_destruct;

@end
