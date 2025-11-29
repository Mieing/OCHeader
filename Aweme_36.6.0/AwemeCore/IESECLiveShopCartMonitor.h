@class IESECLiveApi, IESECLiveRoomContext, NSString;
@protocol IESECLiveShopCartMonitorDataSource;

@interface IESECLiveShopCartMonitor : NSObject <IESECLiveShopCartMonitor>

@property (weak, nonatomic) id<IESECLiveShopCartMonitorDataSource> dataSource;
@property (retain, nonatomic) IESECLiveRoomContext *roomContext;
@property (retain, nonatomic) IESECLiveApi *api;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didEnterRoomWithDataSource:(id)a0;
- (void)reportAlogWithExtraInfo:(id)a0;
- (BOOL)p_delegateHasAuthorityOnEnter;
- (BOOL)p_delegateRoomCartValid;
- (void).cxx_destruct;
- (id)initWithRoomContext:(id)a0;

@end
