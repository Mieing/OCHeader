@class YYTextLayout, NSArray, NSMutableAttributedString;

@interface AWENewHotSpotCommentContentFrame : NSObject

@property (nonatomic) double containerWidth;
@property (nonatomic) long long currentContentNumberOfRows;
@property (nonatomic) BOOL hasCalculateNumberOfRows;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } descriptionFrame;
@property (retain, nonatomic) YYTextLayout *descriptionLayout;
@property (retain, nonatomic) NSArray *linkRangeArray;
@property (retain, nonatomic) NSMutableAttributedString *displayDescription;
@property (nonatomic) BOOL unlimitedMaxNumberOfRows;
@property (nonatomic) BOOL shouldShowFullTextButton;
@property (nonatomic) BOOL isShowingFullTextButton;
@property (nonatomic) BOOL shouldShowFoldButton;
@property (nonatomic) long long contentLabelStyle;
@property (nonatomic) BOOL isCommentPanelHeader;

- (void)configFrameWithCardModel:(id)a0 containerWidth:(double)a1;
- (void)attributedContentForComment:(id)a0 displayWidth:(double)a1;
- (void)foldButtonWithAttributedString:(id)a0;
- (BOOL)isAttributedStringTruncated:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (long long)maxNumberOfRows;

@end
