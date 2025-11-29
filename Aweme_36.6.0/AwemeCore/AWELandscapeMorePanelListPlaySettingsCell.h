@class AWELandscapePageContext, NSString, AWELandscapeMorePanelCellModel, UILabel, AWELandscapeMorePanelPlaySettingsSegmentView;

@interface AWELandscapeMorePanelListPlaySettingsCell : UICollectionViewCell <AWELandscapeMorePanelPlaySettingsSegmentViewDelegate>

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) AWELandscapeMorePanelPlaySettingsSegmentView *segmentView;
@property (retain, nonatomic) AWELandscapeMorePanelCellModel *model;
@property (weak, nonatomic) AWELandscapePageContext *landscapePageContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateWithPanelCellModel:(id)a0 landscapePageContext:(id)a1;
- (void)trackPlaybackSettingChangeFrom:(id)a0 to:(id)a1;
- (void)trackPlaybackSettingChanged:(id)a0;
- (long long)getCurrentSegmentIndex;
- (double)segmentViewWidth;
- (id)playbackSettingTrackDic;
- (id)segmentArray;
- (long long)getTargetPlaybackSettingType:(id)a0;
- (id)playbackSettingDic;
- (void)segmentViewDidClick:(id)a0 index:(long long)a1;
- (void)segmentViewDidClick:(id)a0 fromIndex:(long long)a1 toIndex:(long long)a2;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
