@class MMFinderLiveTask, UILabel, MMFinderLiveConnectedMicBaseAudienceCellView;
@protocol MMFinderLiveConnectedMicUserCellViewDelegate;

@interface MMFinderLiveConnectedMicAudienceCellView : UITableViewCell

@property (retain, nonatomic) MMFinderLiveConnectedMicBaseAudienceCellView *baseView;
@property (weak, nonatomic) id<MMFinderLiveConnectedMicUserCellViewDelegate> actionDelegate;
@property (readonly, nonatomic) MMFinderLiveTask *liveTask;
@property (copy, nonatomic) id /* block */ expandStateShouldChange;
@property (retain, nonatomic) UILabel *subTitleLabel;

+ (double)cellHeightWithDescText:(id)a0 expandDescIfNeeded:(BOOL)a1 cellWidth:(double)a2;
+ (id)ReuseIdentifier;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)initBaseView;
- (void)prepareForReuse;
- (void)configNickNameLabel;
- (void)configSubTitleLabel;
- (void)updateWithConnectMicUser:(id)a0 searchText:(id)a1 subTitle:(id)a2;
- (void)updateWithPaidPrice:(unsigned long long)a0 descText:(id)a1 warningText:(id)a2 expandDescIfNeeded:(BOOL)a3;
- (void).cxx_destruct;

@end
