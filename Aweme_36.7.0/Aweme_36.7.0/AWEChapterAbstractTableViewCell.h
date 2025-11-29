@class NSString, TTTAttributedLabel, AWEChapterContext, UIView;
@protocol AWEChapterAbstractTableViewCellDelegate;

@interface AWEChapterAbstractTableViewCell : UITableViewCell <TTTAttributedLabelDelegate, AWEChapterTableViewCellProtocol>

@property (retain, nonatomic) TTTAttributedLabel *collapseLabel;
@property (retain, nonatomic) TTTAttributedLabel *expandLabel;
@property (retain, nonatomic) UIView *bottomLine;
@property (weak, nonatomic) id<AWEChapterAbstractTableViewCellDelegate> delegate;
@property (nonatomic) BOOL isKnowledgeStyle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) AWEChapterContext *chapterContext;
@property (nonatomic) BOOL isLoop;

+ (double)heightWithAbstractString:(id)a0 width:(double)a1 isExpanded:(BOOL)a2 isKnowledgeStyle:(BOOL)a3 context:(id)a4;
+ (double)heightWithChapterInfo:(id)a0 width:(double)a1 context:(id)a2;
+ (id)identifier;

- (void)attributedLabel:(id)a0 didSelectLinkWithTransitInformation:(id)a1;
- (void)configWithUIConfig:(id)a0;
- (void)updateSelectedStatus:(BOOL)a0;
- (void)configExpandLabelWithAbstractString:(id)a0;
- (void)configCollapseLabelWithAbstractString:(id)a0;
- (void)configureWithChapterInfo:(id)a0 model:(id)a1 context:(id)a2 coverImageLoadCompletion:(id /* block */)a3;
- (void)configWithAbstractString:(id)a0 isExpanded:(BOOL)a1;
- (void).cxx_destruct;
- (id)textFont;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)prepareForReuse;
- (id)colorNamed:(id)a0;
- (void)setupSubviews;

@end
