@class UIFont, NSString, UIImage, NSAttributedString, NSValue, UIView, NSNumber, UIColor;

@interface WCTableViewCellLeftConfig : NSObject

@property (nonatomic) unsigned long long mode;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSAttributedString *titleAttributed;
@property (nonatomic) double customTitleLeft;
@property (nonatomic) double customTitleTop;
@property (nonatomic) double customTitleMaxWidth;
@property (retain, nonatomic) NSValue *customImageSize;
@property (retain, nonatomic) NSNumber *imageViewLeftMargin;
@property (retain, nonatomic) NSNumber *imageViewRightMargin;
@property (nonatomic) BOOL isMakeImageCenterWhenHaveDetail;
@property (retain, nonatomic) UIColor *titleColor;
@property (retain, nonatomic) UIFont *titleFont;
@property (nonatomic) unsigned long long titleNumberOfLines;
@property (nonatomic) BOOL bDetailRichTextView;
@property (copy, nonatomic) id /* block */ onDetailLinkClicked;
@property (copy, nonatomic) NSString *detail;
@property (retain, nonatomic) UIColor *detailColor;
@property (nonatomic) long long customDetailBreakMode;
@property (nonatomic) double customDetailMaxWidth;
@property (nonatomic) double customDetailHeight;
@property (nonatomic) double customDetailTopMargin;
@property (nonatomic) long long customDetailNumberOfLines;
@property (nonatomic) unsigned long long subOptionStyle;
@property (retain, nonatomic) UIImage *image;
@property (copy, nonatomic) NSString *imageURL;
@property (retain, nonatomic) UIImage *smallIcon;
@property (retain, nonatomic) UIColor *imageTintColor;
@property (copy, nonatomic) NSString *badgeText;
@property (copy, nonatomic) NSString *hintText;
@property (retain, nonatomic) UIView *customView;
@property (retain, nonatomic) NSValue *customViewSize;
@property (retain, nonatomic) NSNumber *customViewRightMargin;
@property (nonatomic) BOOL selected;
@property (nonatomic) BOOL titleCenter;
@property (nonatomic) BOOL isSubOptionLineCenterTitle;

- (void).cxx_destruct;

@end
