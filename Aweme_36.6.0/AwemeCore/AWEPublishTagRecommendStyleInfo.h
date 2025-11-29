@class NSString, UIFont;

@interface AWEPublishTagRecommendStyleInfo : NSObject

@property (retain, nonatomic) NSString *namePrefix;
@property (retain, nonatomic) UIFont *nameFont;
@property (retain, nonatomic) NSString *nameColor;
@property (nonatomic) double nameLabelHeight;
@property (nonatomic) double tagImageViewHeigth;
@property (nonatomic) double tagImageViewWidth;
@property (nonatomic) double hotspotTagImageViewHeight;
@property (nonatomic) double hotspotTagImageViewWidth;
@property (nonatomic) double tagImageViewLeftPadding;
@property (retain, nonatomic) NSString *tagHistoryIconName;
@property (nonatomic) double itemHeight;
@property (nonatomic) double itemCornerRadius;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } collectionViewContentInsets;
@property (retain, nonatomic) NSString *itemBackgroundColorName;
@property (nonatomic) BOOL hiddenSeparateLine;
@property (nonatomic) BOOL hiddenGradientView;

- (void).cxx_destruct;

@end
