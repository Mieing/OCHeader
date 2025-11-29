@class NSDictionary;

@interface AWECommentSearchAnchorViewConfig : NSObject

@property (nonatomic) unsigned long long style;
@property (nonatomic) long long needAdjustWidth;
@property (copy, nonatomic) NSDictionary *hotSpotExpandDic;
@property (nonatomic) BOOL isBgWhite;

+ (id)config;

- (BOOL)shouldShowItemFrontIcon;
- (BOOL)shouldShowItemBackIcon;
- (double)itemViewRightMargin;
- (id)itemTextFont;
- (double)itemTextSingleWidth;
- (id)itemTextColor;
- (id)titleIconImageName;
- (BOOL)shouldShowTitleViewIcon;
- (id)titleTextFont;
- (struct CGSize { double x0; double x1; })titleIconSize;
- (double)titleIconTextMargin;
- (double)titleViewLeftMargin;
- (double)titleViewTopMargin;
- (unsigned long long)hotExpandType;
- (double)anchorViewRightMargin;
- (double)firstItemLeftMargin;
- (BOOL)shouldEntireInteractive;
- (double)hotExpandRightValue;
- (double)hotExpandLeftValue;
- (double)itemTextMinWidth;
- (double)itemTextMaxWidth;
- (BOOL)isValidWord:(id)a0;
- (void).cxx_destruct;
- (id)titleTextColor;
- (double)itemCornerRadius;
- (id)itemBackgroundColor;

@end
