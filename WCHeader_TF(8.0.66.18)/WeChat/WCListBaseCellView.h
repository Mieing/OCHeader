@class UIView, NSString, WCDataItem, UIImageView, WCCellGroupItem, NSMutableArray, WCCellGroup, MMUILabel, RichTextView, NSIndexPath;
@protocol WCListViewRowViewDelegate;

@interface WCListBaseCellView : MMUIView <RichTextLayoutDelegate> {
    WCDataItem *m_dataItem;
    BOOL m_bIsTouchInContentView;
    MMUILabel *m_timeLabel;
    UIView *m_cityLabel;
    UIImageView *m_accessoryView;
    UIView *m_contentView;
    RichTextView *m_contentLabel;
    UIImageView *m_failImageView;
    UIImageView *m_starredImageView;
    UIImageView *m_sharedImageView;
    UIImageView *m_lockedImageView;
}

@property (readonly, nonatomic) WCCellGroup *m_group;
@property (readonly, nonatomic) WCCellGroupItem *m_groupItem;
@property (readonly, nonatomic) NSMutableArray *m_rowDatas;
@property (retain, nonatomic) NSString *m_nsDescription;
@property (nonatomic) BOOL m_bShowDateLabel;
@property (nonatomic) BOOL m_bShowLock;
@property (nonatomic) long long accessoryType;
@property (nonatomic) long long m_type;
@property (retain, nonatomic) UIView *m_infoContainerView;
@property (weak, nonatomic) id<WCListViewRowViewDelegate> m_delegate;
@property (retain, nonatomic) NSIndexPath *m_indexPath;
@property (nonatomic) long long puzzleImageViewLayoutStyle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)getTimeLabelWidthCurOri;
+ (double)getTimeLabelMarginLeftCurOri;
+ (double)getContentWidthWithCellWidth:(double)a0;
+ (double)allStatusIconImageViewWidthWithGroup:(id)a0 groupItem:(id)a1;
+ (id)defaultContentLabel;
+ (double)maxContentWidthWithCellViewWidth:(double)a0 accessoryType:(long long)a1;
+ (BOOL)showsAccessoryView:(long long)a0;
+ (id)defaultCityLabel;
+ (id)defaultTimeLabel;
+ (id)timeLabelAttributedStringWithGroup:(id)a0;
+ (void)getTitle:(id *)a0 subTitle:(id *)a1 accessibiltyString:(id *)a2 withGroup:(id)a3;
+ (double)suitableContentHeightForGroup:(id)a0 contentViewHeight:(double)a1 shouldShowDate:(BOOL)a2;
+ (double)minLeftPartHeightWithGroup:(id)a0;
+ (double)getLayoutHeightWithGroup:(id)a0 groupItem:(id)a1 width:(double)a2 isFirstOneInsection:(BOOL)a3 isLastOneInSection:(BOOL)a4;
+ (double)calculateHeightWithGroup:(id)a0 groupItem:(id)a1 width:(double)a2 isFirstOneInsection:(BOOL)a3 isLastOneInSection:(BOOL)a4;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (BOOL)showsAccessoryView;
- (void)layoutSubviews;
- (void)setGroupItem:(id)a0 inGroup:(id)a1;
- (void)initDateTimeLabel;
- (void)initAccessoryView;
- (void)initContentLabel;
- (void)initFailImageView;
- (void)initStatusIconImageView;
- (void)initStarredImageView;
- (void)initSharedImageView;
- (void)initLockedImageView;
- (void)layoutStatusIconImageView;
- (double)allStatusIconImageViewWidth;
- (id)generateStatusInfoWithDataItem:(id)a0;
- (void)initView;
- (BOOL)shouldOpenNewLineAtY:(double)a0 withLineHeight:(double)a1 richTextView:(id)a2;
- (BOOL)handleShouldOpenNewLineAtY:(double)a0 withLineHeight:(double)a1 richTextView:(id)a2;
- (void)setNormalColor;
- (void)setHighlightedColor;
- (void)onClickEvent;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)updateAccessibility;
- (id)accessibilityComponents;
- (id)customAccessibilityComponents;
- (id)statusIconAccessibilityComponentsWithDataItem:(id)a0;
- (void).cxx_destruct;

@end
