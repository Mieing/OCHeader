@interface IESECFeedCommentTemplateCell : UITableViewCell

@property (copy, nonatomic) id /* block */ cellPrepareForReuse;

- (void).cxx_destruct;
- (void)setSelected:(BOOL)a0 animated:(BOOL)a1;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)prepareForReuse;
- (void)awakeFromNib;

@end
