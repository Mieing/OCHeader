@class UIView, MMImageView, MMHeadImageView, NSSet, FavoritesItemDataField, MMUILabel, UILabel;
@protocol RecordNodeDataSource, FavRecordNodeViewDelegate;

@interface FavRecordBaseNodeView : MMUIView {
    UILabel *m_srcTitleLabel;
    MMUILabel *m_srcTimeLabel;
    UIView *m_contentView;
    BOOL m_bIsLongPressHandled;
    double m_fContentHeight;
    MMUILabel *m_srcTitlePostLabel;
    MMHeadImageView *m_headImg;
    UIView *m_sepLine;
    MMImageView *m_iconNamePostfix;
}

@property (readonly, retain, nonatomic) id<RecordNodeDataSource> dataSource;
@property (readonly, retain, nonatomic) FavoritesItemDataField *favData;
@property (weak, nonatomic) id<FavRecordNodeViewDelegate> m_delegate;
@property (readonly, retain, nonatomic) NSSet *m_touches;
@property (weak, nonatomic) FavRecordBaseNodeView *referNodeView;

+ (double)heightForData:(id)a0;
+ (double)referNodeViewWidth;

- (id)initWithDataSource:(id)a0;
- (void)initView;
- (void)layoutSubviews;
- (void)setNodeSize;
- (void)initSrcTitle;
- (void)initIconNamePostfixWithIcon:(id)a0;
- (id)timeForDisplay:(int)a0;
- (void)updateNodeWithTimePrefix:(int)a0 headHidden:(BOOL)a1 bottomLineHidden:(BOOL)a2;
- (void)initContentView;
- (void)addContentSubView;
- (void)updateContentSubview;
- (BOOL)isTouchInContentView:(id)a0;
- (id)getThumbImageView;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)onLongPressHeadView;
- (void)LongPressEvents;
- (void)pressedEvents;
- (void)onTouchCancel;
- (void)onTouchDown;
- (void)onTouchDownRepeat;
- (void)onTouchUpInside;
- (void)onLongTouch;
- (void)onClickAsRefer;
- (void).cxx_destruct;

@end
