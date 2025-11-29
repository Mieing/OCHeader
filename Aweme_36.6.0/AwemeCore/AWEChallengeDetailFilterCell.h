@class NSString, AWEChallengeFilterView, AWEChallengeDetailFilterModel, AWEChallengeVideoHeadView;
@protocol AWEChallengeDetailFilterCellDelegate;

@interface AWEChallengeDetailFilterCell : UICollectionViewCell <AWEChallengeVideoHeadViewDelegate, AWEChallengeFilterDelegate>

@property (weak, nonatomic) id<AWEChallengeDetailFilterCellDelegate> delegate;
@property (retain, nonatomic) AWEChallengeFilterView *filterView;
@property (retain, nonatomic) AWEChallengeVideoHeadView *videoHeadView;
@property (retain, nonatomic) AWEChallengeDetailFilterModel *filterModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateSortType:(unsigned long long)a0;
- (void)sortViewDidClick;
- (void)filterView:(id)a0 didFinishedSelectSortType:(unsigned long long)a1;
- (void)configWithFilterModel:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
