@class AWEGradientView, AWEFeedRVAIParseChapterView, NSString, AWEAwemeModel, UIView, AWEFeedRVAIParseFoldView, UIViewController;
@protocol AWESearchCommonAbstractPanelProtocol, AWEFeedRelatedVideoCardAIParseInfoViewDelegate;

@interface AWEFeedRelatedVideoCardAIParseInfoView : UIView <AWEFeedRelatedVideoCardAIParseInfoViewProtocol, AWESearchCommonAbstractProtocol>

@property (retain, nonatomic) UIView *abstractContainer;
@property (retain, nonatomic) UIViewController<AWESearchCommonAbstractPanelProtocol> *abstractVC;
@property (retain, nonatomic) AWEFeedRVAIParseFoldView *foldView;
@property (retain, nonatomic) AWEGradientView *gradientView;
@property (retain, nonatomic) UIView *tapView;
@property (retain, nonatomic) AWEFeedRVAIParseChapterView *chapterView;
@property (nonatomic) BOOL showFold;
@property (nonatomic) BOOL hasChapter;
@property (nonatomic) struct CGSize { double width; double height; } abstractVCSize;
@property (nonatomic) long long style;
@property (nonatomic) double foldViewHeight;
@property (retain, nonatomic) AWEAwemeModel *model;
@property (nonatomic) BOOL allowLayout;
@property (nonatomic) BOOL isExpand;
@property (weak, nonatomic) id<AWEFeedRelatedVideoCardAIParseInfoViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (double)getContentHeight;
- (void)expandIfNeed;
- (double)abstractViewVisibleHeight;
- (void)updateWithPlayTime:(double)a0;
- (double)getParseTop;
- (double)getParseHeight;
- (void)updateWithModel:(id)a0 referString:(id)a1;
- (void)setupChapterUI;
- (double)getAIChapterContentHeight;
- (void)setupAbstractContainerUI;
- (void)setupAbstractUI;
- (void)updateAbstractUI;
- (id)chapterArrayWithModel:(id)a0;
- (void)updateAbstractVCWithModel:(id)a0 referString:(id)a1;
- (double)getAIParseContentHeight;
- (id)getGradientColor;
- (void)seekVideoWithJumpTime:(double)a0 awemeID:(id)a1;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0;

@end
