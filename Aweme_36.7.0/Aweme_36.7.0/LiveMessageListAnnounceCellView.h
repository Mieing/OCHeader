@class LiveMessageListAnnounceView;

@interface LiveMessageListAnnounceCellView : IESLiveMessageListBaseCell

@property (retain, nonatomic) LiveMessageListAnnounceView *anounceView;

+ (id)live_cellIdentifier;
+ (double)heightForNode:(id)a0;

- (void)refreshWith:(id)a0;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;

@end
