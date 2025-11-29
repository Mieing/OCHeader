@class UIColor, NSString, UIFont, UIImage, NSURL, WCFinderDynamicIconFetcherResponse, UIView;

@interface WCFinderStaticCoverInfoItem : NSObject

@property (readonly, nonatomic) BOOL isValied;
@property (nonatomic) double flexGrow;
@property (retain, nonatomic) NSString *text;
@property (retain, nonatomic) UIImage *icon;
@property (nonatomic) struct WCFinderDynamicIcon { UIImage *image; WCFinderDynamicIconFetcherResponse *op; } dynamicIcon;
@property (retain, nonatomic) NSURL *iconUrl;
@property (copy, nonatomic) id /* block */ iconGenerator;
@property (nonatomic) struct CGSize { double width; double height; } iconSize;
@property (nonatomic) long long iconPosition;
@property (nonatomic) double flexShrink;
@property (retain, nonatomic) UIColor *textColor;
@property (retain, nonatomic) UIFont *titleFont;
@property (retain, nonatomic) UIColor *blurColor;
@property (retain, nonatomic) NSString *accessibilityLabel;
@property (nonatomic) BOOL needRoundCorner;
@property (nonatomic) BOOL needBlur;
@property (nonatomic) double iconMarginRight;
@property (retain, nonatomic) UIView *customView;

- (id)init;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
