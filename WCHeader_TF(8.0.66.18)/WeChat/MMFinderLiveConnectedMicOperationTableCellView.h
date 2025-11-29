@class MMFinderLiveConnectedMicOperationBaseCellView;

@interface MMFinderLiveConnectedMicOperationTableCellView : UITableViewCell

@property (retain, nonatomic) MMFinderLiveConnectedMicOperationBaseCellView *baseView;
@property (nonatomic) BOOL showQuitButton;
@property (copy, nonatomic) id /* block */ quitActionBlock;
@property (copy, nonatomic) id /* block */ pkActionBlock;

+ (id)ReuseIdentifier;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void).cxx_destruct;

@end
