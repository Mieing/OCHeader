@class NSString, AWEAwemeModel, UIView, AWEFeedRVAIParseChapterView;
@protocol HunterContainerProtocol, AWEFeedRelatedVideoCardAIParseInfoViewDelegate;

@interface AWEFeedRelatedVideoCardAIParseView : UIView <HunterContainerLifeCycleProtocol, AWEFeedRelatedVideoCardAIParseInfoViewProtocol>

@property (retain, nonatomic) UIView *tapView;
@property (retain, nonatomic) AWEFeedRVAIParseChapterView *chapterView;
@property (nonatomic) BOOL hasChapter;
@property (nonatomic) struct CGSize { double width; double height; } abstractVCSize;
@property (nonatomic) long long style;
@property (nonatomic) double bottomOffset;
@property (retain, nonatomic) AWEAwemeModel *model;
@property (retain, nonatomic) UIView<HunterContainerProtocol> *containerView;
@property (nonatomic) BOOL isExpand;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<AWEFeedRelatedVideoCardAIParseInfoViewDelegate> delegate;

- (void)container:(id)a0 didChangeIntrinsicContentSize:(struct CGSize { double x0; double x1; })a1;
- (double)getContentHeight;
- (void)expandIfNeed;
- (double)abstractViewVisibleHeight;
- (void)updateWithPlayTime:(double)a0;
- (double)getParseTop;
- (double)getParseHeight;
- (void)updateWithModel:(id)a0 referString:(id)a1;
- (BOOL)hasKeyWord;
- (id)defaultUIConfig;
- (void)setupChapterUI;
- (double)getAIChapterContentHeight;
- (void)setupAbstractContainerUI;
- (id)chapterArrayWithModel:(id)a0;
- (void)updateAbstractVCWithModel:(id)a0 referString:(id)a1;
- (double)getAIParseContentHeight;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0;

@end
