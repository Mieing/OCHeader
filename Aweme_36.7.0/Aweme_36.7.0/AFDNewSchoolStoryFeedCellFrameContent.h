@class NSString, YYTextLayout, NSArray, AWEAwemeModel, NSMutableAttributedString;

@interface AFDNewSchoolStoryFeedCellFrameContent : NSObject

@property (copy, nonatomic) NSString *authorName;
@property (nonatomic) double containerWidth;
@property (nonatomic) double titleFontSize;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } hotSpotTagFrame;
@property (nonatomic) BOOL shouldShowHotSpotTag;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } descriptionFrame;
@property (retain, nonatomic) YYTextLayout *descriptionLayout;
@property (retain, nonatomic) NSArray *linkRangeArray;
@property (retain, nonatomic) NSMutableAttributedString *displayDescription;
@property (nonatomic) long long maxNumberOfRows;
@property (nonatomic) BOOL shouldShowFullTextButton;
@property (nonatomic) BOOL isShowFullTextButton;
@property (nonatomic) BOOL isToRed;
@property (copy, nonatomic) id /* block */ attachmentDidLoad;
@property (copy, nonatomic) NSString *referString;
@property (retain, nonatomic) AWEAwemeModel *aweme;

+ (BOOL)enableMixVideo:(id)a0;

- (id)hotSpotTagFont;
- (id)hotSpotTagColor;
- (BOOL)isAttributedStringTruncated:(id)a0;
- (void)appendMixVideoTagIfNeededWithAweme:(id)a0 attributedString:(id)a1;
- (id)formattedJumpTimeForTime:(id)a0;
- (void)replacePlayTagIfNeeded;
- (void)replaceAdTagIfNeeded;
- (void)replaceGifTagIfNeeded;
- (void)configFrameWithAweme:(id)a0 containerWidth:(double)a1 leftMargin:(double)a2 rightMargin:(double)a3 showAuthorName:(BOOL)a4 showVideoAbstract:(BOOL)a5 layoutType:(unsigned long long)a6;
- (void)configFrameWithAweme:(id)a0 containerWidth:(double)a1 layoutType:(unsigned long long)a2;
- (void)configFrameWithAweme:(id)a0 containerWidth:(double)a1 leftMargin:(double)a2 rightMargin:(double)a3 showAuthorName:(BOOL)a4 layoutType:(unsigned long long)a5;
- (BOOL)p_isConfigAttachImageFrameWithAweme:(id)a0;
- (void)p_configAttachmentImageFrameWithAweme:(id)a0 containerWidth:(double)a1 leftMargin:(double)a2 rightMargin:(double)a3;
- (id)descriptionStringForAweme:(id)a0;
- (id)authorFloatingRedTextIfNeed:(id)a0 textExtra:(id)a1 extraLength:(long long)a2;
- (id)authorColor;
- (id)textExtraArrayForAweme:(id)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })transferRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 withString:(id)a1;
- (id)authorFont;
- (id)challengeColor;
- (id)challengeFont;
- (id)contentFloatingRedTextIfNeed:(id)a0 textExtra:(id)a1 extraLength:(long long)a2;
- (void)appendPlayTagPlaceholderIfNeededWithAweme:(id)a0 attributedString:(id)a1;
- (void)appendAdTagPlaceholderIfNeededWithAweme:(id)a0 attributedString:(id)a1;
- (void)appendAlbumTagIfNeededWithAweme:(id)a0 attributedString:(id)a1;
- (id)addJumpTimeTextWithModel:(id)a0 attributes:(id)a1 authorName:(id)a2;
- (BOOL)shouldAppendAdTagWithAweme:(id)a0;
- (id)p_resizeImage:(id)a0 size:(struct CGSize { double x0; double x1; })a1;
- (void)updateDisplayDescriptionIfNeeded;
- (void).cxx_destruct;
- (id)init;

@end
