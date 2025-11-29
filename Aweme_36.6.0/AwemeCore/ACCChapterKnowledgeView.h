@class UILabel;

@interface ACCChapterKnowledgeView : UIView

@property (retain, nonatomic) UILabel *knowledgeLabel;
@property (retain, nonatomic) UILabel *detailLabel;

- (void)configWithChapterKnowledge:(id)a0 width:(double)a1;
- (void).cxx_destruct;
- (id)init;
- (void)setupSubviews;

@end
