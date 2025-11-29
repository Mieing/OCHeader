@class NSString, NSHashTable, AWELiveNewPreStreamViewModel, NSMutableArray, IESLiveModalDialog;
@protocol IESLivePlayerProtocol;

@interface AWELivePreStreamEnterRoomManager : NSObject <AWELivePreStreamEnterRoomManagerInterface>

@property (weak, nonatomic) AWELiveNewPreStreamViewModel *viewModel;
@property (weak, nonatomic) id<IESLivePlayerProtocol> player;
@property (retain, nonatomic) NSMutableArray *enterRoomDataProviders;
@property (retain, nonatomic) NSHashTable *weakEnterRoomDataProviders;
@property (retain, nonatomic) IESLiveModalDialog *modalDialog;
@property (copy, nonatomic) id /* block */ didEndedLiveBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDIContext:(id)a0;
- (void)registerDataProvider:(id)a0;
- (void)enterLiveRoomWithContext:(id)a0 completion:(id /* block */)a1;
- (id)p_checkParams:(id)a0 withParamsList:(id)a1;
- (void)p_registerEnterRoomServices;
- (void)p_setUpWithContext:(id)a0;
- (BOOL)hasLiveEnd;
- (BOOL)p_shouldEnterLiveRoomWithContext:(id)a0;
- (void)p_trackEvents;
- (void)p_provideExtraParamasWithContext:(id)a0;
- (void)p_enterLiveRoomWithContext:(id)a0 completion:(id /* block */)a1;
- (void)p_realEnterLiveRoomWithContext:(id)a0 completion:(id /* block */)a1;
- (void)p_showEnterOtherRoomWithContext:(id)a0 completion:(id /* block */)a1;
- (void)p_provideUniversalParamsWithContext:(id)a0;
- (void).cxx_destruct;
- (void)removeDataProvider:(id)a0;

@end
