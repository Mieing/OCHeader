@class NSString;
@protocol AWEMVDataPluginProtocol;

@interface AWEMVLandingStrategy : NSObject <AWEMVLandingStrategyProtocol>

@property (nonatomic) BOOL shouldDisableFirstRenderCache;
@property (nonatomic) unsigned long long refreshMode;
@property (nonatomic) BOOL forceRefresh;
@property (copy, nonatomic) id /* block */ provideDataBlock;
@property (nonatomic) BOOL provideDataModeNeedAnimation;
@property (nonatomic) unsigned long long customRefreshType;
@property (retain, nonatomic) Class customRequestDataPluginClass;
@property (retain, nonatomic) id<AWEMVDataPluginProtocol> customRequestDataPlugin;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
