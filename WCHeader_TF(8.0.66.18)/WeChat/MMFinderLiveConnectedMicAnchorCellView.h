@class MMFinderLiveConnectedMicBaseAnchorCellView, MMFinderLiveTask, UILabel;
@protocol MMFinderLiveConnectedMicUserCellViewDelegate;

@interface MMFinderLiveConnectedMicAnchorCellView : UITableViewCell

@property (retain, nonatomic) MMFinderLiveConnectedMicBaseAnchorCellView *baseView;
@property (weak, nonatomic) id<MMFinderLiveConnectedMicUserCellViewDelegate> actionDelegate;
@property (readonly, nonatomic) MMFinderLiveTask *liveTask;
@property (retain, nonatomic) UILabel *subTitleLabel;

+ (id)ReuseIdentifier;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)prepareForReuse;
- (void)configNickNameLabel;
- (void)configSubTitleLabel;
- (void)updateWithConnectMicUser:(id)a0 searchInfo:(id)a1 forceHideOperationButton:(BOOL)a2 forceDisableOperationButton:(BOOL)a3 hideBottomSeparatorLine:(BOOL)a4;
- (void).cxx_destruct;

@end
