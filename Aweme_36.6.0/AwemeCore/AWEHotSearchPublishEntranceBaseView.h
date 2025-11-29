@class AWESearchHotSpotConfigModel;

@interface AWEHotSearchPublishEntranceBaseView : UIView

@property (copy, nonatomic) id /* block */ shotEntryClickedBlock;
@property (copy, nonatomic) id /* block */ discussEntryClickedBlock;
@property (copy, nonatomic) id /* block */ albumEntryClickedBlock;
@property (retain, nonatomic) AWESearchHotSpotConfigModel *model;
@property (nonatomic) long long containerType;

+ (id)createConcreteEntryViewWithStyleEnum:(long long)a0;

- (BOOL)shouldCustomizeLayout;
- (void)executeCustomManualLayoutWithContainerSize:(struct CGSize { double x0; double x1; })a0;
- (void)executeCustomAutoLayoutWithContainerView:(id)a0;
- (struct CGSize { double x0; double x1; })bottomBarRealSize;
- (void).cxx_destruct;
- (void)updateWithModel:(id)a0;

@end
