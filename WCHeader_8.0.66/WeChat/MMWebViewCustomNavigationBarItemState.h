@class NSString, UIColor, UIImage;

@interface MMWebViewCustomNavigationBarItemState : MMObject

@property (copy, nonatomic) NSString *pageSubTitle;
@property (retain, nonatomic) UIColor *navigationBarColor;
@property (nonatomic) BOOL isRightBarItemJSApiDefined;
@property (copy, nonatomic) NSString *rightBarItemTitle;
@property (retain, nonatomic) UIColor *rightBarItemTintColor;
@property (retain, nonatomic) UIImage *rightBarItemIconImage;
@property (copy, nonatomic) id /* block */ rightBarItemClickCallBack;
@property (nonatomic) BOOL isRightBarItemHidden;
@property (nonatomic) BOOL isRightSearchItemHidden;
@property (nonatomic) BOOL disableMinimizeBlock;

- (BOOL)shouldBlockMinimization;
- (void).cxx_destruct;

@end
