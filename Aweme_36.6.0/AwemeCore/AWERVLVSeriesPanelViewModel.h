@class NSArray, NSString, AWERVLVSeriesView;

@interface AWERVLVSeriesPanelViewModel : AWERVLVBasePanelViewModel <AWERVLVSelectDelegate, AWERVLVFloatPanelProtocol, AWERVLVRightPushPanelProtocol>

@property (retain, nonatomic) AWERVLVSeriesView *seriesView;
@property (retain, nonatomic) NSArray *albumModelList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)containerDidLayoutSubviews;
- (void)refreshModel:(id)a0;
- (void)selectAlbum:(id)a0;
- (id)panelContentView;
- (double)pushPanelTopPadding;
- (void).cxx_destruct;
- (id)contentScrollView;

@end
