@class UIColor, AWEIMFeedInfoCardProps, NSAttributedString, AWEURLModel;

@interface AWEIMShareFeedContentCardProps : AWEIMGestureUIViewPresenterProps

@property (copy, nonatomic) NSAttributedString *topAttStr;
@property (copy, nonatomic) NSAttributedString *contentAttStr;
@property (nonatomic) struct CGSize { double width; double height; } contentImageSize;
@property (retain, nonatomic) AWEURLModel *contentImageURL;
@property (nonatomic) double feedCardHeight;
@property (retain, nonatomic) AWEIMFeedInfoCardProps *feedCardProps;
@property (retain, nonatomic) UIColor *lineColor;

- (void).cxx_destruct;

@end
