@class UIColor, NSString, NSURL, NSAttributedString, NSNumber;

@interface AWETeenSettingItemModel : NSObject

@property (retain, nonatomic) NSString *identifier;
@property (nonatomic) long long type;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSAttributedString *attributedTitle;
@property (copy, nonatomic) NSString *titleHighLightedPart;
@property (retain, nonatomic) UIColor *titleColor;
@property (copy, nonatomic) NSString *subTitle;
@property (copy, nonatomic) NSString *fancySubtitle;
@property (copy, nonatomic) NSString *detail;
@property (copy, nonatomic) NSString *rightButtonTitle;
@property (retain, nonatomic) UIColor *rightButtonBgColor;
@property (retain, nonatomic) UIColor *rightButtonLineColor;
@property (retain, nonatomic) UIColor *rightButtonTextColor;
@property (nonatomic) BOOL isCellLoading;
@property (copy, nonatomic) NSString *loadingImageName;
@property (copy, nonatomic) NSString *loadingPlaceholderText;
@property (copy, nonatomic) id /* block */ rightButtonAction;
@property (copy, nonatomic) id /* block */ detailButtonAction;
@property (retain, nonatomic) UIColor *detailColor;
@property (nonatomic) BOOL ignoreTitleTranslate;
@property (nonatomic) BOOL ignoreDetailTranslate;
@property (nonatomic) double detailWidth;
@property (copy, nonatomic) NSString *iconImageName;
@property (copy, nonatomic) NSString *svgIconImageName;
@property (copy, nonatomic) NSString *iconImageBundle;
@property (retain, nonatomic) NSURL *iconImageNameUrl;
@property (nonatomic) long long cellType;
@property (nonatomic) BOOL isSwitchOn;
@property (nonatomic) BOOL isEnable;
@property (nonatomic) BOOL isDisableExceptSwitch;
@property (nonatomic) BOOL isSelect;
@property (nonatomic) BOOL showDotView;
@property (nonatomic) long long colorStyle;
@property (nonatomic) double cellHeight;
@property (retain, nonatomic) NSNumber *customTopMargin;
@property (retain, nonatomic) NSNumber *customBottomMargin;
@property (nonatomic) BOOL highlightDetail;
@property (copy, nonatomic) id /* block */ cellTappedBlock;
@property (copy, nonatomic) id /* block */ switchChangedBlock;
@property (copy, nonatomic) id /* block */ cellRefreshBlock;
@property (retain, nonatomic) NSString *rightPicName;
@property (nonatomic) struct CGSize { double width; double height; } rightPicSize;
@property (copy, nonatomic) id /* block */ rightPicTappedBlock;
@property (copy, nonatomic) id /* block */ refreshSubtitleBlock;
@property (nonatomic) BOOL hasLineView;
@property (nonatomic) long long uploadIndex;
@property (retain, nonatomic) NSNumber *rightCustomViewForceVisibility;
@property (retain, nonatomic) NSNumber *customRightMargin;

- (void)refreshCell;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0;
- (id)init;

@end
