@class NSArray, NSString, AWERVLVSeriesView;
@protocol AWERVLVSelectDelegate;

@interface AWERVLVSeriesViewController : AWERVMetaPanelViewController <UIGestureRecognizerDelegate, AWERVLVSelectDelegate>

@property (retain, nonatomic) AWERVLVSeriesView *seriesView;
@property (retain, nonatomic) NSArray *albumModelList;
@property (weak, nonatomic) id<AWERVLVSelectDelegate> delegate;
@property (copy, nonatomic) id /* block */ seriesCloseBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)selectAlbum:(id)a0;
- (void)refreshModel:(id)a0 currentSelectIndex:(long long)a1;
- (id)panelContentView;
- (void).cxx_destruct;
- (id)contentScrollView;
- (void)closeButtonTapped;

@end
