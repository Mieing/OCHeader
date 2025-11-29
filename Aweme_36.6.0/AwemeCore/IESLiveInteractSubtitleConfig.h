@class UIColor, UIFont;

@interface IESLiveInteractSubtitleConfig : NSObject

@property (nonatomic) BOOL firstSetup;
@property (nonatomic) double subtitleViewWidth;
@property (nonatomic) double subtitleViewHeight;
@property (nonatomic) double marginLeft;
@property (nonatomic) double marginTop;
@property (retain, nonatomic) UIColor *subtitleBackgroundColor;
@property (nonatomic) double subtitleCollectionViewHeight;
@property (nonatomic) double subtitleCellHeight;
@property (nonatomic) double subtitleLabelWidth;
@property (nonatomic) double subtitleLabelHeight;
@property (nonatomic) double nameLabelWidth;
@property (nonatomic) double nameLabelHeight;
@property (retain, nonatomic) UIFont *nameLabelFont;
@property (retain, nonatomic) UIFont *subtitleLabelFont;
@property (nonatomic) long long style;
@property (nonatomic) double x;
@property (nonatomic) double y;
@property (nonatomic) long long type;
@property (nonatomic) BOOL locationModified;
@property (nonatomic) BOOL disableDrag;
@property (nonatomic) BOOL disableDelete;
@property (nonatomic) BOOL previewNeedPress;

- (id)initWithStyleType:(long long)a0 type:(long long)a1;
- (void)setUpDefaultStyle;
- (void)setUpDefaultData;
- (void).cxx_destruct;
- (void)updateWithStyle:(long long)a0;

@end
