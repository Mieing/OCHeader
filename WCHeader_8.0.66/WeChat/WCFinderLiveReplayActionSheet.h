@class MMFinderLiveReplayTask;

@interface WCFinderLiveReplayActionSheet : MMScrollActionSheet

@property (retain, nonatomic) MMFinderLiveReplayTask *replayLiveTask;

- (id)initWithLiveTask:(id)a0;
- (void)loadData;
- (id)loadItemArray;
- (BOOL)isConcertTicket;
- (id)transparentViewBackgroundColor;
- (id)bottomPadddingViewBackgroundColor;
- (id)titleLabelColor;
- (id)cancelButtonTitleColor;
- (id)cancelButtonBackgroundColor;
- (id)containerViewBlurBackgroundColor;
- (id)seperatorBackgroundColor;
- (void).cxx_destruct;

@end
