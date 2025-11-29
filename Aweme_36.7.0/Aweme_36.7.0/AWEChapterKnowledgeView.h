@class AWEAwemeModel, AWECodeGenChapterPointModel, AWEPageContext, UILabel, UIView, UIButton;
@protocol AWEPlayInteractionContextProtocol, AWELandscapeChapterPanelControllerProtocol;

@interface AWEChapterKnowledgeView : UIView

@property (retain, nonatomic) UILabel *knowledgeLabel;
@property (retain, nonatomic) UILabel *detailLabel;
@property (retain, nonatomic) UIView *interactionView;
@property (retain, nonatomic) UIButton *likeButton;
@property (retain, nonatomic) UIButton *dislikeButton;
@property (nonatomic) long long index;
@property (nonatomic) long long chapterIndex;
@property (weak, nonatomic) id<AWELandscapeChapterPanelControllerProtocol> delegate;
@property (copy, nonatomic) id /* block */ contentTrackerSubBlock;
@property (retain, nonatomic) AWEPageContext<AWEPlayInteractionContextProtocol> *contextInfo;
@property (retain, nonatomic) AWEAwemeModel *model;
@property (retain, nonatomic) AWECodeGenChapterPointModel *knowledge;

- (void)likeButtonClicked:(id)a0;
- (BOOL)shouldShowInteractionView;
- (void)configInteractionView;
- (id)chapterKnowledgeDict;
- (void)dislikeButtonClicked:(id)a0;
- (void)configWithModel:(id)a0 context:(id)a1 chapterIndex:(long long)a2;
- (void)configWithChapterKnowledge:(id)a0 width:(double)a1;
- (void).cxx_destruct;
- (id)init;
- (void)setupSubviews;

@end
