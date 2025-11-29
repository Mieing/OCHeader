@class LiveMessageListHoverCellContentView;

@interface LiveMessageListHoverCellView : IESLiveMessageListBaseCell

@property (retain, nonatomic) LiveMessageListHoverCellContentView *hoverContentView;

+ (id)live_cellIdentifier;

- (void)refreshWith:(id)a0;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;

@end
