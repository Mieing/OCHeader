@class IESECMallLegouBackRefreshFavoriteConfig, NSString, IESECMallPitayaModel;
@protocol IESECMallContextProtocol;

@interface IESECMallLegouBackGYLRefreshComponent : NSObject <IESECMallComponentProtocol>

@property (weak, nonatomic) id<IESECMallContextProtocol> mallContext;
@property (retain, nonatomic) IESECMallLegouBackRefreshFavoriteConfig *backRefreshConfig;
@property (nonatomic) long long defaultTabId;
@property (retain, nonatomic) IESECMallPitayaModel *pitayaModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentDidLoad;
- (void)registerLGGYLRefreshPitayaService;
- (BOOL)needRespondPitayaCallback;
- (BOOL)userHasFavoriteActionsBefore;
- (id)initWithConfigDic:(id)a0;
- (void).cxx_destruct;

@end
