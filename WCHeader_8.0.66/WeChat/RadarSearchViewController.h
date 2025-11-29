@class NSString, RadarSearchView;

@interface RadarSearchViewController : MMUIViewController <RadarSearchViewDelegate, IRadarSearchExt> {
    RadarSearchView *m_radarView;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (BOOL)useBlackStatusbar;
- (BOOL)shouldHideNavigationBar;
- (void)dealloc;
- (void)onRadarSearchViewClose:(BOOL)a0;
- (void)initRadarSearchView;
- (id)initForRadarSearch;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (id)getCurViewController;
- (void).cxx_destruct;

@end
