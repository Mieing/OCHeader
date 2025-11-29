@class UIView, NSString, WCFinderFeedContentVM, _TtC6WeChat25WCFinderSimpleProgressBar, WCFinderFeedImageCDNView, WCFinderAuthorContactView, WCFinderRichTextView, RichTextView, MMUIButton;
@protocol WCFinderLongVideoSeeLaterCellDelegate;

@interface WCFinderLongVideoSeeLaterCell : UICollectionViewCell <WCFinderFeedImageCDNViewDelegate, WCFinderGlobalPlaybackInfoExt, IWCFinderLongVideoSeeLaterView>

@property (retain, nonatomic) UIView *coverBackView;
@property (retain, nonatomic) WCFinderFeedImageCDNView *coverImgView;
@property (retain, nonatomic) RichTextView *titleView;
@property (retain, nonatomic) WCFinderAuthorContactView *contactView;
@property (retain, nonatomic) UIView *sepLine;
@property (retain, nonatomic) MMUIButton *deleteButton;
@property (retain, nonatomic) WCFinderRichTextView *reasonTextView;
@property (retain, nonatomic) _TtC6WeChat25WCFinderSimpleProgressBar *progressBar;
@property (nonatomic) struct CGSize { double width; double height; } layoutSize;
@property (nonatomic) BOOL isLastCell;
@property (retain, nonatomic) WCFinderFeedContentVM *contentVM;
@property (nonatomic) BOOL isInSeeLaterList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<WCFinderLongVideoSeeLaterCellDelegate> delegate;

+ (id)seeLaterReasonTextWithDataItem:(id)a0;
+ (double)cellHeightWithContentVM:(id)a0 width:(double)a1;
+ (double)getTitleMaxWidthWithWidth:(double)a0;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)prepareForReuse;
- (void)dealloc;
- (void)setupUI;
- (int)getCommentScene;
- (void)updateWithContentVM:(id)a0 isLastCell:(BOOL)a1 isInSeeLaterList:(BOOL)a2;
- (id)getReasonContent;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)onDeleteButtonClick:(id)a0;
- (void)onLongPress:(id)a0;
- (void)finderFeedImageLoadFinish;
- (void)onGlobalPlaybackInfoUpdatedWithTid:(id)a0 playInfo:(id)a1;
- (void).cxx_destruct;

@end
