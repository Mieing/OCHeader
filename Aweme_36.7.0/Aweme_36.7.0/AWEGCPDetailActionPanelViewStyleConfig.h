@class UIColor, UIFont, NSString;

@interface AWEGCPDetailActionPanelViewStyleConfig : NSObject

@property (retain, nonatomic) UIFont *buttonFont;
@property (retain, nonatomic) UIColor *buttonColor;
@property (nonatomic) double buttonImageSize;
@property (nonatomic) double imageTitleMargin;
@property (copy, nonatomic) NSString *likeImageName;
@property (copy, nonatomic) NSString *likeClickedImageName;
@property (copy, nonatomic) NSString *commentImageName;
@property (copy, nonatomic) NSString *favoriteImageName;
@property (copy, nonatomic) NSString *favoriteClickedImageName;
@property (copy, nonatomic) NSString *shareImageName;

+ (id)defaultStyleConfig;
+ (id)newStrategyStyleConfig;

- (void).cxx_destruct;

@end
