@class MMFinderLiveConnectedMicBaseExpandView;

@interface MMFinderLiveConnectedMicTableCellExpandView : UITableViewCell

@property (retain, nonatomic) MMFinderLiveConnectedMicBaseExpandView *baseView;
@property (nonatomic) BOOL isExpand;
@property (copy, nonatomic) id /* block */ actionBlock;

+ (id)ReuseIdentifier;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)prepareForReuse;
- (void)updateWithTitle:(id)a0 isExpand:(BOOL)a1;
- (void).cxx_destruct;

@end
