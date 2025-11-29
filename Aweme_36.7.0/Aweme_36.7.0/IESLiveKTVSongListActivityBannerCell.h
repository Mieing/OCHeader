@class NSString, UIView;
@protocol IESLiveHybridContainerFactoryAdapter, IESHYContainerProtocol;

@interface IESLiveKTVSongListActivityBannerCell : IESLiveListViewCell <IESLiveHybridContainerDelegate>

@property (retain, nonatomic) UIView<IESHYContainerProtocol> *hybridContainer;
@property (retain, nonatomic) id<IESLiveHybridContainerFactoryAdapter> webviewFactory;
@property (retain, nonatomic) NSString *urlString;
@property (retain, nonatomic) NSString *fallbackUrl;
@property (retain, nonatomic) NSString *tabName;
@property (nonatomic) BOOL isCPUOptimize;
@property (copy, nonatomic) id /* block */ didFinishLoadBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)heightForItem:(id)a0;

- (id)setupHybridContainer;
- (void)loadHybridContainer;
- (void)renderWithItem:(id)a0;
- (void)iesLiveHybridContainerDidFinishLoad:(id)a0;
- (BOOL)p_canRenderBanner;
- (void)layoutHybridContainer:(id)a0;
- (void)p_logWithCode:(long long)a0;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)loadData;

@end
