@class NSString, MMLiveFeedStreamCommentContentView;

@interface MMFinderLiveFeedStreamCommentView : MMFinderLiveFeedStreamWidgetBaseView <IMMFontMgrExt>

@property (retain, nonatomic) MMLiveFeedStreamCommentContentView *commentContentView;
@property (nonatomic) BOOL isCloseComment;
@property (nonatomic) BOOL hasAppendComment;
@property (nonatomic) double currentLayoutStandardWidth;
@property (nonatomic) double currentLayoutStandardLeft;
@property (nonatomic) BOOL isLayoutStandardChanged;
@property (nonatomic) double currentLayoutFontScale;
@property (nonatomic) BOOL isLayoutFontScaleChanged;
@property (nonatomic) unsigned long long style;
@property (nonatomic) unsigned long long limitedDisplayCommentCount;
@property (copy, nonatomic) id /* block */ actionBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setTaskId:(id)a0;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (void)handleLayoutOrientationChangedBeforeLayout;
- (void)handleLayoutOrientationChangedAfterLayout;
- (void)judgeLayoutStandardWidthChanged;
- (void)judgeLayoutFontScaleChanged;
- (void)initDefaultLayoutStandard;
- (void)initDefaultLayoutFontScale;
- (void)updateLayoutStandardWidth;
- (double)commentTableContentWidth:(id)a0;
- (void)updateLayoutFontScale;
- (BOOL)needPreAppendAnchorNotice;
- (void)preAppendComments:(id)a0;
- (void)appendScrollToBottom:(BOOL)a0;
- (void)appendCommentDataItemList:(id)a0 forTaskId:(id)a1 boxId:(id)a2 preAppend:(BOOL)a3;
- (id)createCommentTableViewModelForCommentContentView:(id)a0 boxId:(id)a1;
- (id)createCommentContentView;
- (id)commentTableViewModel;
- (void)onFontSizeChange;
- (void)startExposeAction;
- (void)endExposeAction;
- (void).cxx_destruct;

@end
