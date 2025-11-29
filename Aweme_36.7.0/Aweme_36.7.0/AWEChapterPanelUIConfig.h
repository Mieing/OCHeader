@class UIImage, NSNumber, UIColor;

@interface AWEChapterPanelUIConfig : NSObject

@property (nonatomic) BOOL isLandscapeStyle;
@property (retain, nonatomic) UIImage *navBarLeftIcon;
@property (retain, nonatomic) NSNumber *navProgressSwitchRightPadding;
@property (retain, nonatomic) UIColor *panelBackgroundColor;
@property (retain, nonatomic) UIColor *closeBtnBackgroundColor;
@property (retain, nonatomic) UIColor *knowledgeCellBackgroundColor;
@property (retain, nonatomic) UIColor *knowledgeCellTimeBorderColor;
@property (retain, nonatomic) NSNumber *textFontClassNumber;
@property (retain, nonatomic) NSNumber *titleFontClassNumber;
@property (retain, nonatomic) NSNumber *secondaryTextFontClassNumber;
@property (nonatomic) long long detailCellStyle;
@property (nonatomic) BOOL disableTableViewContentInset;
@property (nonatomic) long long navBarStyle;
@property (retain, nonatomic) NSNumber *abstractTopOffset;
@property (retain, nonatomic) NSNumber *abstractBottomOffset;
@property (retain, nonatomic) NSNumber *abstractBottomLineHeight;
@property (retain, nonatomic) UIColor *abstractBottomLineColor;
@property (retain, nonatomic) NSNumber *keyPointCellTopOffset;
@property (retain, nonatomic) UIColor *selectedBackgroundColor;
@property (retain, nonatomic) UIColor *cellSeparatorLineColor;

- (void).cxx_destruct;

@end
