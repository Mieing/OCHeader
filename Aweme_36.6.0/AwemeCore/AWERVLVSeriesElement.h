@class NSString, AWERVLVSeriesView;

@interface AWERVLVSeriesElement : AWERVVideoInfoBaseElement <AWERVLVSeriesViewDelegate>

@property (retain, nonatomic) AWERVLVSeriesView *seriesView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isSupportMultiSeries;
- (long long)getCurrentAlbumIndex;
- (void)showAllPanelWithModel:(id)a0 currentSelectIndex:(long long)a1;
- (void)trackLongVideoShowWithSeriesIndex:(long long)a0;
- (void).cxx_destruct;
- (void)setData:(id)a0;
- (void)viewDidLoad;

@end
