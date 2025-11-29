@class NSString, NSTimer, IESECPDPRefreshConfig, NSMutableArray;
@protocol IESECPDPRefreshManagerDelegate;

@interface IESECPDPRefreshManager : NSObject <IESECPDPRefreshParamsConfigDelegate>

@property (weak, nonatomic) id<IESECPDPRefreshManagerDelegate> delegate;
@property (nonatomic) BOOL needRefresh;
@property (nonatomic) BOOL needRefreshWhenBackToForeground;
@property (retain, nonatomic) NSTimer *timer;
@property (retain, nonatomic) IESECPDPRefreshConfig *config;
@property (retain, nonatomic) NSMutableArray *objects;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)refreshForPreload:(id /* block */)a0;
- (id)initWithPdp:(id)a0;
- (void)recheckSupplementaryRefresh;
- (void)refreshImmediately;
- (void)configRefreshSections:(id)a0;
- (void)postRefreshTask;
- (void)configResizeOffsetEnable:(BOOL)a0;
- (void)configUpdateSections:(BOOL)a0;
- (void)configForceRefresh:(BOOL)a0;
- (void)configNoMoreRecommend:(BOOL)a0;
- (void)timerTrigger;
- (BOOL)isDelegateVCVisible;
- (void).cxx_destruct;
- (void)dealloc;
- (void)resetConfig;

@end
