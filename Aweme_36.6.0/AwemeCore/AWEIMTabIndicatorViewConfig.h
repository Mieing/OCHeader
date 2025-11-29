@interface AWEIMTabIndicatorViewConfig : NSObject

@property (nonatomic) double fontSize;
@property (nonatomic) double unreadViewFontSize;
@property (nonatomic) double unreadViewHeight;
@property (nonatomic) double dotViewHeight;
@property (nonatomic) double itemPadding;
@property (nonatomic) double itemHeight;
@property (nonatomic) double labelHeight;
@property (nonatomic) double indicatorWidth;
@property (nonatomic) double unselectedAlpha;
@property (nonatomic) double indicatorBottomOffset;
@property (nonatomic) BOOL hideUnreadViewWhenSelected;
@property (nonatomic) unsigned long long style;

- (id)init;

@end
