@interface AWEDCFeedEmptyPageConfig : AWEDCFeedBaseConfig

@property (nonatomic) unsigned long long emptyPageStyle;
@property (nonatomic) BOOL scrollToTopWhenShowDUXVacantView;
@property (nonatomic) BOOL scrollEnableWhenShowDUXVacantView;
@property (copy, nonatomic) id /* block */ vacantViewDetailInfoBlock;
@property (nonatomic) BOOL DUXVacantViewOnCollectionView;
@property (copy, nonatomic) id /* block */ getDUXVacantViewFrameBlock;
@property (copy, nonatomic) id /* block */ customPreformDUXVacantViewBlock;

- (void)setupDefaultConfig;
- (void).cxx_destruct;

@end
