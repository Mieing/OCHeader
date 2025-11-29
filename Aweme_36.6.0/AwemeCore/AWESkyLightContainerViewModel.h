@class NSString;
@protocol AWESkyLightTopBarViewModelProtocol, AWESkyLightContentViewModelProtocol;

@interface AWESkyLightContainerViewModel : NSObject <AWESkyLightContainerViewModelProtocol>

@property (retain, nonatomic) id<AWESkyLightTopBarViewModelProtocol> topBarViewModel;
@property (retain, nonatomic) id<AWESkyLightContentViewModelProtocol> contentViewModel;
@property (nonatomic) BOOL skyLightDataReady;
@property (nonatomic) BOOL contentDataReady;
@property (nonatomic) BOOL isSkyLightExpanded;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)initFetchWithCompletion:(id /* block */)a0;
- (double)skyLightHeight;
- (id)initWithSkyLightTopBarViewModel:(id)a0 contentViewModel:(id)a1;
- (id)skyLightTopBar;
- (void)skyLightStatusChanged:(BOOL)a0;
- (void).cxx_destruct;
- (id)contentViewController;
- (id)capsuleView;
- (void)refreshWithCompletion:(id /* block */)a0;

@end
